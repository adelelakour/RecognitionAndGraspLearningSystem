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
foreach(_cmake_expected_target IN ITEMS vtksys vtkzlib vtkhdf5 vtkhdf5_hl vtkjpeg vtkpng vtktiff vtkexpat vtkfreetype vtklibxml2 vtkDICOMParser vtkproj4 mpistubs MapReduceMPI vtkverdict vtkNetCDF vtkNetCDF_cxx vtkmetaio vtksqlite vtkexoIIc LSDyna vtkalglib vtkEncodeString VPIC Cosmo vtkftgl vtkCommon vtkFiltering vtkImaging vtkGraphics vtkGenericFiltering vtkIO vtkRendering vtkVolumeRendering vtkHybrid vtkWidgets vtkParallel vtkInfovis vtkGeovis vtkViews vtkCharts)
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


# Compute the installation prefix relative to this file.
get_filename_component(_IMPORT_PREFIX "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
if(_IMPORT_PREFIX STREQUAL "/")
  set(_IMPORT_PREFIX "")
endif()

# Create imported target vtksys
add_library(vtksys STATIC IMPORTED)

# Create imported target vtkzlib
add_library(vtkzlib STATIC IMPORTED)

# Create imported target vtkhdf5
add_library(vtkhdf5 STATIC IMPORTED)

# Create imported target vtkhdf5_hl
add_library(vtkhdf5_hl STATIC IMPORTED)

# Create imported target vtkjpeg
add_library(vtkjpeg STATIC IMPORTED)

# Create imported target vtkpng
add_library(vtkpng STATIC IMPORTED)

# Create imported target vtktiff
add_library(vtktiff STATIC IMPORTED)

# Create imported target vtkexpat
add_library(vtkexpat STATIC IMPORTED)

# Create imported target vtkfreetype
add_library(vtkfreetype STATIC IMPORTED)

# Create imported target vtklibxml2
add_library(vtklibxml2 STATIC IMPORTED)

# Create imported target vtkDICOMParser
add_library(vtkDICOMParser STATIC IMPORTED)

# Create imported target vtkproj4
add_library(vtkproj4 STATIC IMPORTED)

# Create imported target mpistubs
add_library(mpistubs STATIC IMPORTED)

# Create imported target MapReduceMPI
add_library(MapReduceMPI STATIC IMPORTED)

# Create imported target vtkverdict
add_library(vtkverdict STATIC IMPORTED)

# Create imported target vtkNetCDF
add_library(vtkNetCDF STATIC IMPORTED)

# Create imported target vtkNetCDF_cxx
add_library(vtkNetCDF_cxx STATIC IMPORTED)

# Create imported target vtkmetaio
add_library(vtkmetaio STATIC IMPORTED)

# Create imported target vtksqlite
add_library(vtksqlite STATIC IMPORTED)

# Create imported target vtkexoIIc
add_library(vtkexoIIc STATIC IMPORTED)

# Create imported target LSDyna
add_library(LSDyna STATIC IMPORTED)

# Create imported target vtkalglib
add_library(vtkalglib STATIC IMPORTED)

# Create imported target vtkEncodeString
add_executable(vtkEncodeString IMPORTED)

# Create imported target VPIC
add_library(VPIC STATIC IMPORTED)

# Create imported target Cosmo
add_library(Cosmo STATIC IMPORTED)

# Create imported target vtkftgl
add_library(vtkftgl STATIC IMPORTED)

# Create imported target vtkCommon
add_library(vtkCommon STATIC IMPORTED)

# Create imported target vtkFiltering
add_library(vtkFiltering STATIC IMPORTED)

# Create imported target vtkImaging
add_library(vtkImaging STATIC IMPORTED)

# Create imported target vtkGraphics
add_library(vtkGraphics STATIC IMPORTED)

# Create imported target vtkGenericFiltering
add_library(vtkGenericFiltering STATIC IMPORTED)

# Create imported target vtkIO
add_library(vtkIO STATIC IMPORTED)

# Create imported target vtkRendering
add_library(vtkRendering STATIC IMPORTED)

# Create imported target vtkVolumeRendering
add_library(vtkVolumeRendering STATIC IMPORTED)

# Create imported target vtkHybrid
add_library(vtkHybrid STATIC IMPORTED)

# Create imported target vtkWidgets
add_library(vtkWidgets STATIC IMPORTED)

# Create imported target vtkParallel
add_library(vtkParallel STATIC IMPORTED)

# Create imported target vtkInfovis
add_library(vtkInfovis STATIC IMPORTED)

# Create imported target vtkGeovis
add_library(vtkGeovis STATIC IMPORTED)

# Create imported target vtkViews
add_library(vtkViews STATIC IMPORTED)

# Create imported target vtkCharts
add_library(vtkCharts STATIC IMPORTED)

# Load information for each installed configuration.
file(GLOB _cmake_config_files "${CMAKE_CURRENT_LIST_DIR}/VTKTargets-*.cmake")
foreach(_cmake_config_file IN LISTS _cmake_config_files)
  include("${_cmake_config_file}")
endforeach()
unset(_cmake_config_file)
unset(_cmake_config_files)

# Cleanup temporary variables.
set(_IMPORT_PREFIX)

# Loop over all imported files and verify that they actually exist
foreach(_cmake_target IN LISTS _cmake_import_check_targets)
  foreach(_cmake_file IN LISTS "_cmake_import_check_files_for_${_cmake_target}")
    if(NOT EXISTS "${_cmake_file}")
      message(FATAL_ERROR "The imported target \"${_cmake_target}\" references the file
   \"${_cmake_file}\"
but this file does not exist.  Possible reasons include:
* The file was deleted, renamed, or moved to another location.
* An install or uninstall procedure did not complete successfully.
* The installation package was faulty and contained
   \"${CMAKE_CURRENT_LIST_FILE}\"
but not all the files it references.
")
    endif()
  endforeach()
  unset(_cmake_file)
  unset("_cmake_import_check_files_for_${_cmake_target}")
endforeach()
unset(_cmake_target)
unset(_cmake_import_check_targets)

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
