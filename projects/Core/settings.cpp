#include <Core/settings.h>

#include <Common/settings.h>
#include <Modloader/modloader.h>
#include <nlohmann/json.hpp>

namespace core::settings {
    common::settings::Settings& get_settings() {
        static std::unique_ptr<common::settings::Settings> settings;

        if (settings == nullptr) {
            settings = std::make_unique<common::settings::Settings>(modloader::base_path() / "settings.json");
        }

        return *settings;
    }

    void reload() {
        get_settings().reload();
    }

    bool dev_mode() {
        return get_settings().get_boolean("Flags", "Dev", false);
    }

    bool cursor_locked() {
        return get_settings().get_boolean("Flags", "CursorLock", false);
    }

    bool start_debug_enabled() {
        return !get_settings().get_boolean("Flags", "DisableDebugControls", true);
    }

    bool netcode_disabled() {
        return get_settings().get_boolean("Flags", "DisableNetcode", false);
    }

    bool insecure() {
        return get_settings().get_boolean("Flags", "Insecure", false);
    }

    std::string host() {
        return get_settings().get_string("Paths", "Host", "wotw.orirando.com");
    }

    int udp_port() {
        return get_settings().get_int("Paths", "UdpPort", 31415);
    }

    bool use_default_currency_name() {
        return get_settings().get_boolean("Flags", "BoringMoney", false);
    }

    bool start_in_logic_filter() {
        return get_settings().get_boolean("Flags", "SelectInLogicFilterByDefault", true);
    }

    bool hide_quest_filter() {
        return get_settings().get_boolean("Flags", "HideQuestFilter", false);
    }

    bool hide_warp_filter() {
        return get_settings().get_boolean("Flags", "HideWarpFilter", false);
    }

    bool hide_collectible_filter() {
        return get_settings().get_boolean("Flags", "HideCollectableFilter", false);
    }

    bool burrow_mouse_control() {
        return get_settings().get_boolean("Flags", "BurrowMouseControl", false);
    }

    bool grapple_mouse_control() {
        return get_settings().get_boolean("Flags", "GrappleMouseControl", false);
    }

    bool water_dash_mouse_control() {
        return get_settings().get_boolean("Flags", "WaterDashMouseControl", false);
    }

    bool invert_swim() {
        return get_settings().get_boolean("Flags", "InvertSwim", false);
    }

    bool autoaim() {
        return !get_settings().get_boolean("Flags", "DisableAutoaim", false);
    }

    bool show_secrets() {
        return !get_settings().get_boolean("Flags", "DisableShowSecrets", false);
    }

    bool always_show_warps() {
        return get_settings().get_boolean("Flags", "AlwaysShowWarps", false);
    }

    bool always_show_keystone_doors() {
        return get_settings().get_boolean("Flags", "AlwaysShowKeystoneDoors", false);
    }

    bool always_show_keystones() {
        return get_settings().get_boolean("Flags", "AlwaysShowKeystones", false);
    }

    bool world_map_enabled() {
        return get_settings().get_boolean("Flags", "WorldMapEnabled", true);
    }

    float map_icon_transparency() {
        return get_settings().get_float("Values", "MapIconTransparency", 0.f);
    }

    float camera_shake_intensity() {
        return get_settings().get_float("Values", "CameraShakeIntensity", 1.f);
    }

    bool shriek_is_shrek() {
        return get_settings().get_boolean("Flags", "ShriekIsShrek", false);
    }

    std::string ori_model_texture() {
        return get_settings().get_string("Paths", "OriModelTexture", "");
    }

    std::string ori_model_emissivity_mask_texture() {
        return get_settings().get_string("Paths", "OriModelEmissivityMaskTexture", "");
    }

    // Set overrides

    void dev_mode(bool value) {
        get_settings().overrides()[common::settings::key_t{"Flags", "Dev"}] = value;
    }

    void cursor_locked(bool value) {
        get_settings().overrides()[common::settings::key_t{"Flags", "CursorLock"}] = value;
    }

    void netcode_disabled(bool value) {
        get_settings().overrides()[common::settings::key_t{"Flags", "DisableNetcode"}] = value;
    }

    void insecure(bool value) {
        get_settings().overrides()[common::settings::key_t{"Flags", "Insecure"}] = value;
    }

    void host(std::string value) {
        get_settings().overrides()[common::settings::key_t{"Paths", "Host"}] = value;
    }

    void udp_port(int value) {
        get_settings().overrides()[common::settings::key_t{"Paths", "UdpPort"}] = value;
    }

    void start_in_logic_filter(bool value) {
        get_settings().overrides()[common::settings::key_t{"Flags", "SelectInLogicFilterByDefault"}] = value;
    }

    void hide_quest_filter(bool value) {
        get_settings().overrides()[common::settings::key_t{"Flags", "HideQuestFilter"}] = value;
    }

    void hide_warp_filter(bool value) {
        get_settings().overrides()[common::settings::key_t{"Flags", "HideWarpFilter"}] = value;
    }

    void hide_collectible_filter(bool value) {
        get_settings().overrides()[common::settings::key_t{"Flags", "HideCollectableFilter"}] = value;
    }

    void burrow_mouse_control(bool value) {
        get_settings().overrides()[common::settings::key_t{"Flags", "BurrowMouseControl"}] = value;
    }

    void grapple_mouse_control(bool value) {
        get_settings().overrides()[common::settings::key_t{"Flags", "GrappleMouseControl"}] = value;
    }

    void water_dash_mouse_control(bool value) {
        get_settings().overrides()[common::settings::key_t{"Flags", "WaterDashMouseControl"}] = value;
    }

    void invert_swim(bool value) {
        get_settings().overrides()[common::settings::key_t{"Flags", "InvertSwim"}] = value;
    }

    void autoaim(bool value) {
        get_settings().overrides()[common::settings::key_t{"Flags", "DisableAutoaim"}] = value;
    }

    void show_secrets(bool value) {
        get_settings().overrides()[common::settings::key_t{"Flags", "DisableShowSecrets"}] = !value;
    }

    void always_show_warps(bool value) {
        get_settings().overrides()[common::settings::key_t{"Flags", "AlwaysShowWarps"}] = value;
    }

    void always_show_keystone_doors(bool value) {
        get_settings().overrides()[common::settings::key_t{"Flags", "AlwaysShowKeystoneDoors"}] = value;
    }

    void always_show_keystones(bool value) {
        get_settings().overrides()[common::settings::key_t{"Flags", "AlwaysShowKeystones"}] = value;
    }

    void world_map_enabled(bool value) {
        get_settings().overrides()[common::settings::key_t{"Flags", "WorldMapEnabled"}] = value;
    }

    void map_icon_transparency(float value) {
        get_settings().overrides()[common::settings::key_t{"Flags", "MapIconTransparency"}] = value;
    }

    void camera_shake_intensity(float value) {
        get_settings().overrides()[common::settings::key_t{"Flags", "CameraShakeIntensity"}] = value;
    }

    void shriek_is_shrek(bool value) {
        get_settings().overrides()[common::settings::key_t{"Flags", "ShriekIsShrek"}] = value;
    }
} // namespace core::settings
