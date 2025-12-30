project("Common")

message(STATUS "")
message(STATUS "Project ${PROJECT_NAME}:")

set(PROJECT_DIR ${WOTWR_PROJECTS_DIR}/${PROJECT_NAME})
set(CONFIG_DIR ${CMAKE_CONFIG_DIRECTORY}/${PROJECT_NAME})

set(
        SOURCE_FILES
        "csv.cpp"
        "droppable.cpp"
        "ext.cpp"
        "settings.cpp"
        "math_utils.cpp"
)

set(
        PUBLIC_HEADER_FILES
        "blocking_queue.h"
        "csv.h"
        "droppable.h"
        "event_bus.h"
        "event_bus_data.h"
        "event_timing.h"
        "env.h"
        "ext.h"
        "is_in.h"
        "math_utils.h"
        "settings.h"
        "thread_safe_container.h"
        "variant_cast.h"
        "vx.h"
)

set(
        MISC_FILES
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
        ${CMAKE_CONFIG_DIRECTORY}
        SYSTEM
        ${WOTWR_BASE_INCLUDES}
)

find_package(nlohmann_json)
target_link_libraries(${PROJECT_NAME} nlohmann_json::nlohmann_json)

install(
        TARGETS ${PROJECT_NAME}
        RUNTIME DESTINATION "${WOTWR_INSTALL_DIR}"
        LIBRARY DESTINATION "${WOTWR_INSTALL_DIR}"
        ARCHIVE DESTINATION "${WOTWR_INSTALL_DIR}"
)
