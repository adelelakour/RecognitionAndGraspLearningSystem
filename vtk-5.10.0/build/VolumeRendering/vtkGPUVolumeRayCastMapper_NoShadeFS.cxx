/* DO NOT EDIT.
 * Generated by ../bin/vtkEncodeString
 * 
 * Define the vtkGPUVolumeRayCastMapper_NoShadeFS string.
 *
 * Generated from file: /home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/VolumeRendering/vtkGPUVolumeRayCastMapper_NoShadeFS.glsl
 */
#include "vtkGPUVolumeRayCastMapper_NoShadeFS.h"
const char *vtkGPUVolumeRayCastMapper_NoShadeFS =
"/*=========================================================================\n"
"\n"
"  Program:   Visualization Toolkit\n"
"  Module:    vtkGPUVolumeRayCastMapper_NoShadeFS.glsl\n"
"\n"
"  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen\n"
"  All rights reserved.\n"
"  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.\n"
"\n"
"     This software is distributed WITHOUT ANY WARRANTY; without even\n"
"     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR\n"
"     PURPOSE.  See the above copyright notice for more information.\n"
"\n"
"=========================================================================*/\n"
"\n"
"// Fragment shader that implements initShade() and shade() in the case of no\n"
"// shading.\n"
"// The functions are used in composite mode.\n"
"\n"
"#version 110\n"
"\n"
"// \"value\" is a sample of the dataset.\n"
"// Think of \"value\" as an object.\n"
"\n"
"// from 1- vs 4-component shader.\n"
"vec4 colorFromValue(vec4 value);\n"
"\n"
"// ----------------------------------------------------------------------------\n"
"void initShade()\n"
"{\n"
"  // empty, nothing to do.\n"
"}\n"
"\n"
"// ----------------------------------------------------------------------------\n"
"vec4 shade(vec4 value)\n"
"{\n"
"  return colorFromValue(value);\n"
"}\n"
"\n";

