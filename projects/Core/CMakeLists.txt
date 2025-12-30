project("Core")

message(STATUS "")
message(STATUS "Project ${PROJECT_NAME}:")

set(PROJECT_DIR ${WOTWR_PROJECTS_DIR}/${PROJECT_NAME})

set(
        SOURCE_FILES
        "animation/animation.cpp"
        "api/faderb.cpp"
        "api/input.cpp"
        "api/game/death_listener.cpp"
        "api/game/debug_menu.cpp"
        "api/game/game.cpp"
        "api/game/in_game_timer.cpp"
        "api/game/player.cpp"
        "api/game/state_flags_display.cpp"
        "api/game/trials.cpp"
        "api/game/ui.cpp"
        "api/game/pickup_prevention/energy_cell.cpp"
        "api/game/pickup_prevention/experience.cpp"
        "api/game/pickup_prevention/health_cell.cpp"
        "api/game/pickup_prevention/keystone.cpp"
        "api/game/pickup_prevention/ore.cpp"
        "api/graphics/shaders.cpp"
        "api/graphics/sprite.cpp"
        "api/graphics/textures.cpp"
        "api/messages/message_box.cpp"
        "api/messages/text_style.cpp"
        "api/messages/fix_text_box_rect_computation.cpp"
        "api/moon_animator_events.cpp"
        "api/scenes/create_objects.cpp"
        "api/scenes/polygon.cpp"
        "api/scenes/scene_load.cpp"
        "api/system/save_files.cpp"
        "api/audio.cpp"
        "api/screen_position.cpp"
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
        "enums/teleporter_type.cpp"
        "enums/uber_state.cpp"
        "events/action.cpp"
        "events/async_update.cpp"
        "events/console_update.cpp"
        "events/task.cpp"
        "events/unity_update_loop.cpp"
        "input/input_lock.cpp"
        "input/mouse.cpp"
        "input/midi_input.cpp"
        "input/simulator.cpp"
        "ipc/ipc.cpp"
        "ipc/console.cpp"
        "messages/message_controller.cpp"
        "messages/message_display.cpp"
        "mood_guid.cpp"
        "property/reactivity.cpp"
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
        "api/faderb.h"
        "api/input.h"
        "api/game/death_listener.h"
        "api/game/debug_menu.h"
        "api/game/game.h"
        "api/game/in_game_timer.h"
        "api/game/player.h"
        "api/game/trials.h"
        "api/game/ui.h"
        "api/graphics/shaders.h"
        "api/graphics/sprite.h"
        "api/graphics/textures.h"
        "api/messages/message_box.h"
        "api/messages/text_style.h"
        "api/moon_animator_events.h"
        "api/scenes/create_objects.h"
        "api/scenes/scene_load.h"
        "api/scenes/polygon.h"
        "api/system/message_provider.h"
        "api/system/save_files.h"
        "api/audio.h"
        "api/screen_position.h"
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
        "property.h"
        "property/property_non_uber_state.inl"
        "property/property_string.inl"
        "property/property_uber_state.inl"
        "enums/actions.h"
        "enums/buttons.h"
        "enums/comparison.h"
        "enums/controller_angle.h"
        "enums/controller_axis.h"
        "enums/game_areas.h"
        "enums/game_event.h"
        "enums/layer.h"
        "enums/audio.h"
        "enums/async_loading_state.h"
        "enums/save_meta_slot.h"
        "enums/save_meta_slot_persistence.h"
        "enums/shard_type.h"
        "enums/text_id.h"
        "enums/teleporter_type.h"
        "enums/timeline_entries.h"
        "enums/uber_state.h"
        "enums/world_events.h"
        "events/action.h"
        "events/async_update.h"
        "id_registry.h"
        "input/input_lock.h"
        "input/mouse.h"
        "input/midi_input.h"
        "input/simulator.h"
        "ipc/ipc.h"
        "ipc/console.h"
        "macros.h"
        "messages/message_controller.h"
        "messages/message_display.h"
        "messages/message_handle.h"
        "mood_guid.h"
        "property/reactivity.h"
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
        "CMakeLists.txt")

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
        ${CMAKE_CONFIG_DIRECTORY}
        ${CONFIG_DIRECTORY}
        ${WOTWR_BASE_INCLUDES}
)

target_link_libraries(
        ${PROJECT_NAME}
        Common
        Modloader
)

if (ENABLE_PROFILER)
    target_link_libraries(
            ${PROJECT_NAME}
            Profiler
    )
endif()

find_package(nlohmann_json)
target_link_libraries(${PROJECT_NAME} nlohmann_json::nlohmann_json)

find_package(magic_enum)
target_link_libraries(${PROJECT_NAME} magic_enum::magic_enum)

find_package(cppzmq CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} cppzmq cppzmq-static)

find_package(libremidi CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} libremidi)

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
