/* DO NOT EDIT.
 * Generated by ../bin/vtkEncodeString
 * 
 * Define the vtkStructuredGridLIC2D_fs string.
 *
 * Generated from file: /home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/Hybrid/vtkStructuredGridLIC2D_fs.glsl
 */
#include "vtkStructuredGridLIC2D_fs.h"
const char *vtkStructuredGridLIC2D_fs =
"//=========================================================================\n"
"//\n"
"//  Program:   Visualization Toolkit\n"
"//  Module:    vtkStructuredGridLIC2D_fs.glsl\n"
"//\n"
"//  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen\n"
"//  All rights reserved.\n"
"//  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.\n"
"//\n"
"//     This software is distributed WITHOUT ANY WARRANTY; without even\n"
"//     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR\n"
"//     PURPOSE.  See the above copyright notice for more information.\n"
"//\n"
"//=========================================================================\n"
"\n"
"// Filename: vtkStructuredGridLIC2D_fs.glsl\n"
"// Filename is useful when using gldb-gui\n"
"\n"
"#version 120 // because of transpose()\n"
"\n"
"\n"
"/*\n"
"For an input structure grid, this computes the inverse jacobian for each point.\n"
"\n"
"Algorithm:\n"
"* PASS ONE\n"
"* * render to compute the transformed vector field for the points.\n"
"* PASS TWO\n"
"* * perform LIC with the new vector field. This has to happen in a different\n"
"*   pass than computation of the transformed vector.\n"
"* PASS THREE\n"
"* * Render structued slice quads with correct texture correct tcoords and apply\n"
"*   the LIC texture to it.\n"
"*/\n"
"\n"
"uniform sampler2D texPoints;  // point coordinates\n"
"uniform sampler2D texVectorField; // vector field.\n"
"uniform vec3 uDimensions;     // structured dimensions; initially == (width, height, 1)\n"
"\n"
"uniform int uSlice; // 0,1,2\n"
"\n"
"ivec3 getIJK(vec3 ninjnk, vec3 dims)\n"
"{\n"
"  return ivec3(floor(ninjnk*(dims-1.0)+vec3(0.5, 0.5, 0.5)));\n"
"}\n"
"\n"
"vec3 getVector(ivec3 ijk, vec3 dims, sampler2D field)\n"
"{\n"
"  // ignoring k component for now since dims =  (width, height, 1)\n"
"  // not any more.\n"
"  vec3 rcoord = vec3(ijk)/max(vec3(1.0), dims-1.0);\n"
"  vec2 tcoord;\n"
"\n"
"  if(uSlice==0)\n"
"   {\n"
"    tcoord.xy=rcoord.yz;\n"
"   }\n"
"  else\n"
"  {\n"
"   if(uSlice==1)\n"
"    {\n"
"     tcoord.xy=rcoord.xz; \n"
"    }\n"
"    else\n"
"    {\n"
"     tcoord.xy=rcoord.xy;\n"
"    }\n"
"  }\n"
"\n"
"  return texture2D(field, tcoord).xyz;\n"
"}\n"
"\n"
"float determinant(mat3 m)\n"
"{\n"
"  // develop determinant along first row.\n"
"return m[0][0]*(m[2][2]*m[1][1] - m[2][1]*m[1][2])\n"
"     - m[1][0]*(m[2][2]*m[0][1] - m[2][1]*m[0][2])\n"
"     + m[2][0]*(m[1][2]*m[0][1] - m[1][1]*m[0][2]);\n"
"}\n"
"\n"
"mat3 inverse(mat3 mm, float det)\n"
"{\n"
"  mat3 m=transpose(mm);\n"
"  \n"
"  mat3 adjM = mat3(\n"
"    m[2][2]*m[1][1]-m[2][1]*m[1][2], -(m[2][2]*m[0][1]-m[2][1]*m[0][2]),  m[1][2]*m[0][1]-m[1][1]*m[0][2],\n"
"  -(m[2][2]*m[1][0]-m[2][0]*m[1][2]),  m[2][2]*m[0][0]-m[2][0]*m[0][2], -(m[1][2]*m[0][0]-m[1][0]*m[0][2]),\n"
"    m[2][1]*m[1][0]-m[2][0]*m[1][1], -(m[2][1]*m[0][0]-m[2][0]*m[0][1]),  m[1][1]*m[0][0]-m[1][0]*m[0][1]\n"
"  );\n"
"\n"
"  return adjM/det;\n"
"}\n"
"\n"
"mat3 jacobian(ivec3 ijk, vec3 dims, sampler2D tex)\n"
"{\n"
"  // Jacobian is estimated with a central finite difference technique.\n"
"  \n"
"  // get point coordinates at (i, j, k),\n"
"  //  vec3 pts_I_J_K  = getVector(ijk, dims, tex);\n"
"\n"
"  //(i-1, j, k), (i+1, j, k)\n"
"  vec3 pts_IM1_J_K = getVector(ivec3(ijk.x-1, ijk.yz), dims, tex);\n"
"  vec3 pts_I1_J_K = getVector(ivec3(ijk.x+1, ijk.yz), dims, tex);\n"
"\n"
"  //   (i, j-1, k), (i, j+1, k)\n"
"  vec3 pts_I_JM1_K = getVector(ivec3(ijk.x, ijk.y-1, ijk.z), dims, tex);\n"
"  vec3 pts_I_J1_K = getVector(ivec3(ijk.x, ijk.y+1, ijk.z), dims, tex);\n"
"\n"
"  // (i, j, k-1), (i, j, k+1).\n"
"  vec3 pts_I_J_KM1 = getVector(ivec3(ijk.xy, ijk.z-1), dims, tex);\n"
"  vec3 pts_I_J_K1 = getVector(ivec3(ijk.xy, ijk.z+1), dims, tex);\n"
"\n"
"  vec3 col1 = 0.5*(pts_I1_J_K - pts_IM1_J_K);\n"
"  vec3 col2 = 0.5*(pts_I_J1_K - pts_I_JM1_K);\n"
"  vec3 col3 = 0.5*(pts_I_J_K1 - pts_I_J_KM1);\n"
"\n"
" if(uSlice==0)\n"
"  { \n"
"    col1[0]=1.0;\n"
"  }\n"
" else\n"
"  {\n"
"     if(uSlice==1)\n"
"      {\n"
"      col2[1]=1.0;\n"
"      }\n"
"     else\n"
"      {\n"
"      col3[2]=1.0;\n"
"      }     \n"
"  }     \n"
"  \n"
"  /*\n"
"  Jacobian is given by\n"
"  | dx/di, dx/dj, dx/dk |\n"
"  | dy/di, dy/dj, dy/dk |\n"
"  | dz/di, dz/dj, dz/dk |\n"
"     where  d == partial derivative\n"
"  */\n"
"\n"
"  mat3 J = mat3(col1, col2, col3);\n"
"  return J;\n"
"}\n"
"\n"
"void main(void)\n"
"{\n"
"  // determine the structured coordinate for the current location.\n"
"  vec3 tcoord;\n"
"  if(uSlice==0)\n"
"  {\n"
"   tcoord=vec3(0,gl_TexCoord[0].st);\n"
"  }\n"
"  else\n"
"  {\n"
"   if(uSlice==1)\n"
"    {\n"
"     tcoord=vec3(gl_TexCoord[0].s,0,gl_TexCoord[0].t);\n"
"    }\n"
"   else\n"
"    {\n"
"     tcoord=vec3(gl_TexCoord[0].st, 0);\n"
"    }\n"
"  }\n"
"\n"
"\n"
"  ivec3 ijk = getIJK(tcoord, uDimensions);\n"
"\n"
"  // compute partial derivative for X.\n"
"  mat3 J = jacobian(ijk, uDimensions, texPoints);\n"
"  \n"
"  // compute inverse of J.\n"
"  vec3 vector = getVector(ijk, uDimensions, texVectorField);\n"
"  float detJ=determinant(J);\n"
"  mat3 invJ = inverse(J,detJ);\n"
"  gl_FragData[0] = vec4(invJ*vector, 1.0);\n"
"//gl_FragData[0] = vec4(vector, 1.0);\n"
"//    gl_FragData[0] = vec4(detJ);\n"
"//      gl_FragData[0] = vec4(J[2],1.0);\n"
"}\n"
"\n";

