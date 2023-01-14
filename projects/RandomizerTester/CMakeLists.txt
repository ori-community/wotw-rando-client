project("RandomizerTester")
string(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPER)

message(STATUS "")
message(STATUS "Project ${PROJECT_NAME}:")

set(PROJECT_DIR ${WOTWR_PROJECTS_DIR}/${PROJECT_NAME})

set(
        SOURCE_FILES
        "enemy_reporter.cpp"
        "message_tests.cpp"
        "test_runner.cpp"
)

set(
        PUBLIC_HEADER_FILES
        "test_runner.h"
)

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
        PRIVATE COMPILING_RANDOMIZER_TESTER
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
        ${WOTWR_BASE_INCLUDES}
        ${CMAKE_CURRENT_BINARY_DIR}
)

target_link_libraries(
        ${PROJECT_NAME}
        Common
        Modloader
        Core
	Randomizer
)

find_package(nlohmann_json)
target_link_libraries(${PROJECT_NAME} nlohmann_json::nlohmann_json)

find_package(magic_enum)
target_link_libraries(${PROJECT_NAME} magic_enum::magic_enum)

find_package(fmt)
target_link_libraries(${PROJECT_NAME} fmt::fmt)

message(STATUS "Assigning source groups.")

set_vc_structure("${CMAKE_CURRENT_SOURCE_DIR}" "${SOURCE_FILES};${PUBLIC_HEADER_FILES};${MISC_FILES}")
set_vc_structure_with_prefix("_project_settings" "${CMAKE_CURRENT_SOURCE_DIR}" "${MISC_FILES};")

message(STATUS "TESTING ${PROJECT_BINARY_DIR}")

install(
        TARGETS ${PROJECT_NAME}
        RUNTIME DESTINATION "${WOTWR_INSTALL_DIR}"
        LIBRARY DESTINATION "${WOTWR_INSTALL_DIR}"
        ARCHIVE DESTINATION "${WOTWR_INSTALL_DIR}"
)
