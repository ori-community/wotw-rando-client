project("Randomizer")

message(STATUS "")
message(STATUS "Project ${PROJECT_NAME}:")

set(PROJECT_DIR ${WOTWR_PROJECTS_DIR}/${PROJECT_NAME})

set(
        SOURCE_FILES
        "conditions/condition_override.cpp"
        "conditions/condition_uber_state.cpp"
        "conditions/new_setup_state_override.cpp"
        "conditions/targeting_override.cpp"
        "ext/process.cpp"
        "ext/process_win.cpp"
        "features/area_segment_states.cpp"
        "features/better_menus.cpp"
        "features/camera_aspect.cpp"
        "features/controls/ability_overrides.cpp"
        "features/controls/air_no_deceleration.cpp"
        "features/controls/autoaim.cpp"
        "features/controls/hold_to_skip_dialog.cpp"
        "features/controls/invert_swim.cpp"
        "features/controls/launch_no_deceleration.cpp"
        "features/controls/mouse_control.cpp"
        "features/credits.cpp"
        "features/custom_fire_sources.cpp"
        "features/cutscene_skips/custom_cutscene_skips.cpp"
        "features/cutscene_skips/final_cutscene.cpp"
        "features/cutscene_skips/kwolok_boss_farewell.cpp"
        "features/cutscene_skips/kwolok_boss_intro.cpp"
        "features/cutscene_skips/levers.cpp"
        "features/cutscene_skips/mora_start.cpp"
        "features/cutscene_skips/reach_escape.cpp"
        "features/cutscene_skips/sandworm_end.cpp"
        "features/cutscene_skips/sandworm_start.cpp"
        "features/cutscene_skips/wellspring_escape_start.cpp"
        "features/cutscene_skips/wellspring_so_soggy.cpp"
        "features/cutscene_skips/willow_heart_cutscenes.cpp"
        "features/mini_map/mini_map.cpp"
        "features/difficulty.cpp"
        "features/door_randomizer.cpp"
        "features/keyboard_multibind.cpp"
        "features/keystone_door.cpp"
        "features/knock_knock_wellspring.cpp"
        "features/npcs/lupo_everywhere.cpp"
        "features/npcs/opher_everywhere.cpp"
        "features/npcs/tokk_everywhere.cpp"
        "features/npcs/tuley_switch.cpp"
        "features/npcs/twillen_everywhere.cpp"
        "features/recording_utils.cpp"
        "features/scenes/modifications/double_jump_spring.cpp"
        "features/scenes/modifications/fix_luma_to_marsh_plank_x_rotation.cpp"
        "features/scenes/modifications/hornbug_arena_allow_teleportation.cpp"
        "features/scenes/modifications/keep_epilogue_loaded_during_shriek_escape.cpp"
        "features/scenes/modifications/kwolok_escape_sl_softlock_fix.cpp"
        "features/scenes/modifications/kwolok_escape_start_allow_teleportation.cpp"
        "features/scenes/modifications/load_wellspring_bottom_floor_center_path_earlier.cpp"
        "features/scenes/modifications/luma_fight_room_door_always_open.cpp"
        "features/scenes/modifications/marsh_burrow_fight_arena_allow_teleportation.cpp"
        "features/scenes/modifications/meeting_kwolok_cutscene_trigger_underwater_fix.cpp"
        "features/scenes/modifications/reactive_bone_bridge_state.cpp"
        "features/scenes/modifications/ruins_escape_allow_teleportation.cpp"
        "features/scenes/modifications/sandless_feeding_grounds_to_elevator.cpp"
        "features/scenes/modifications/sandless_shriek_escape.cpp"
        "features/scenes/modifications/woods_exit_tp_slow_walk_zone_state.cpp"
        "features/secrets.cpp"
        "features/sentry_burn_damage_type_fix.cpp"
        "features/shrine_states.cpp"
        "features/trackers/ability_tracker.cpp"
        "features/trackers/goal_mode_check.cpp"
        "features/trial_texts.cpp"
        "features/wheel.cpp"
        "features/wheel_initialization.cpp"
        "game/behaviour_changes/allow_blind_forest_abilities.cpp"
        "game/behaviour_changes/alternative_baurs_reach_access.cpp"
        "game/behaviour_changes/better_lasers.cpp"
        "game/behaviour_changes/blaze_hit_environment.cpp"
        "game/behaviour_changes/burrow_and_waterdash_without_dash.cpp"
        "game/behaviour_changes/dash_stomper_fall_through.cpp"
        "game/behaviour_changes/deflector_without_bash.cpp"
        "game/behaviour_changes/faster_teleportation.cpp"
        "game/behaviour_changes/feeding_grounds_allow_burrow.cpp"
        "game/behaviour_changes/fix_frog_from_hell.cpp"
        "game/behaviour_changes/fix_grenades.cpp"
        "game/behaviour_changes/family_reunion_moki_hut_state.cpp"
        "game/behaviour_changes/fix_hand_to_hand_gorlek_delay.cpp"
        "game/behaviour_changes/fix_hand_to_hand_mapstone_delay.cpp"
        "game/behaviour_changes/fix_kwolok_not_stopping_when_abandoning_challenge.cpp"
        "game/behaviour_changes/fix_kwoloks_hollow_cutscene_skip.cpp"
        "game/behaviour_changes/fix_shields_not_breaking_with_fracture.cpp"
        "game/behaviour_changes/fix_shop_anywhere.cpp"
        "game/behaviour_changes/fix_wellspring_escape_end_cutscene_game_area.cpp"
        "game/behaviour_changes/flap_without_glide.cpp"
        "game/behaviour_changes/instant_tp_activation.cpp"
        "game/behaviour_changes/keep_shriek_health_bar_visible.cpp"
        "game/behaviour_changes/kwolok_boss_rubberbanding_fix.cpp"
        "game/behaviour_changes/luma_contact_switch_door_jank_fix.cpp"
        "game/behaviour_changes/fix_cat_and_mouse_softlock.cpp"
        "game/behaviour_changes/patch2_kickback.cpp"
        "game/behaviour_changes/prevent_pickup.cpp"
        "game/behaviour_changes/stomp_into_water.cpp"
        "game/behaviour_changes/stomp_through_portals.cpp"
        "game/behaviour_changes/teleport_restriction.cpp"
        "game/behaviour_changes/teleporter_glades_identifier.cpp"
        "game/behaviour_changes/teleporter_map_activation.cpp"
        "game/behaviour_changes/teleporting_oob_fix.cpp"
        "game/behaviour_changes/luma_trial_bubbles.cpp"
        "game/behaviour_changes/trials_leaderboards.cpp"
        "game/behaviour_changes/triple_jump_shockwave.cpp"
        "game/condition_intercepts/day_night_logic.cpp"
        "game/condition_intercepts/good_hollow.cpp"
        "game/condition_intercepts/grom_built_tps.cpp"
        "game/condition_intercepts/grom_projects.cpp"
        "game/condition_intercepts/water.cpp"
        "game/event_handlers/on_area_map.cpp"
        "game/event_handlers/on_save.cpp"
        "game/event_handlers/on_teleport.cpp"
        "game/event_handlers/on_trial.cpp"
        "game/camera_shake.cpp"
        "game/enemy_spawning.cpp"
        "game/music.cpp"
        "game/pickups/bonus/grenade.cpp"
        "game/pickups/bonus/bow_attack_speed.cpp"
        "game/pickups/bonus/energy_cost_upgrades.cpp"
        "game/pickups/bonus/energy_regeneration.cpp"
        "game/pickups/bonus/extra_ability_activations.cpp"
        "game/pickups/bonus/extra_shurikens.cpp"
        "game/pickups/bonus/hammer_attack_speed.cpp"
        "game/pickups/bonus/health_regeneration.cpp"
        "game/pickups/bonus/regenerate_speed.cpp"
        "game/pickups/bonus/sentry_upgrades.cpp"
        "game/pickups/bonus/spear_attack_speed.cpp"
        "game/pickups/bonus/sword_attack_speed.cpp"
        "game/pickups/bonus/ultra_flap.cpp"
        "game/pickups/bonus/velocity.cpp"
        "game/pickups/bonus/flash.cpp"
        "game/pickups/pickups.cpp"
        "game/pickups/quests.cpp"
        "game/pickups/spirit_shard.cpp"
        "game/pickups/tree.cpp"
        "game/shops/fast_purchase.cpp"
        "game/shops/general.cpp"
        "game/shops/grom.cpp"
        "game/shops/lupo.cpp"
        "game/shops/lupo_dont_open_map.cpp"
        "game/shops/lupo_maps.cpp"
        "game/shops/opher.cpp"
        "game/shops/shop.cpp"
        "game/shops/spirit_light_spent.cpp"
        "game/shops/tuley.cpp"
        "game/shops/twillen.cpp"
        "game/spawning_and_preloading.cpp"
        "game/teleport.cpp"
        "ghosts/plugins/update_active_animations_plugin.cpp"
        "ghosts/plugins.cpp"
        "ghosts.cpp"
        "ghosts_playground.cpp"
        "input/action_registration.cpp"
        "input/better_keyboard_aiming.cpp"
        "input/controller_bindings.cpp"
        "input/helpers.cpp"
        "input/rando_bindings.cpp"
        "input/sdl_input.cpp"
        "ipc/base_handlers.cpp"
        "ipc/hierarchy.cpp"
        "league/league.cpp"
        "map/base_icons/breakable_walls_and_floors.cpp"
        "map/base_icons/ice_walls_and_floors.cpp"
        "map/base_icons/keystone_doors.cpp"
        "map/base_icons/levers.cpp"
        "map/base_icons/one_way_walls.cpp"
        "map/base_icons/purple_walls_and_floors.cpp"
        "map/base_icons/randomizer_pickups.cpp"
        "map/base_icons/vanilla_warps.cpp"
        "map/base_icons/vertical_and_horizontal_barriers.cpp"
        "map/base_icons/willow_hearts.cpp"
        "map/base_icons/yellow_walls_and_floors.cpp"
        "map/area_percentage.cpp"
        "map/fix_focus_objective_button.cpp"
        "map/fix_keyboard_map_focus.cpp"
        "map/fragments.cpp"
        "map/map_filter.cpp"
        "map/map_icons.cpp"
        "map/map_pan.cpp"
        "map/map_playground.cpp"
        "map/map_zoom.cpp"
        "map/quest_list_ui.cpp"
        "map/reveal_map.cpp"
        "map/skip_map_objective_cutscenes.cpp"
        "messages/credits_controller.cpp"
        "messages/credit_entries/base_entry.cpp"
        "messages/credit_entries/text_entry.cpp"
        "messages/credit_entries/move_entry.cpp"
        "messages/map_top_left_darken.cpp"
        "messages/messages.cpp"
        "online/multiplayer.cpp"
        "online/network.cpp"
        "online/network_monitor.cpp"
        "online/player.cpp"
        "online/player_icon.cpp"
        "online/uber_state_handler.cpp"
        "randomizer.cpp"
        "seed/archive.cpp"
        "seed/instructions.cpp"
        "seed/instruction_utils.cpp"
        "seed/parser.cpp"
        "seed/seedgen_service.cpp"
        "seed/seed.cpp"
        "seed/seed_source.cpp"
        "shrek.cpp"
        "stats/enemies.cpp"
        "stats/game_stats.cpp"
        "text_processors/ability.cpp"
        "text_processors/action.cpp"
        "text_processors/helpers.cpp"
        "text_processors/legacy.cpp"
        "text_processors/multiplayer.cpp"
        "text_processors/shard.cpp"
        "text_processors/uber_state.cpp"
        "trial.cpp"
        "tracking/game_tracker.cpp"
        "uber_states/random_value_generator.cpp"
        "uber_states/uber_state_initialization.cpp"
        "uber_states/uber_state_intercepts.cpp"
        "ui/always_show_keystones.cpp"
        "ui/empty_message_provider_fix.cpp"
        "ui/main_menu_seed_info.cpp"
)

