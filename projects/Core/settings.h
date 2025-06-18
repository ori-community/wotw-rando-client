#pragma once

#include <Core/macros.h>
#include <string>

namespace core::settings {
    CORE_DLLEXPORT void reload();
    CORE_DLLEXPORT bool developer_mode();
    CORE_DLLEXPORT bool lock_cursor();
    CORE_DLLEXPORT bool debug_controls();
    CORE_DLLEXPORT bool server_tls();
    CORE_DLLEXPORT std::string server_host();
    CORE_DLLEXPORT bool funny_money();
    CORE_DLLEXPORT bool select_in_logic_filter_by_default();
    CORE_DLLEXPORT bool hide_quest_filter();
    CORE_DLLEXPORT bool hide_warp_filter();
    CORE_DLLEXPORT bool hide_collectible_filter();
    CORE_DLLEXPORT bool burrow_mouse_control();
    CORE_DLLEXPORT bool hybrid_mouse_control();
    CORE_DLLEXPORT bool grapple_mouse_control();
    CORE_DLLEXPORT bool water_dash_mouse_control();
    CORE_DLLEXPORT bool invert_fast_swim();
    CORE_DLLEXPORT bool disable_auto_aim();
    CORE_DLLEXPORT bool show_all_secrets();
    CORE_DLLEXPORT bool always_show_warps();
    CORE_DLLEXPORT bool always_show_keystone_doors();
    CORE_DLLEXPORT bool always_show_keystones();
    CORE_DLLEXPORT bool enable_world_map();
    CORE_DLLEXPORT bool enable_native_controller_support();
    CORE_DLLEXPORT float map_icon_transparency();
    CORE_DLLEXPORT float camera_shake_intensity();
    CORE_DLLEXPORT float map_pan_speed();
    CORE_DLLEXPORT bool shriek_is_shrek();
    CORE_DLLEXPORT bool enable_minimap();
    CORE_DLLEXPORT std::string ori_model_texture();
    CORE_DLLEXPORT std::string ori_model_emissivity_mask_texture();
    CORE_DLLEXPORT std::string seedgen_daemon_arguments();

    // Set overrides.
    CORE_DLLEXPORT void developer_mode(bool value);
    CORE_DLLEXPORT void lock_cursor(bool value);
    CORE_DLLEXPORT void server_tls(bool value);
    CORE_DLLEXPORT void server_host(std::string value);
    CORE_DLLEXPORT void select_in_logic_filter_by_default(bool value);
    CORE_DLLEXPORT void hide_quest_filter(bool value);
    CORE_DLLEXPORT void hide_warp_filter(bool value);
    CORE_DLLEXPORT void hide_collectible_filter(bool value);
    CORE_DLLEXPORT void burrow_mouse_control(bool value);
    CORE_DLLEXPORT void hybrid_mouse_control(bool value);
    CORE_DLLEXPORT void grapple_mouse_control(bool value);
    CORE_DLLEXPORT void water_dash_mouse_control(bool value);
    CORE_DLLEXPORT void invert_fast_swim(bool value);
    CORE_DLLEXPORT void disable_auto_aim(bool value);
    CORE_DLLEXPORT void show_all_secrets(bool value);
    CORE_DLLEXPORT void always_show_warps(bool value);
    CORE_DLLEXPORT void always_show_keystone_doors(bool value);
    CORE_DLLEXPORT void always_show_keystones(bool value);
    CORE_DLLEXPORT void enable_world_map(bool value);
    CORE_DLLEXPORT void map_icon_transparency(float value);
    CORE_DLLEXPORT void camera_shake_intensity(float value);
    CORE_DLLEXPORT void shriek_is_shrek(bool value);
    CORE_DLLEXPORT void enable_minimap(bool value);
} // namespace core::settings
