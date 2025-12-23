project("Tracy")
string(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPER)

message(STATUS "")
message(STATUS "Project ${PROJECT_NAME}:")

set(PROJECT_DIR ${WOTWR_PROJECTS_DIR}/${PROJECT_NAME})
set(CONFIG_DIR ${CMAKE_CONFIG_DIRECTORY}/${PROJECT_NAME})

set(
        SOURCE_FILES
        "tracy.cpp"
)

set(
        PUBLIC_HEADER_FILES
        "macros.h"
)

set(
        MISC_FILES
        "CMakeLists.txt"
)

add_library(
        ${PROJECT_NAME} SHARED
        ${SOURCE_FILES}
        ${PUBLIC_HEADER_FILES}
        ${MISC_FILES}
)

target_link_libraries(
        ${PROJECT_NAME}
        Common
)

target_compile_definitions(
        ${PROJECT_NAME}
        PRIVATE COMPILING_INJECT_PROXY
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
        SYSTEM
        ${WOTWR_BASE_INCLUDES}
)

find_package(Tracy CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} Tracy::TracyClient)

message(STATUS "Assigning source groups.")

set_vc_structure("${CMAKE_CURRENT_SOURCE_DIR}" "${SOURCE_FILES};${PUBLIC_HEADER_FILES};${MISC_FILES};")
set_vc_structure_with_prefix("_project_settings" "${CMAKE_CURRENT_SOURCE_DIR}" "${MISC_FILES};")

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
