project("Core")
string(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPER)

message(STATUS "")
message(STATUS "Project ${PROJECT_NAME}:")

set(PROJECT_DIR ${WOTWR_PROJECTS_DIR}/${PROJECT_NAME})

set(
        SOURCE_FILES
        "animation/animation.cpp"
        "animation/timeline.cpp"
        "animation/timeline_entries/base.cpp"
        "animation/timeline_entries/lerpers.cpp"
        "animation/timeline_entries/objects.cpp"
        "animation/timeline_entries/setters.cpp"
        "api/faderb.cpp"
        "api/game/game.cpp"
        "api/game/player.cpp"
        "api/game/ui.cpp"
        "api/graphics/shaders.cpp"
        "api/graphics/sprite.cpp"
        "api/graphics/textures.cpp"
        "api/messages/messages.cpp"
        "api/scenes/create_objects.cpp"
        "api/scenes/scene_load.cpp"
        "dev/object_visualizer.cpp"
        "dev/fast_load.cpp"
        "enums/uber_state.cpp"
        "ipc/ipc.cpp"
        "settings.cpp"
        "sound.cpp"
        "text_database.cpp"
        "text_style.cpp"
        "uber_states/uber_state_dev.cpp"
        "uber_states/uber_state_interface.cpp"
        "uber_states/uber_state_virtual.cpp"
        "utils/byte_stream.cpp"
        "utils/json_serializers.cpp"
        "utils/misc.cpp"
        "utils/mood_guid.cpp"
        "utils/operations.cpp"
        "utils/position_converter.cpp"
        "utils/stb_image.cpp"
)

set(
        PUBLIC_HEADER_FILES
        "animation/animation.h"
        "animation/timeline.h"
        "animation/timeline_entries/base.h"
        "animation/timeline_entries/lerpers.h"
        "animation/timeline_entries/objects.h"
        "animation/timeline_entries/setters.h"
        "animation/timeline_state.h"
        "api/faderb.h"
        "api/game/game.h"
        "api/game/player.h"
        "api/game/ui.h"
        "api/graphics/shaders.h"
        "api/graphics/sprite.h"
        "api/graphics/textures.h"
        "api/messages/messages.h"
        "api/scenes/create_objects.h"
        "api/scenes/scene_load.h"
        "api/system/message_provider.h"
        "dev/object_visualizer.h"
        "enums/actions.h"
        "enums/buttons.h"
        "enums/comparison.h"
        "enums/game_event.h"
        "enums/layer.h"
        "enums/sound.h"
        "enums/shard_type.h"
        "enums/static_text_entries.h"
        "enums/timeline_entries.h"
        "enums/uber_state.h"
        "ipc/ipc.h"
        "macros.h"
        "settings.h"
        "sound.h"
        "text_database.h"
        "text_style.h"
        "uber_states/uber_state_interface.h"
        "uber_states/uber_state_virtual.h"
        "utils/byte_stream.h"
        "utils/cached_loader.h"
        "utils/dirty_value.h"
        "utils/event_bus.h"
        "utils/json_serializers.h"
        "utils/misc.h"
        "utils/mood_guid.h"
        "utils/operations.h"
        "utils/position_converter.h"
        "utils/stb_image.h"
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
        PRIVATE COMPILING_CORE
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
)

target_link_libraries(
        ${PROJECT_NAME}
        Common
        Modloader
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

source_group("_precompiled_headers"
        FILES
        ${PROJECT_BINARY_DIR}/CMakeFiles/Core.dir/Debug/cmake_pch.hxx
        ${PROJECT_BINARY_DIR}/CMakeFiles/Core.dir/MinSizeRel/cmake_pch.hxx
        ${PROJECT_BINARY_DIR}/CMakeFiles/Core.dir/RelWithDebInfo/cmake_pch.hxx
        ${PROJECT_BINARY_DIR}/CMakeFiles/Core.dir/Release/cmake_pch.hxx
        ${PROJECT_BINARY_DIR}/CMakeFiles/Core.dir/cmake_pch.cxx
        )

install(
        TARGETS ${PROJECT_NAME}
        RUNTIME DESTINATION "${WOTWR_INSTALL_DIR}"
        LIBRARY DESTINATION "${WOTWR_INSTALL_DIR}"
        ARCHIVE DESTINATION "${WOTWR_INSTALL_DIR}"
)
