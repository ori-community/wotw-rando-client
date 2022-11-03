project("Randomizer")
string(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPER)

message(STATUS "")
message(STATUS "Project ${PROJECT_NAME}:")

set(PROJECT_DIR ${WOTWR_PROJECTS_DIR}/${PROJECT_NAME})

set(
        SOURCE_FILES
        "collision.cpp"
        "conditions/condition_override.cpp"
        "conditions/condition_uber_state.cpp"
        "conditions/new_setup_state_override.cpp"
        "conditions/targeting_override.cpp"
        "features/better_menus.cpp"
        "features/chaos.cpp"
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
        "features/cutscene_skips/mora_start.cpp"
        "features/cutscene_skips/reach_escape.cpp"
        "features/cutscene_skips/sandworm_end.cpp"
        "features/cutscene_skips/sandworm_start.cpp"
        "features/cutscene_skips/wellspring_escape_start.cpp"
        "features/cutscene_skips/wellspring_so_soggy.cpp"
        "features/day_night_logic.cpp"
        "features/difficulty.cpp"
        "features/grenade.cpp"
        "features/keystone_door.cpp"
        "features/map.cpp"
        "features/npcs/lupo_everywhere.cpp"
        "features/npcs/opher_everywhere.cpp"
        "features/npcs/tokk_everywhere.cpp"
        "features/npcs/tuley_switch.cpp"
        "features/npcs/twillen_everywhere.cpp"
        "features/recording_utils.cpp"
        "features/scenes/modifications/double_jump_spring.cpp"
        "features/scenes/modifications/keep_epilogue_loaded_during_shriek_escape.cpp"
        "features/scenes/modifications/load_wellspring_bottom_floor_center_path_earlier.cpp"
        "features/scenes/modifications/luma_fight_room_door_always_open.cpp"
        "features/secrets.cpp"
        "features/sein_ui.cpp"
        "features/shrine_states.cpp"
        "features/spawn.cpp"
        "features/trackers/ability_tracker.cpp"
        "features/trackers/death_listener.cpp"
        "features/trackers/goal_mode_check.cpp"
        "features/water.cpp"
        "features/wheel.cpp"
        "game/behaviour_changes/allow_blind_forest_abilities.cpp"
        "game/behaviour_changes/better_lasers.cpp"
        "game/behaviour_changes/blaze_hit_environment.cpp"
        "game/behaviour_changes/burrow_and_waterdash_without_dash.cpp"
        "game/behaviour_changes/deflector_without_bash.cpp"
        "game/behaviour_changes/feeding_grounds_allow_burrow.cpp"
        "game/behaviour_changes/flap_without_glide.cpp"
        "game/behaviour_changes/instant_tp_activation.cpp"
        "game/behaviour_changes/kwolok_boss_rubberbanding_fix.cpp"
        "game/behaviour_changes/prevent_pickup.cpp"
        "game/behaviour_changes/stomp_into_water.cpp"
        "game/behaviour_changes/stomp_through_portals.cpp"
        "game/behaviour_changes/teleporter_glades_identifier.cpp"
        "game/behaviour_changes/teleporter_map_activation.cpp"
        "game/behaviour_changes/trials_leaderboards.cpp"
        "game/event_handlers/on_area_map.cpp"
        "game/event_handlers/on_save.cpp"
        "game/event_handlers/on_teleport.cpp"
        "game/event_handlers/on_trial.cpp"
        "game/map_icons.cpp"
        "game/pickups/bonus/bow_attack_speed.cpp"
        "game/pickups/bonus/energy_cost_upgrades.cpp"
        "game/pickups/bonus/extra_ability_activations.cpp"
        "game/pickups/bonus/extra_shurikens.cpp"
        "game/pickups/bonus/hammer_attack_speed.cpp"
        "game/pickups/bonus/regenerate_speed.cpp"
        "game/pickups/bonus/sentry_upgrades.cpp"
        "game/pickups/bonus/spear_attack_speed.cpp"
        "game/pickups/bonus/sword_attack_speed.cpp"
        "game/pickups/bonus/velocity.cpp"
        "game/pickups/energy_cell.cpp"
        "game/pickups/experience.cpp"
        "game/pickups/health_cell.cpp"
        "game/pickups/keystone.cpp"
        "game/pickups/ore.cpp"
        "game/pickups/pickups.cpp"
        "game/pickups/quests.cpp"
        "game/pickups/shops/general.cpp"
        "game/pickups/shops/grom.cpp"
        "game/pickups/shops/lupo.cpp"
        "game/pickups/shops/opher.cpp"
        "game/pickups/shops/tuley.cpp"
        "game/pickups/shops/twillen.cpp"
        "game/pickups/spirit_shard.cpp"
        "game/pickups/tree.cpp"
        "ghosts/plugins/update_active_animations_plugin.cpp"
        "ghosts/plugins.cpp"
        "ghosts.cpp"
        "ghosts_playground.cpp"
        "input/controller_bindings.cpp"
        "input/helpers.cpp"
        "input/rando_bindings.cpp"
        "interop/csharp_bridge.cpp"
        "ipc/base_handlers.cpp"
        "ipc/hierarchy.cpp"
        "messages/hint_offset.cpp"
        "messages/messages.cpp"
        "multiplayer.cpp"
        "pickups/pickup.cpp"
        "pickups/pickup_collection.cpp"
        "seed_parser/parser.cpp"
        "timer.cpp"
        "uber_states/uber_state_helper.cpp"
        "uber_states/uber_state_initialization.cpp"
)

