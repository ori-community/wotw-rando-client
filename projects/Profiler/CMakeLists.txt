project("Profiler")

message(STATUS "")
message(STATUS "Project ${PROJECT_NAME}:")

set(PROJECT_DIR ${WOTWR_PROJECTS_DIR}/${PROJECT_NAME})
set(CONFIG_DIR ${CMAKE_CONFIG_DIRECTORY}/${PROJECT_NAME})

set(
        SOURCE_FILES
)

set(
        PUBLIC_HEADER_FILES
        "tracy.h"
)

set(
        MISC_FILES
        "CMakeLists.txt"
)

if (ENABLE_PROFILER)
    add_library(
            ${PROJECT_NAME} SHARED
            ${SOURCE_FILES}
            ${PUBLIC_HEADER_FILES}
            ${MISC_FILES}
    )
else ()
    add_library(
            ${PROJECT_NAME} STATIC
            ${SOURCE_FILES}
            ${PUBLIC_HEADER_FILES}
            ${MISC_FILES}
    )
endif ()

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

target_compile_definitions(TracyClient PRIVATE TRACY_IMPORTS)
target_compile_definitions(TracyClient PUBLIC TRACY_EXPORTS)

set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries(${PROJECT_NAME} PUBLIC TracyClient)

if (ENABLE_PROFILER)
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
endif ()