set(
        PUBLIC_HEADER_FILES
        "conditions/condition_override.h"
        "conditions/condition_uber_state.h"
        "conditions/new_setup_state_override.h"
        "conditions/targeting_override.h"
        "constants.h"
        "ext/process.hpp"
        "features/area_segment_states.h"
        "features/door_randomizer.h"
        "features/controls/ability_overrides.h"
        "features/controls/invert_swim.h"
        "features/credits.h"
        "features/cutscene_skips/custom_cutscene_skips.h"
        "game/pickups/quests.h"
        "game/shops/grom.h"
        "game/shops/lupo_maps.h"
        "game/shops/opher.h"
        "game/shops/shop.h"
        "game/shops/twillen.h"
        "game/spawning_and_preloading.h"
        "game/teleport.h"
        "ghosts/plugins/update_active_animations_plugin.h"
        "ghosts/plugins.h"
        "ghosts.h"
        "input/controller_bindings.h"
        "input/helpers.h"
        "input/rando_bindings.h"
        "ipc/base_handlers.h"
        "httplib.h"
        "macros.h"
        "map/fragments.h"
        "map/map_filter.h"
        "map/map_icons.h"
        "messages/credits_controller.h"
        "messages/credit_entries/base_entry.h"
        "messages/credit_entries/text_entry.h"
        "messages/credit_entries/move_entry.h"
        "online/multiplayer.h"
        "online/network.h"
        "online/network_monitor.h"
        "online/player.h"
        "online/player_icon.h"
        "online/uber_state_handler.h"
        "randomizer.h"
        "seed/archive.h"
        "seed/instructions.h"
        "seed/instructions/arithmetic_float.h"
        "seed/instructions/arithmetic_integer.h"
        "seed/instructions/base/arithmetic.h"
        "seed/instructions/base/cast.h"
        "seed/instructions/base/compare_equality.h"
        "seed/instructions/base/compare_numeric.h"
        "seed/instructions/base/copy.h"
        "seed/instructions/base/fetch.h"
        "seed/instructions/base/set.h"
        "seed/instructions/base/store.h"
        "seed/instructions/boolean_to_string.h"
        "seed/instructions/compare_boolean.h"
        "seed/instructions/compare_float.h"
        "seed/instructions/compare_integer.h"
        "seed/instructions/compare_string.h"
        "seed/instructions/concatenate.h"
        "seed/instructions/copy_boolean.h"
        "seed/instructions/copy_float.h"
        "seed/instructions/copy_integer.h"
        "seed/instructions/copy_string.h"
        "seed/instructions/create_warp_icon.h"
        "seed/instructions/debug_log.h"
        "seed/instructions/box_trigger.h"
        "seed/instructions/box_trigger_destroy.h"
        "seed/instructions/box_trigger_enter_callback.h"
        "seed/instructions/box_trigger_leave_callback.h"
        "seed/instructions/define_timer.h"
        "seed/instructions/destroy_warp_icon.h"
        "seed/instructions/destroy_wheel_item.h"
        "seed/instructions/disable_server_sync.h"
        "seed/instructions/enable_server_sync.h"
        "seed/instructions/equip.h"
        "seed/instructions/execute.h"
        "seed/instructions/execute_if.h"
        "seed/instructions/fetch_boolean.h"
        "seed/instructions/fetch_float.h"
        "seed/instructions/fetch_integer.h"
        "seed/instructions/float_to_integer.h"
        "seed/instructions/float_to_string.h"
        "seed/instructions/free_message.h"
        "seed/instructions/free_message_alignment.h"
        "seed/instructions/free_message_box_width.h"
        "seed/instructions/free_message_hide.h"
        "seed/instructions/free_message_horizontal_anchor.h"
        "seed/instructions/free_message_position.h"
        "seed/instructions/free_message_coordinate_system.h"
        "seed/instructions/free_message_show.h"
        "seed/instructions/free_message_vertical_anchor.h"
        "seed/instructions/integer_to_float.h"
        "seed/instructions/integer_to_string.h"
        "seed/instructions/is_in_box.h"
        "seed/instructions/logic_operation.h"
        "seed/instructions/message_background.h"
        "seed/instructions/message_destroy.h"
        "seed/instructions/message_text.h"
        "seed/instructions/message_timeout.h"
        "seed/instructions/queued_message.h"
        "seed/instructions/queued_message_hidden_callback.h"
        "seed/instructions/queued_message_shown_callback.h"
        "seed/instructions/reset_all_wheels.h"
        "seed/instructions/round.h"
        "seed/instructions/save.h"
        "seed/instructions/save_at.h"
        "seed/instructions/set_boolean.h"
        "seed/instructions/set_float.h"
        "seed/instructions/set_integer.h"
        "seed/instructions/close_menu.h"
        "seed/instructions/close_weapon_wheel.h"
        "seed/instructions/set_shop_item_description.h"
        "seed/instructions/set_shop_item_hidden.h"
        "seed/instructions/set_shop_item_icon.h"
        "seed/instructions/set_shop_item_locked.h"
        "seed/instructions/set_shop_item_name.h"
        "seed/instructions/set_shop_item_price.h"
        "seed/instructions/create_spoiler_map_icon.h"
        "seed/instructions/set_string.h"
        "seed/instructions/set_warp_icon_label.h"
        "seed/instructions/set_wheel_item_color.h"
        "seed/instructions/set_wheel_item_command.h"
        "seed/instructions/set_wheel_item_description.h"
        "seed/instructions/set_wheel_item_icon.h"
        "seed/instructions/set_wheel_item_name.h"
        "seed/instructions/set_wheel_pinned.h"
        "seed/instructions/store_boolean.h"
        "seed/instructions/store_float.h"
        "seed/instructions/store_integer.h"
        "seed/instructions/switch_wheel.h"
        "seed/instructions/trigger_keybind.h"
        "seed/instructions/unequip.h"
        "seed/instructions/warp.h"
        "seed/instructions/world_name.h"
        "seed/instruction_utils.h"
        "seed/parser.h"
        "seed/seedgen_service.h"
        "seed/seed.h"
        "seed/seed_source.h"
        "stats/game_stats.h"
        "text_processors/ability.h"
        "text_processors/action.h"
        "text_processors/helpers.h"
        "text_processors/legacy.h"
        "text_processors/multiplayer.h"
        "text_processors/shard.h"
        "text_processors/uber_state.h"
        "trial.h"
        "tracking/game_tracker.h"
        "uber_states/random_value_generator.h"
        "uber_states/uber_state_initialization.h"
        "uber_states/uber_state_intercepts.h"
        seed/instructions/set_text_with_id.h
)