set(
         PUBLIC_HEADER_FILES
        "collision.h"
        "conditions/condition_override.h"
        "conditions/condition_uber_state.h"
        "conditions/new_setup_state_override.h"
        "conditions/targeting_override.h"
        "constants.h"
        "features/chaos.h"
        "features/controls/ability_overrides.h"
        "features/controls/invert_swim.h"
        "features/controls/mouse_control.h"
        "features/credits.h"
        "features/cutscene_skips/custom_cutscene_skips.h"
        "features/spawn.h"
        "features/trackers/death_listener.h"
        "game/pickups/pickups.h"
        "game/pickups/quests.h"
        "game/pickups/shops/general.h"
        "ghosts/plugins/update_active_animations_plugin.h"
        "ghosts/plugins.h"
        "ghosts.h"
        "input/controller_bindings.h"
        "input/helpers.h"
        "input/rando_bindings.h"
        "interop/csharp_bridge.h"
        "ipc/base_handlers.h"
        "macros.h"
        "multiplayer.h"
        "pickups/pickup.h"
        "pickups/pickup_collection.h"
        "seed_parser/parser.h"
        "timer.h"
        "uber_states/uber_state_helper.h"
)

set(
        MISC_FILES
        ".editorconfig"
        "CMakeLists.txt"
)

# Download antlr generator jar automatically.
if(NOT EXISTS "${CMAKE_BINARY_DIR}/antlr-4.10.1-complete.jar")
   message(STATUS "Downloading antlr-4.10.1-complete.jar from https://www.antlr.org/download/antlr-4.10.1-complete.jar")
   file(DOWNLOAD "https://www.antlr.org/download/antlr-4.10.1-complete.jar"
                 "${CMAKE_BINARY_DIR}/antlr-4.10.1-complete.jar")
endif()

set(ANTLR4_JAR_LOCATION ${CMAKE_BINARY_DIR}/antlr-4.10.1-complete.jar)

find_package(antlr4-runtime REQUIRED)
# find_path(ANTLR_FIND NAMES FindANTLR.cmake PATHS ${CONAN_INCLUDE_DIRS_antlr4-cppruntime})
# message(INFO "adding '${ANTLR_FIND}'")
# list(APPEND CMAKE_MODULE_PATH "${ANTLR_FIND}")
# find_package(ANTLR REQUIRED)
# 
# antlr_target(SeedLexer ${CMAKE_CURRENT_SOURCE_DIR}randomizer/seed_parser/SeedLexer.g4 LEXER
#              PACKAGE seed_generator)
# 
# antlr_target(SeedParser ${CMAKE_CURRENT_SOURCE_DIR}randomizer/seed_parser/SeedParser.g4 PARSER
#              PACKAGE seed_generator
#              DEPENDS_ANTLR SeedLexer
#              COMPILE_FLAGS -lib ${ANTLR_SeedLexer_OUTPUT_DIR})

add_library(
        ${PROJECT_NAME}
        SHARED
        ${SOURCE_FILES}
        ${PUBLIC_HEADER_FILES}
        ${MISC_FILES}
        ${ANTLR_SeedLexer_CXX_OUTPUTS}
        ${ANTLR_SeedParser_CXX_OUTPUTS}
)

target_compile_definitions(
        ${PROJECT_NAME}
        PRIVATE COMPILING_RANDOMIZER
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
        ${ANTLR_SeedLexer_OUTPUT_DIR}
        ${ANTLR_SeedParser_OUTPUT_DIR}
)

target_link_libraries(
        ${PROJECT_NAME}
        Common
        Modloader
        Core
        antlr4-cppruntime::antlr4-cppruntime
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
        ${PROJECT_BINARY_DIR}/CMakeFiles/Randomizer.dir/Debug/cmake_pch.hxx
        ${PROJECT_BINARY_DIR}/CMakeFiles/Randomizer.dir/MinSizeRel/cmake_pch.hxx
        ${PROJECT_BINARY_DIR}/CMakeFiles/Randomizer.dir/RelWithDebInfo/cmake_pch.hxx
        ${PROJECT_BINARY_DIR}/CMakeFiles/Randomizer.dir/Release/cmake_pch.hxx
        ${PROJECT_BINARY_DIR}/CMakeFiles/Randomizer.dir/cmake_pch.cxx
)

install(
        TARGETS ${PROJECT_NAME}
        RUNTIME DESTINATION "${WOTWR_INSTALL_DIR}"
        LIBRARY DESTINATION "${WOTWR_INSTALL_DIR}"
        ARCHIVE DESTINATION "${WOTWR_INSTALL_DIR}"
)
