project("Common")
string(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPER)

message(STATUS "")
message(STATUS "Project ${PROJECT_NAME}:")

set(PROJECT_DIR ${WOTWR_PROJECTS_DIR}/${PROJECT_NAME})
set(CONFIG_DIR ${CMAKE_CONFIG_DIRECTORY}/${PROJECT_NAME})

set(
        SOURCE_FILES
        "csv.cpp"
        "ext.cpp"
)

set(
        PUBLIC_HEADER_FILES
        "csv.h"
        "ext.h"
        "settings_reader.h"
)

set(
        MISC_FILES
        ".editorconfig"
        "CMakeLists.txt"
)

add_library(${PROJECT_NAME} STATIC
        ${SOURCE_FILES}
        ${PUBLIC_HEADER_FILES}
        ${MISC_FILES}
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
        ${CMAKE_ENGINE_DIRECTORY}
        ${WOTWR_LIB_INCLUDE_DIR}
        SYSTEM
        ${WOTWR_BASE_INCLUDES}
)

find_package(fmt)
target_link_libraries(${PROJECT_NAME} fmt::fmt)

message(STATUS "Assigning source groups.")

set_vc_structure("${CMAKE_CURRENT_SOURCE_DIR}" "${SOURCE_FILES};${PUBLIC_HEADER_FILES};${MISC_FILES};")
set_vc_structure_with_prefix("_project_settings" "${CMAKE_CURRENT_SOURCE_DIR}" "${MISC_FILES};")

install(
        TARGETS ${PROJECT_NAME}
        COMPONENT runtime
        RUNTIME DESTINATION "${WOTWR_INSTALL_DIR}"
        LIBRARY DESTINATION "${WOTWR_INSTALL_DIR}"
        ARCHIVE DESTINATION "${WOTWR_INSTALL_DIR}"
)
