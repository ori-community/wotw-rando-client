cmake_minimum_required(VERSION 3.17.3 FATAL_ERROR)

project(temp)

set(CMAKE_SUPPRESS_REGENERATION true)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DENABLE_FAST_LOAD")

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /EHsc /nologo")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /PDBCompress")
set(CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} /PDBCompress")
set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} /PDBCompress")

set(CMAKE_ROOT_DIRECTORY ${PROJECT_SOURCE_DIR})
set(CMAKE_BUILD_DIRECTORY ${PROJECT_BINARY_DIR})
set(CMAKE_CONFIG_DIRECTORY ${CMAKE_BUILD_DIRECTORY}/config)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BUILD_DIRECTORY}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BUILD_DIRECTORY}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BUILD_DIRECTORY}/bin)

set(WOTWR_INSTALL_DIR C:/moon/randomizer)
set(WOTWR_PROJECTS_DIR ${CMAKE_ROOT_DIRECTORY}/projects)

message(STATUS "WOTWR install directory: ${WOTWR_INSTALL_DIR}")
message(STATUS "root directory: ${CMAKE_ROOT_DIRECTORY}")
message(STATUS "build directory: ${CMAKE_BUILD_DIRECTORY}")
message(STATUS "config directory: ${CMAKE_CONFIG_DIRECTORY}")
message(STATUS "archive directory: ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}")
message(STATUS "library directory: ${CMAKE_LIBRARY_OUTPUT_DIRECTORY}")
message(STATUS "runtime directory: ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")

set(CMAKE_INSTALL_DEFAULT_COMPONENT_NAME "runtime")

function(set_vc_structure_with_prefix pre root vc_files)
    foreach (FILE ${vc_files})
        # Get the directory of the source file
        get_filename_component(PARENT_DIR "${FILE}" DIRECTORY)

        # Remove common directory prefix to make the group
        string(REPLACE "${root}" "" GROUP "${PARENT_DIR}")

        # Make sure we are using windows slashes
        string(REPLACE "/" "\\" GROUP "${GROUP}")

        message(STATUS "${FILE} in ${pre}${GROUP}")
        source_group("${pre}${GROUP}" FILES "${FILE}")
    endforeach ()
endfunction(set_vc_structure_with_prefix)

function(set_vc_structure root vc_files)
    foreach (FILE ${vc_files})
        # Get the directory of the source file
        get_filename_component(PARENT_DIR "${FILE}" DIRECTORY)

        # Remove common directory prefix to make the group
        string(REPLACE "${root}" "" GROUP "${PARENT_DIR}")

        # Make sure we are using windows slashes
        string(REPLACE "/" "\\" GROUP "${GROUP}")

        message(STATUS "${FILE} in ${pre}${GROUP}")
        source_group("${GROUP}" FILES "${FILE}")
    endforeach ()
endfunction(set_vc_structure)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

find_program(GIT git)
if (NOT GIT)
    message(FATAL_ERROR "Cannot find git command line tool.")
else ()
    message(STATUS "Fetching submodules.")
    execute_process(COMMAND ${GIT} submodule update --init --recursive)
endif ()

set(SLN_NAME WotWRandomizer)
project(${SLN_NAME})
string(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPER)

set(
        WOTWR_BASE_INCLUDES
        "${CMAKE_ROOT_DIRECTORY}/projects"
)

add_subdirectory("projects")

add_custom_target(
        INSTALL_RUNTIME
        ALL
        cmake -DCOMPONENT=runtime -DBUILD_TYPE=$<CONFIG> -P ${CMAKE_BUILD_DIRECTORY}/cmake_install.cmake
        DEPENDS Modloader Randomizer TAS Injector InjectProxy InjectLoader RandomizerTester
)

set_target_properties(
        INSTALL_RUNTIME
        PROPERTIES
        FOLDER CMakePredefinedTargets
)
