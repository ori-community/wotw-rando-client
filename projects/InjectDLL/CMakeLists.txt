project("InjectDLL")
string(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPER)

message(STATUS "")
message(STATUS "Project ${PROJECT_NAME}:")

set(PROJECT_DIR ${WOTWR_PROJECTS_DIR}/${PROJECT_NAME})

set(
    SOURCE_FILES
    "dev/object_visualizer.cpp"
    "enums/uber_state.cpp"
    "features/chaos.cpp"
    "features/credits.cpp"
    "features/custom_fire_sources.cpp"
    "features/day_night_logic.cpp"
    "features/difficulty.cpp"
    "features/grenade.cpp"
    "features/keystone_door.cpp"
    "features/map.cpp"
    "features/secrets.cpp"
    "features/sein_ui.cpp"
    "features/start_anywhere.cpp"
    "features/water.cpp"
    "features/wheel.cpp"
    "features/controls/ability_overrides.cpp"
    "features/controls/air_no_deceleration.cpp"
    "features/controls/autoaim.cpp"
    "features/controls/invert_swim.cpp"
    "features/controls/launch_no_deceleration.cpp"
    "features/controls/mouse_control.cpp"
    "features/npcs/lupo_everywhere.cpp"
    "features/npcs/opher_everywhere.cpp"
    "features/npcs/tokk_everywhere.cpp"
    "features/npcs/twillen_everywhere.cpp"
    "features/npcs/tuley_switch.cpp"
    "features/scenes/create_objects.cpp"
    "features/scenes/scene_load.cpp"
    "features/trackers/ability_tracker.cpp"
    "features/trackers/bingo_tracking.cpp"
    "features/trackers/death_listener.cpp"
    "features/trackers/goal_mode_check.cpp"
    "game/game.cpp"
    "game/map_icons.cpp"
    "game/player.cpp"
    "game/ui.cpp"
    "game/behaviour_changes/allow_blind_forest_abilities.cpp"
    "game/behaviour_changes/blaze_hit_environment.cpp"
    "game/behaviour_changes/burrow_and_waterdash_without_dash.cpp"
    "game/behaviour_changes/deflector_without_bash.cpp"
    "game/behaviour_changes/feeding_grounds_allow_burrow.cpp"
    "game/behaviour_changes/flap_without_glide.cpp"
    "game/behaviour_changes/instant_tp_activation.cpp"
    "game/behaviour_changes/prevent_pickup.cpp"
    "game/behaviour_changes/stomp_through_portals.cpp"
    "game/behaviour_changes/teleporter_glades_identifier.cpp"
    "game/behaviour_changes/teleporter_map_activation.cpp"
    "game/behaviour_changes/trials_leaderboards.cpp"
    "game/event_handlers/on_area_map.cpp"
    "game/event_handlers/on_save.cpp"
    "game/event_handlers/on_teleport.cpp"
    "game/event_handlers/on_trial.cpp"
    "game/pickups/pickups.cpp"
    "game/pickups/energy_cell.cpp"
    "game/pickups/experience.cpp"
    "game/pickups/health_cell.cpp"
    "game/pickups/keystone.cpp"
    "game/pickups/ore.cpp"
    "game/pickups/quests.cpp"
    "game/pickups/spirit_shard.cpp"
    "game/pickups/tree.cpp"
    "game/pickups/bonus/bow_attack_speed.cpp"
    "game/pickups/bonus/energy_cost_upgrades.cpp"
    "game/pickups/bonus/extra_ability_activations.cpp"
    "game/pickups/bonus/hammer_attack_speed.cpp"
    "game/pickups/bonus/spear_attack_speed.cpp"
    "game/pickups/bonus/sword_attack_speed.cpp"
    "game/pickups/bonus/velocity.cpp"
    "game/pickups/shops/general.cpp"
    "game/pickups/shops/lupo.cpp"
    "game/pickups/shops/grom.cpp"
    "game/pickups/shops/opher.cpp"
    "game/pickups/shops/tuley.cpp"
    "game/pickups/shops/twillen.cpp"
    "game/system/message_provider.cpp"
    "interop/csharp_bridge.cpp"
    "randomizer/collision.cpp"
    "randomizer/messages.cpp"
    "randomizer/multiplayer.cpp"
    "randomizer/settings.cpp"
    "randomizer/sound.cpp"
    "randomizer/text_database.cpp"
    "randomizer/timer.cpp"
    "randomizer/animation/animation.cpp"
    "randomizer/animation/timeline.cpp"
    "randomizer/animation/timeline_entries/base.cpp"
    "randomizer/animation/timeline_entries/lerpers.cpp"
    "randomizer/animation/timeline_entries/objects.cpp"
    "randomizer/animation/timeline_entries/setters.cpp"
    "randomizer/conditions/condition_override.cpp"
    "randomizer/conditions/condition_uber_state.cpp"
    "randomizer/conditions/new_setup_state_override.cpp"
    "randomizer/conditions/targeting_override.cpp"
    "randomizer/input/controller_bindings.cpp"
    "randomizer/input/helpers.cpp"
    "randomizer/input/rando_bindings.cpp"
    "randomizer/input/simulator.cpp"
    "randomizer/ipc/base_handlers.cpp"
    "randomizer/ipc/hierarchy.cpp"
    "randomizer/ipc/ipc.cpp"
    "randomizer/render/shaders.cpp"
    "randomizer/render/sprite.cpp"
    "randomizer/render/textures.cpp"
    "uber_states/uber_state_dev.cpp"
    "uber_states/uber_state_initialization.cpp"
    "uber_states/uber_state_interface.cpp"
    "uber_states/uber_state_helper.cpp"
    "uber_states/uber_state_virtual.cpp"
    "utils/json_serializers.cpp"
    "utils/misc.cpp"
    "utils/operations.cpp"
    "utils/position_converter.cpp"
    "utils/stb_image.cpp"
)

