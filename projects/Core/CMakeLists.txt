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
        "api/game/death_listener.cpp"
        "api/game/game.cpp"
        "api/game/loading_detection.cpp"
        "api/game/player.cpp"
        "api/game/trials.cpp"
        "api/game/ui.cpp"
        "api/graphics/shaders.cpp"
        "api/graphics/sprite.cpp"
        "api/graphics/textures.cpp"
        "api/messages/message_box.cpp"
        "api/messages/text_style.cpp"
        "api/scenes/create_objects.cpp"
        "api/scenes/scene_load.cpp"
        "api/sound.cpp"
        "api/uber_states/uber_state.cpp"
        "api/uber_states/uber_state_condition.cpp"
        "api/uber_states/uber_state_dev.cpp"
        "api/uber_states/uber_state_handlers.cpp"
        "api/uber_states/uber_state_snapshot.cpp"
        "api/uber_states/uber_state_virtual.cpp"
        "core.cpp"
        "dev/object_visualizer.cpp"
        "dev/fast_load.cpp"
        "dev/status_display.cpp"
        "dev/timing.cpp"
        "enums/game_areas.cpp"
        "enums/uber_state.cpp"
        "events/action.cpp"
        "events/async_update.cpp"
        "events/console_update.cpp"
        "events/task.cpp"
        "events/unity_update_loop.cpp"
        "input/simulator.cpp"
        "ipc/ipc.cpp"
        "messages/message_controller.cpp"
        "messages/message_display.cpp"
        "mood_guid.cpp"
        "save_meta/save_meta.cpp"
        "settings.cpp"
        "text/text_database.cpp"
        "text/text_processor.cpp"
        "utils/byte_stream.cpp"
        "utils/color.cpp"
        "utils/json_serializers.cpp"
        "utils/misc.cpp"
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
        "api/game/death_listener.h"
        "api/game/game.h"
        "api/game/loading_detection.h"
        "api/game/player.h"
        "api/game/trials.h"
        "api/game/ui.h"
        "api/graphics/shaders.h"
        "api/graphics/sprite.h"
        "api/graphics/textures.h"
        "api/messages/message_box.h"
        "api/messages/text_style.h"
        "api/scenes/create_objects.h"
        "api/scenes/scene_load.h"
        "api/system/message_provider.h"
        "api/sound.h"
        "api/uber_states/uber_state.h"
        "api/uber_states/uber_state_condition.h"
        "api/uber_states/uber_state_handlers.h"
        "api/uber_states/uber_state_snapshot.h"
        "api/uber_states/uber_state_virtual.h"
        "constants.h"
        "core.h"
        "cached_loader.h"
        "dev/object_visualizer.h"
        "dev/status_display.h"
        "dev/timing.h"
        "dirty_value.h"
        "dynamic_value.h"
        "dynamic_value/base.h"
        "dynamic_value/base.inl"
        "dynamic_value/bool.h"
        "dynamic_value/bool.inl"
        "dynamic_value/non_uber_state.h"
        "dynamic_value/non_uber_state.inl"
        "dynamic_value/string.h"
        "dynamic_value/string.inl"
        "dynamic_value/uber_state.h"
        "dynamic_value/uber_state.inl"
        "enums/actions.h"
        "enums/buttons.h"
        "enums/comparison.h"
        "enums/controller_angle.h"
        "enums/controller_axis.h"
        "enums/game_areas.h"
        "enums/game_event.h"
        "enums/layer.h"
        "enums/sound.h"
        "enums/loading_state.h"
        "enums/save_meta_slot.h"
        "enums/save_meta_slot_persistence.h"
        "enums/shard_type.h"
        "enums/static_text_entries.h"
        "enums/timeline_entries.h"
        "enums/uber_state.h"
        "enums/world_events.h"
        "events/action.h"
        "events/async_update.h"
        "id_registry.h"
        "input/simulator.h"
        "ipc/ipc.h"
        "macros.h"
        "messages/message_controller.h"
        "messages/message_display.h"
        "messages/message_handle.h"
        "mood_guid.h"
        "save_meta/save_meta.h"
        "settings.h"
        "text/text_database.h"
        "text/text_processor.h"
        "utils/byte_stream.h"
        "utils/color.h"
        "utils/json_serializers.h"
        "utils/misc.h"
        "utils/operations.h"
        "utils/position_converter.h"
        "utils/stb_image.h"
)

set(
        MISC_FILES
        ".editorconfig"
        "CMakeLists.txt"
        enums/loading_state.h)

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

find_package(inih)
target_link_libraries(${PROJECT_NAME} inih::inih)

find_package(cppzmq)
target_link_libraries(${PROJECT_NAME} cppzmq::cppzmq)

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
