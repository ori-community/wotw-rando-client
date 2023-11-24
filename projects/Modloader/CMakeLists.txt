project("Modloader")
string(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPER)

message(STATUS "")
message(STATUS "Project ${PROJECT_NAME}:")

set(PROJECT_DIR ${WOTWR_PROJECTS_DIR}/${PROJECT_NAME})

set(
        SOURCE_FILES
        "windows_api/bootstrap.cpp"
        "windows_api/clipboard.cpp"
        "windows_api/console.cpp"
        "windows_api/memory.cpp"
        "windows_api/detours.cpp"
        "windows_api/modloader.cpp"
        "windows_api/sleep.cpp"
        "app/il2cpp_init.cpp"
        "modloader.cpp"
        "il2cpp_helpers.cpp"
        "interception.cpp"
        "udp_socket.cpp"
)

set(
        PUBLIC_HEADER_FILES
        "windows_api/bootstrap.h"
        "windows_api/clipboard.cpp"
        "windows_api/common.h"
        "windows_api/console.h"
        "windows_api/detours.h"
        "windows_api/memory.h"
        "windows_api/sleep.h"
        "windows_api/windows.h"
        "modloader.h"
        "constants.h"
        "il2cpp_helpers.h"
        "app/il2cpp_internals.h"
        "udp_socket.h"
)

# message("Resolving methods")
# file(GLOB_RECURSE METHODS ${PROJECT_DIR}/app/methods *.h)
# message("Resolving types")
# file(GLOB_RECURSE TYPES ${PROJECT_DIR}/app/types *.h)

list(
        APPEND
        PUBLIC_HEADER_FILES
        "app/il2cpp_api.h"
        "interception.h"
        "interception_macros.h"
        "macros.h"
        "il2cpp_math.h"
)


set(
        MISC_FILES
        ".editorconfig"
        "CMakeLists.txt"
        "cpp.hint"
)

add_library(
        ${PROJECT_NAME}
        SHARED
        ${SOURCE_FILES}
        ${PUBLIC_HEADER_FILES}
        ${INTERNAL_IL2CPP_HEADERS}
        ${METHODS}
        ${TYPES}
        ${MISC_FILES}
)

target_compile_definitions(
        ${PROJECT_NAME}
        PRIVATE COMPILING_IL2CPP_MODLOADER
)

set_target_properties(
        ${PROJECT_NAME}
        PROPERTIES
        VERSION ${WORWR_VERSION}
        SOVERSION ${WORWR_MAJOR_VERSION}
        FOLDER cpp
)

target_include_directories(
        ${PROJECT_NAME}
        PRIVATE
        .
        ${CMAKE_CONFIG_DIRECTORY}
        ${CONFIG_DIRECTORY}
        ${CMAKE_ENGINE_DIRECTORY}
        ${WOTWR_LIB_INCLUDE_DIR}
        SYSTEM
        ${WOTWR_BASE_INCLUDES}
)

target_link_libraries(
        ${PROJECT_NAME}
        "${WOTWR_LIB_DIR}/detours.lib"
        Common
        wsock32
        ws2_32
)

find_package(nlohmann_json)
target_link_libraries(${PROJECT_NAME} nlohmann_json::nlohmann_json)

find_package(inih)
target_link_libraries(${PROJECT_NAME} inih::inih)

target_precompile_headers(
        ${PROJECT_NAME}
        PRIVATE <cstdint>
        PUBLIC <${PROJECT_NAME}/app/il2cpp_internals.h>
)

target_precompile_headers(
        ${PROJECT_NAME}
        PUBLIC <${PROJECT_NAME}/app/il2cpp_api.h>
)

set_source_files_properties(windows_api/console.cpp PROPERTIES SKIP_PRECOMPILE_HEADERS ON)
set_source_files_properties(windows_api/memory.cpp PROPERTIES SKIP_PRECOMPILE_HEADERS ON)
set_source_files_properties(windows_api/bootstrap.cpp PROPERTIES SKIP_PRECOMPILE_HEADERS ON)
set_source_files_properties(windows_api/detours.cpp PROPERTIES SKIP_PRECOMPILE_HEADERS ON)
set_source_files_properties(windows_api/modloader.cpp PROPERTIES SKIP_PRECOMPILE_HEADERS ON)

message(STATUS "Assigning source groups.")

message(STATUS "test ${SOURCE_FILES};${PUBLIC_HEADER_FILES};${MISC_FILES};${INTERNAL_IL2CPP_HEADERS}")
set_vc_structure("${CMAKE_CURRENT_SOURCE_DIR}" "${SOURCE_FILES};${PUBLIC_HEADER_FILES};${MISC_FILES};${INTERNAL_IL2CPP_HEADERS}")
set_vc_structure_with_prefix("_project_settings" "${CMAKE_CURRENT_SOURCE_DIR}" "${MISC_FILES};")

# message(STATUS "Resolving il2cpp methods.")
# source_group(TREE ${PROJECT_DIR} FILES ${METHODS})

message(STATUS "TESTING ${PROJECT_BINARY_DIR}")

source_group(
        "_precompiled_headers"
        FILES
        ${PROJECT_BINARY_DIR}/CMakeFiles/Modloader.dir/Debug/cmake_pch.hxx
        ${PROJECT_BINARY_DIR}/CMakeFiles/Modloader.dir/MinSizeRel/cmake_pch.hxx
        ${PROJECT_BINARY_DIR}/CMakeFiles/Modloader.dir/RelWithDebInfo/cmake_pch.hxx
        ${PROJECT_BINARY_DIR}/CMakeFiles/Modloader.dir/Release/cmake_pch.hxx
        ${PROJECT_BINARY_DIR}/CMakeFiles/Modloader.dir/cmake_pch.cxx
)

install(
        TARGETS ${PROJECT_NAME}
        RUNTIME DESTINATION "${WOTWR_INSTALL_DIR}"
        LIBRARY DESTINATION "${WOTWR_INSTALL_DIR}"
        ARCHIVE DESTINATION "${WOTWR_INSTALL_DIR}"
)
