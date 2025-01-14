﻿# CMakeList.txt : CMake project for HospitalManagementSystem, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("HospitalManagementSystem")

# Add source to this project's executable.
add_executable (HospitalManagementSystem "HospitalManagementSystem.cpp" "HospitalManagementSystem.h" "src/main.cpp" "src/Patient.cpp" "src/Doctor.cpp" "src/Hospital.cpp" "include/Patient.h" "include/Doctor.h" "include/Hospital.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET HospitalManagementSystem PROPERTY CXX_STANDARD 20)
endif()
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
include_directories(include)

# TODO: Add tests and install targets if needed.
