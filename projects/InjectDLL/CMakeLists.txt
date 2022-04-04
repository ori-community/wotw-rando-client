project("InjectDLL")
string(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPER)

message(STATUS "")
message(STATUS "Project ${PROJECT_NAME}:")

set(PROJECT_DIR ${WOTWR_PROJECTS_DIR}/${PROJECT_NAME})

set(
    SOURCE_FILES
    "csharp_bridge.cpp"
    "dll_main.cpp"
    "dev/object_visualizer.cpp"
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
    "fixes/blaze_environment.cpp"
    "fixes/dash.cpp"
    "fixes/deflector.cpp"
    "fixes/feedinggrounds.cpp"
    "fixes/flap.cpp"
    "fixes/instant_tp_activation.cpp"
    "fixes/teleporters.cpp"
    "fixes/trials.cpp"
    "input/controller_bindings.cpp"
    "input/helpers.cpp"
    "input/rando_bindings.cpp"
    "input/simulator.cpp"
    "pickups/pickups.cpp"
    "pickups/energy_cell.cpp"
    "pickups/experience.cpp"
    "pickups/health_cell.cpp"
    "pickups/keystone.cpp"
    "pickups/map_icons.cpp"
    "pickups/ore.cpp"
    "pickups/quests.cpp"
    "pickups/spirit_shard.cpp"
    "pickups/tree.cpp"
    "pickups/bonus/bow_attack_speed.cpp"
    "pickups/bonus/energy_cost_upgrades.cpp"
    "pickups/bonus/extra_ability_activations.cpp"
    "pickups/bonus/hammer_attack_speed.cpp"
    "pickups/bonus/spear_attack_speed.cpp"
    "pickups/bonus/sword_attack_speed.cpp"
    "pickups/bonus/velocity.cpp"
    "pickups/shops/general.cpp"
    "pickups/shops/lupo.cpp"
    "pickups/shops/grom.cpp"
    "pickups/shops/opher.cpp"
    "pickups/shops/tuley.cpp"
    "pickups/shops/twillen.cpp"
    "system/collision.cpp"
    "system/image_renderer.cpp"
    "system/ipc.cpp"
    "system/messages.cpp"
    "system/multiplayer.cpp"
    "system/save.cpp"
    "system/sound.cpp"
    "system/textures.cpp"
    "system/text_database.cpp"
    "system/timer.cpp"
    "uber_states/uber_state_dev.cpp"
    "uber_states/uber_state_manager.cpp"
    "uber_states/uber_state_helper.cpp"
    "uber_states/uber_state_virtual.cpp"
    "uber_states/state_applier.cpp"
    "utils/json_serializers.cpp"
    "utils/messaging.cpp"
    "utils/misc.cpp"
    "utils/position_converter.cpp"
    "utils/shaders.cpp"
    "utils/stb_image.cpp"
)

set(
    PUBLIC_HEADER_FILES
    "constants.h"
    "csharp_bridge.h"
    "dll_main.h"
    "enum_definitions.h"
    "macros.h"
    "dev/object_visualizer.h"
    "enums/layer.h"
    "features/chaos.h"
    "features/controls/ability_overrides.h"
    "features/controls/invert_swim.h"
    "features/controls/mouse_control.h"
    "features/scenes/create_objects.h"
    "features/scenes/scene_load.h"
    "features/trackers/death_listener.h"
    "input/controller_bindings.h"
    "input/helpers.h"
    "input/rando_bindings.h"
    "input/simulator.h"
    "input/enums/actions.h"
    "input/enums/buttons.h"
    "pickups/ore.h"
    "pickups/pickups.h"
    "pickups/shops/general.h"
    "system/collision.h"
    "system/ipc.h"
    "system/image_renderer.h"
    "system/messages.h"
    "system/multiplayer.h"
    "system/sound.h"
    "system/static_text_entries.h"
    "system/textures.h"
    "system/text_database.h"
    "system/timer.h"
    "uber_states/state_applier.h"
    "uber_states/uber_state_manager.h"
    "uber_states/uber_state_helper.h"
    "uber_states/uber_state_virtual.h"
    "utils/json_serializers.h"
    "utils/messaging.h"
    "utils/misc.h"
    "utils/position_converter.h"
    "utils/shaders.h"
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
    SYSTEM
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
