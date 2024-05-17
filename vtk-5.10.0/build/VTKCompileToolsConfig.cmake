#generated by VTK, do not edit
# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.8)
   message(FATAL_ERROR "CMake >= 2.8.0 required")
endif()
if(CMAKE_VERSION VERSION_LESS "2.8.3")
   message(FATAL_ERROR "CMake >= 2.8.3 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.8.3...3.25)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_cmake_targets_defined "")
set(_cmake_targets_not_defined "")
set(_cmake_expected_targets "")
foreach(_cmake_expected_target IN ITEMS vtkmkg3states ProcessShader vtkEncodeString vtkHashSource vtkParseOGLExt)
  list(APPEND _cmake_expected_targets "${_cmake_expected_target}")
  if(TARGET "${_cmake_expected_target}")
    list(APPEND _cmake_targets_defined "${_cmake_expected_target}")
  else()
    list(APPEND _cmake_targets_not_defined "${_cmake_expected_target}")
  endif()
endforeach()
unset(_cmake_expected_target)
if(_cmake_targets_defined STREQUAL _cmake_expected_targets)
  unset(_cmake_targets_defined)
  unset(_cmake_targets_not_defined)
  unset(_cmake_expected_targets)
  unset(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT _cmake_targets_defined STREQUAL "")
  string(REPLACE ";" ", " _cmake_targets_defined_text "${_cmake_targets_defined}")
  string(REPLACE ";" ", " _cmake_targets_not_defined_text "${_cmake_targets_not_defined}")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_cmake_targets_defined_text}\nTargets not yet defined: ${_cmake_targets_not_defined_text}\n")
endif()
unset(_cmake_targets_defined)
unset(_cmake_targets_not_defined)
unset(_cmake_expected_targets)


# Create imported target vtkmkg3states
add_executable(vtkmkg3states IMPORTED)

# Create imported target ProcessShader
add_executable(ProcessShader IMPORTED)

# Create imported target vtkEncodeString
add_executable(vtkEncodeString IMPORTED)

# Create imported target vtkHashSource
add_executable(vtkHashSource IMPORTED)

# Create imported target vtkParseOGLExt
add_executable(vtkParseOGLExt IMPORTED)

# Import target "vtkmkg3states" for configuration "Release"
set_property(TARGET vtkmkg3states APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkmkg3states PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/build/bin/vtkmkg3states"
  )

# Import target "ProcessShader" for configuration "Release"
set_property(TARGET ProcessShader APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(ProcessShader PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/build/bin/ProcessShader"
  )

# Import target "vtkEncodeString" for configuration "Release"
set_property(TARGET vtkEncodeString APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkEncodeString PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/build/bin/vtkEncodeString"
  )

# Import target "vtkHashSource" for configuration "Release"
set_property(TARGET vtkHashSource APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkHashSource PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/build/bin/vtkHashSource"
  )

# Import target "vtkParseOGLExt" for configuration "Release"
set_property(TARGET vtkParseOGLExt APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vtkParseOGLExt PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/adelelakour/CLionProjects/An_effi_Ransac_RealSense-master/vtk-5.10.0/build/bin/vtkParseOGLExt"
  )

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
