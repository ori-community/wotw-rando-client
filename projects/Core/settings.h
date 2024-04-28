#pragma once

#include <Core/macros.h>
#include <string>

namespace core::settings {
    CORE_DLLEXPORT void reload();
    CORE_DLLEXPORT bool dev_mode();
    CORE_DLLEXPORT bool cursor_locked();
    CORE_DLLEXPORT bool start_debug_enabled();
    CORE_DLLEXPORT bool insecure();
    CORE_DLLEXPORT std::string host();
    CORE_DLLEXPORT int udp_port();
    CORE_DLLEXPORT bool use_default_currency_name();
    CORE_DLLEXPORT bool start_in_logic_filter();
    CORE_DLLEXPORT bool hide_quest_filter();
    CORE_DLLEXPORT bool hide_warp_filter();
    CORE_DLLEXPORT bool hide_collectible_filter();
    CORE_DLLEXPORT bool burrow_mouse_control();
    CORE_DLLEXPORT bool hybrid_mouse_control();
    CORE_DLLEXPORT bool grapple_mouse_control();
    CORE_DLLEXPORT bool water_dash_mouse_control();
    CORE_DLLEXPORT bool invert_swim();
    CORE_DLLEXPORT bool autoaim();
    CORE_DLLEXPORT bool show_secrets();
    CORE_DLLEXPORT bool always_show_warps();
    CORE_DLLEXPORT bool always_show_keystone_doors();
    CORE_DLLEXPORT bool always_show_keystones();
    CORE_DLLEXPORT bool world_map_enabled();
    CORE_DLLEXPORT float map_icon_transparency();
    CORE_DLLEXPORT float camera_shake_intensity();
    CORE_DLLEXPORT bool shriek_is_shrek();
    CORE_DLLEXPORT bool enable_minimap();
    CORE_DLLEXPORT std::string ori_model_texture();
    CORE_DLLEXPORT std::string ori_model_emissivity_mask_texture();

    // Set overrides.
    CORE_DLLEXPORT void dev_mode(bool value);
    CORE_DLLEXPORT void cursor_locked(bool value);
    CORE_DLLEXPORT void netcode_disabled(bool value);
    CORE_DLLEXPORT void insecure(bool value);
    CORE_DLLEXPORT void host(std::string value);
    CORE_DLLEXPORT void udp_port(int value);
    CORE_DLLEXPORT void start_in_logic_filter(bool value);
    CORE_DLLEXPORT void hide_quest_filter(bool value);
    CORE_DLLEXPORT void hide_warp_filter(bool value);
    CORE_DLLEXPORT void hide_collectible_filter(bool value);
    CORE_DLLEXPORT void burrow_mouse_control(bool value);
    CORE_DLLEXPORT void hybrid_mouse_control(bool value);
    CORE_DLLEXPORT void grapple_mouse_control(bool value);
    CORE_DLLEXPORT void water_dash_mouse_control(bool value);
    CORE_DLLEXPORT void invert_swim(bool value);
    CORE_DLLEXPORT void autoaim(bool value);
    CORE_DLLEXPORT void show_secrets(bool value);
    CORE_DLLEXPORT void always_show_warps(bool value);
    CORE_DLLEXPORT void always_show_keystone_doors(bool value);
    CORE_DLLEXPORT void always_show_keystones(bool value);
    CORE_DLLEXPORT void world_map_enabled(bool value);
    CORE_DLLEXPORT void map_icon_transparency(float value);
    CORE_DLLEXPORT void camera_shake_intensity(float value);
    CORE_DLLEXPORT void shriek_is_shrek(bool value);
    CORE_DLLEXPORT void enable_minimap(bool value);
} // namespace core::settings