set(
    PUBLIC_HEADER_FILES
    "constants.h"
    "macros.h"
    "dev/object_visualizer.h"
    "enums/actions.h"
    "enums/buttons.h"
    "enums/game_event.h"
    "enums/layer.h"
    "enums/sound_event_id.h"
    "enums/static_text_entries.h"
    "enums/timeline_entries.h"
    "enums/uber_state.h"
    "features/chaos.h"
    "features/controls/ability_overrides.h"
    "features/controls/invert_swim.h"
    "features/controls/mouse_control.h"
    "features/scenes/create_objects.h"
    "features/scenes/scene_load.h"
    "features/trackers/death_listener.h"
    "game/game.h"
    "game/player.h"
    "game/ui.h"
    "game/pickups/pickups.h"
    "game/pickups/shops/general.h"
    "game/system/message_provider.h"
    "interop/csharp_bridge.h"
    "interop/enum_definitions.h"
    "randomizer/cached_loader.h"
    "randomizer/collision.h"
    "randomizer/dirty_value.h"
    "randomizer/event_bus.h"
    "randomizer/messages.h"
    "randomizer/multiplayer.h"
    "randomizer/settings.h"
    "randomizer/sound.h"
    "randomizer/text_database.h"
    "randomizer/timer.h"
    "randomizer/animation/animation.h"
    "randomizer/animation/timeline.h"
    "randomizer/animation/timeline_state.h"
    "randomizer/animation/timeline_entries/base.h"
    "randomizer/animation/timeline_entries/lerpers.h"
    "randomizer/animation/timeline_entries/objects.h"
    "randomizer/animation/timeline_entries/setters.h"
    "randomizer/conditions/condition_override.h"
    "randomizer/conditions/condition_uber_state.h"
    "randomizer/conditions/new_setup_state_override.h"
    "randomizer/conditions/targeting_override.h"
    "randomizer/input/controller_bindings.h"
    "randomizer/input/helpers.h"
    "randomizer/input/rando_bindings.h"
    "randomizer/input/simulator.h"
    "randomizer/ipc/base_handlers.h"
    "randomizer/ipc/ipc.h"
    "randomizer/render/shaders.h"
    "randomizer/render/sprite.h"
    "randomizer/render/textures.h"
    "uber_states/uber_state_interface.h"
    "uber_states/uber_state_helper.h"
    "uber_states/uber_state_virtual.h"
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
)

add_library(${PROJECT_NAME} SHARED
    ${SOURCE_FILES}
    ${PUBLIC_HEADER_FILES}
    ${MISC_FILES}
)

target_compile_definitions(${PROJECT_NAME}
    PRIVATE COMPILING_INJECTDLL
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
    randomizer
        ${WOTWR_BASE_INCLUDES}
)

target_link_libraries(
    ${PROJECT_NAME}
    Common
    Il2CppModLoader
)

target_precompile_headers(
    ${PROJECT_NAME}
        PRIVATE <tchar.h>
)

message(STATUS "Assigning source groups.")

set_vc_structure("${CMAKE_CURRENT_SOURCE_DIR}" "${SOURCE_FILES};${PUBLIC_HEADER_FILES};${MISC_FILES}")
set_vc_structure_with_prefix("_project_settings" "${CMAKE_CURRENT_SOURCE_DIR}" "${MISC_FILES};")

message(STATUS "TESTING ${PROJECT_BINARY_DIR}")

source_group("_precompiled_headers"
    FILES
        ${PROJECT_BINARY_DIR}/CMakeFiles/InjectDLL.dir/Debug/cmake_pch.hxx
        ${PROJECT_BINARY_DIR}/CMakeFiles/InjectDLL.dir/MinSizeRel/cmake_pch.hxx
        ${PROJECT_BINARY_DIR}/CMakeFiles/InjectDLL.dir/RelWithDebInfo/cmake_pch.hxx
        ${PROJECT_BINARY_DIR}/CMakeFiles/InjectDLL.dir/Release/cmake_pch.hxx
        ${PROJECT_BINARY_DIR}/CMakeFiles/InjectDLL.dir/cmake_pch.cxx
)

install(
    TARGETS ${PROJECT_NAME}
    RUNTIME DESTINATION "${WOTWR_INSTALL_DIR}"
    LIBRARY DESTINATION "${WOTWR_INSTALL_DIR}"
    ARCHIVE DESTINATION "${WOTWR_INSTALL_DIR}"
)
