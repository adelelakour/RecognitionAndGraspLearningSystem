/* DO NOT EDIT.
 * Generated by ../bin/vtkEncodeString
 * 
 * Define the vtkSurfaceLICPainter_vs1 string.
 *
 * Generated from file: /home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/Rendering/vtkSurfaceLICPainter_vs1.glsl
 */
#include "vtkSurfaceLICPainter_vs1.h"
const char *vtkSurfaceLICPainter_vs1 =
"//=========================================================================\n"
"//\n"
"//  Program:   Visualization Toolkit\n"
"//  Module:    vtkSurfaceLICPainter_vs1.glsl\n"
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
"// Filename: vtkSurfaceLICPainter_vs1.glsl\n"
"// Filename is useful when using gldb-gui\n"
"\n"
"#version 120 \n"
"varying vec4 vColor;\n"
"varying vec2 vProjectedVF;\n"
"\n"
"// from vtkColorMaterialHelper\n"
"gl_MaterialParameters getMaterialParameters();\n"
"\n"
"// from vtkLightingHelper\n"
"vec4 singleColor(gl_MaterialParameters m,\n"
"  vec3 surfacePosEyeCoords, vec3 n);\n"
"\n"
"// Projects \"vector\" onto the surface.\n"
"vec3 projectOnSurface(vec3 vector)\n"
"{\n"
"  vec3 normal = normalize(gl_Normal);\n"
"  float k = dot(normal, vector);\n"
"  return (vector - (k*normal));\n"
"}\n"
"\n"
"vec4 colorFrontFace()\n"
"{\n"
" vec4 heyeCoords = gl_ModelViewMatrix*gl_Vertex;\n"
" vec3 eyeCoords = heyeCoords.xyz/heyeCoords.w;\n"
" vec3 n = normalize(gl_NormalMatrix*gl_Normal);\n"
" return singleColor(getMaterialParameters(),eyeCoords,n);\n"
"}\n"
"\n"
"void main()\n"
"{\n"
"  vec3 vf = projectOnSurface(gl_MultiTexCoord0.stp);\n"
"  vProjectedVF = (gl_NormalMatrix * vf).xy;\n"
"  vColor = colorFrontFace();\n"
"  gl_Position = ftransform();\n"
"}\n"
"\n";

