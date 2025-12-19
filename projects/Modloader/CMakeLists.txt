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
        "windows_api/focus_window.cpp"
        "windows_api/memory.cpp"
        "windows_api/detours.cpp"
        "windows_api/modloader.cpp"
        "windows_api/sleep.cpp"
        "app/il2cpp_init.cpp"
        "console_logging_handler.cpp"
        "file_logging_handler.cpp"
        "fs.cpp"
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
        "windows_api/focus_window.h"
        "windows_api/memory.h"
        "windows_api/sleep.h"
        "windows_api/windows.h"
        "console_logging_handler.h"
        "file_logging_handler.h"
        "fs.h"
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
        ${CMAKE_CONFIG_DIRECTORY}
        ${CONFIG_DIRECTORY}
        SYSTEM
        ${WOTWR_BASE_INCLUDES}
)

target_link_libraries(
        ${PROJECT_NAME}
        Common
        wsock32
        ws2_32
)

find_package(nlohmann_json CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} nlohmann_json::nlohmann_json)

find_path(DETOURS_INCLUDE_DIRS "detours/detours.h")
find_library(DETOURS_LIBRARY detours REQUIRED)

target_include_directories(${PROJECT_NAME} PRIVATE ${DETOURS_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} ${DETOURS_LIBRARY})


message(STATUS "Assigning source groups.")

install(
        TARGETS ${PROJECT_NAME}
        RUNTIME DESTINATION "${WOTWR_INSTALL_DIR}"
        LIBRARY DESTINATION "${WOTWR_INSTALL_DIR}"
        ARCHIVE DESTINATION "${WOTWR_INSTALL_DIR}"
)

install(
        FILES $<TARGET_PDB_FILE:${PROJECT_NAME}>
        DESTINATION "${WOTWR_INSTALL_DIR}"
        OPTIONAL
)
