project("TAS")
string(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPER)

message(STATUS "")
message(STATUS "Project ${PROJECT_NAME}:")

set(PROJECT_DIR ${WOTWR_PROJECTS_DIR}/${PROJECT_NAME})

set(
        SOURCE_FILES
        "runtime/runtime.cpp"
        "runtime/timeline.cpp"
        "runtime/timeline_entry_collection.cpp"
        "runtime/timeline_entries/action.cpp"
        "runtime/timeline_entries_base.cpp"
        "runtime/timeline_entries/angle.cpp"
        "runtime/timeline_entries/axis.cpp"
        "runtime/timeline_entries/game_reload.cpp"
        "runtime/timeline_entries/mouse_angle.cpp"
        "runtime/timeline_entries/mouse_position.cpp"
        "runtime/timeline_entries/position.cpp"
        "runtime/timeline_entries/rng_state.cpp"
        "runtime/timeline_json_loader.cpp"
        "tas.cpp"
        "trials_config.cpp"
)

set(
        PUBLIC_HEADER_FILES
        "tas.h"
        "runtime/runtime.h"
        "runtime/timeline.h"
        "runtime/timeline_entry_collection.h"
        "runtime/timeline_entries/action.h"
        "runtime/timeline_entries_base.h"
        "runtime/timeline_entries/angle.h"
        "runtime/timeline_entries/axis.h"
        "runtime/timeline_entries/game_reload.h"
        "runtime/timeline_entries/mouse_angle.h"
        "runtime/timeline_entries/mouse_position.h"
        "runtime/timeline_entries/position.h"
        "runtime/timeline_entries/rng_state.h"
        "runtime/timeline_json_loader.h"
        runtime/timeline_state.h)

set(
        MISC_FILES
        ".editorconfig"
        "CMakeLists.txt"
)

add_library(
        ${PROJECT_NAME}
        SHARED
        ${SOURCE_FILES}
        ${PUBLIC_HEADER_FILES}
        ${MISC_FILES}
)

target_compile_definitions(
        ${PROJECT_NAME}
        PRIVATE COMPILING_TAS
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
        ${WOTWR_BASE_INCLUDES}
)

target_link_libraries(
        ${PROJECT_NAME}
        Common
        Modloader
        Core
)

find_package(nlohmann_json)
target_link_libraries(${PROJECT_NAME} nlohmann_json::nlohmann_json)

find_package(magic_enum)
target_link_libraries(${PROJECT_NAME} magic_enum::magic_enum)

message(STATUS "Assigning source groups.")

set_vc_structure("${CMAKE_CURRENT_SOURCE_DIR}" "${SOURCE_FILES};${PUBLIC_HEADER_FILES};${MISC_FILES}")
set_vc_structure_with_prefix("_project_settings" "${CMAKE_CURRENT_SOURCE_DIR}" "${MISC_FILES};")

target_compile_options(${PROJECT_NAME} PRIVATE /D_DISABLE_CONSTEXPR_MUTEX_CONSTRUCTOR)

message(STATUS "TESTING ${PROJECT_BINARY_DIR}")

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