set(
        MISC_FILES
        "CMakeLists.txt"
)

find_package(protobuf CONFIG REQUIRED)
protobuf_generate_cpp(PROTO_SRC PROTO_HEADERS proto/packets.proto)
set_source_files_properties(${PROTO_SRC} ${PROTO_HEADERS} PROPERTIES GENERATED TRUE)

add_library(
        ${PROJECT_NAME}
        SHARED
        ${SOURCE_FILES}
        ${PUBLIC_HEADER_FILES}
        ${MISC_FILES}
        ${PROTO_SRC}
        ${PROTO_HEADERS}
)

target_compile_definitions(
        ${PROJECT_NAME}
        PRIVATE
        COMPILING_RANDOMIZER
        MAGIC_ENUM_RANGE_MAX=4096
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
        ${PROJECT_BINARY_DIR}
        ${protobuf_INCLUDE_DIR}
)

target_link_libraries(
        ${PROJECT_NAME}
        Common
        Modloader
        Core
)

if (ENABLE_PROFILER)
    target_link_libraries(
            ${PROJECT_NAME}
            Profiler
    )
endif()

target_compile_definitions(${PROJECT_NAME} PUBLIC ZIP_CM_ZSTD)

find_package(semver CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} semver::semver)

find_package(nlohmann_json REQUIRED)
target_link_libraries(${PROJECT_NAME} nlohmann_json::nlohmann_json)

find_package(magic_enum REQUIRED)
target_link_libraries(${PROJECT_NAME} magic_enum::magic_enum)

find_package(ixwebsocket REQUIRED)
target_link_libraries(${PROJECT_NAME} ixwebsocket::ixwebsocket)

find_package(httplib CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} httplib::httplib)

find_package(OpenSSL REQUIRED)
target_link_libraries(${PROJECT_NAME} OpenSSL::SSL OpenSSL::Crypto)

target_link_libraries(${PROJECT_NAME} protobuf::libprotoc protobuf::libprotobuf protobuf::libprotobuf-lite)

find_package(zstd CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} $<IF:$<TARGET_EXISTS:zstd::libzstd_shared>,zstd::libzstd_shared,zstd::libzstd_static>)

find_package(libzippp CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} libzippp::libzippp)

find_package(SDL3 CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} SDL3::SDL3)

find_package(stduuid CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} stduuid)

find_package(frozen CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} frozen::frozen frozen::frozen-headers)

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
