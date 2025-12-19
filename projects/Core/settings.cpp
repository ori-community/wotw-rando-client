#include <Core/settings.h>

#include <Common/settings.h>
#include <Modloader/modloader.h>
#include <Modloader/fs.h>
#include <nlohmann/json.hpp>

namespace core::settings {
    common::settings::Settings& get_settings() {
        static std::unique_ptr<common::settings::Settings> settings;

        if (settings == nullptr) {
            settings = std::make_unique<common::settings::Settings>(modloader::fs::get_randomizer_user_data_path("settings.json"));
        }

        return *settings;
    }

    common::TimedEventBus<void, SettingsEvent>& event_bus() {
        static common::TimedEventBus<void, SettingsEvent> value;
        return value;
    }

    void reload() {
        event_bus().trigger_event(SettingsEvent::Load, EventTiming::Before);
        get_settings().reload();
        event_bus().trigger_event(SettingsEvent::Load, EventTiming::After);
    }

    bool developer_mode() {
        return get_settings().get_boolean("DeveloperMode", false);
    }

    bool lock_cursor() {
        return get_settings().get_boolean("LockCursor", false);
    }

    bool debug_controls() {
        return get_settings().get_boolean("DebugControls", true);
    }

    bool server_tls() {
        return get_settings().get_boolean("ServerTLS", true);
    }

    std::string server_host() {
        return get_settings().get_string("ServerHost", "wotw.orirando.com");
    }

    bool funny_money() {
        return get_settings().get_boolean("FunnyMoney", false);
    }

    bool hide_quest_filter() {
        return get_settings().get_boolean("HideQuestFilter", false);
    }

    bool hide_warp_filter() {
        return get_settings().get_boolean("HideWarpFilter", false);
    }

    bool hide_collectible_filter() {
        return get_settings().get_boolean("HideCollectableFilter", false);
    }

    bool burrow_mouse_control() {
        return get_settings().get_boolean("BurrowMouseControl", false);
    }

    bool hybrid_mouse_control() {
        return get_settings().get_boolean("HybridMouseControl", false);
    }

    bool grapple_mouse_control() {
        return get_settings().get_boolean("GrappleMouseControl", false);
    }

    bool water_dash_mouse_control() {
        return get_settings().get_boolean("WaterDashMouseControl", false);
    }

    bool invert_fast_swim() {
        return get_settings().get_boolean("InvertFastSwim", false);
    }

    bool disable_auto_aim() {
        return get_settings().get_boolean("DisableAutoAim", false);
    }

    bool show_all_secrets() {
        return get_settings().get_boolean("ShowAllSecrets", true);
    }

    bool always_show_warps() {
        return get_settings().get_boolean("AlwaysShowWarps", true);
    }

    bool always_show_keystone_doors() {
        return get_settings().get_boolean("AlwaysShowKeystoneDoors", true);
    }

    bool always_show_keystones() {
        return get_settings().get_boolean("AlwaysShowKeystones", true);
    }

    bool enable_world_map() {
        return get_settings().get_boolean("EnableWorldMap", false);
    }

    bool enable_native_controller_support() {
        return get_settings().get_boolean("EnableNativeControllerSupport", true);
    }

    bool show_transparent_out_of_logic_icons() {
        return get_settings().get_boolean("ShowTransparentOutOfLogicIcons", true);
    }

    float camera_shake_intensity() {
        return get_settings().get_float("CameraShakeIntensity", 1.f);
    }

    float map_pan_speed() {
        return get_settings().get_float("MapPanSpeed", 1.f);
    }

    bool shriek_is_shrek() {
        return get_settings().get_boolean("ShriekIsShrek", false);
    }

    bool enable_minimap() {
        return get_settings().get_boolean("EnableMinimap", false);
    }

    std::string ori_model_texture() {
        return get_settings().get_string("OriModelTexture", "");
    }

    std::string ori_model_emissivity_mask_texture() { return get_settings().get_string("OriModelEmissivityMaskTexture", ""); }

    std::string seedgen_daemon_arguments() {
        return get_settings().get_string("SeedgenDaemonArguments", "");
    }

    // Set overrides

    void developer_mode(bool value) {
        get_settings().overrides()["DeveloperMode"] = value;
    }

    void lock_cursor(bool value) {
        get_settings().overrides()["LockCursor"] = value;
    }

    void server_tls(bool value) {
        get_settings().overrides()["ServerTLS"] = value;
    }

    void server_host(std::string value) {
        get_settings().overrides()["ServerHost"] = value;
    }

    void hide_quest_filter(bool value) {
        get_settings().overrides()["HideQuestFilter"] = value;
    }

    void hide_warp_filter(bool value) {
        get_settings().overrides()["HideWarpFilter"] = value;
    }

    void hide_collectible_filter(bool value) {
        get_settings().overrides()["HideCollectableFilter"] = value;
    }

    void burrow_mouse_control(bool value) {
        get_settings().overrides()["BurrowMouseControl"] = value;
    }

    void grapple_mouse_control(bool value) {
        get_settings().overrides()["GrappleMouseControl"] = value;
    }

    void water_dash_mouse_control(bool value) {
        get_settings().overrides()["WaterDashMouseControl"] = value;
    }

    void hybrid_mouse_control(bool value) {
        get_settings().overrides()["HybridMouseControl"] = value;
    }

    void invert_fast_swim(bool value) {
        get_settings().overrides()["InvertFastSwim"] = value;
    }

    void disable_auto_aim(bool value) {
        get_settings().overrides()["DisableAutoAim"] = value;
    }

    void show_all_secrets(bool value) {
        get_settings().overrides()["ShowAllSecrets"] = value;
    }

    void always_show_warps(bool value) {
        get_settings().overrides()["AlwaysShowWarps"] = value;
    }

    void always_show_keystone_doors(bool value) {
        get_settings().overrides()["AlwaysShowKeystoneDoors"] = value;
    }

    void always_show_keystones(bool value) {
        get_settings().overrides()["AlwaysShowKeystones"] = value;
    }

    void enable_world_map(bool value) {
        get_settings().overrides()["EnableWorldMap"] = value;
    }

    void show_transparent_out_of_logic_icons(bool value) {
        get_settings().overrides()["ShowTransparentOutOfLogicIcons"] = value;
    }

    void camera_shake_intensity(float value) {
        get_settings().overrides()["CameraShakeIntensity"] = value;
    }

    void shriek_is_shrek(bool value) {
        get_settings().overrides()["ShriekIsShrek"] = value;
    }

    void enable_minimap(bool value) {
        get_settings().overrides()["EnableMinimap"] = value;
    }
} // namespace core::settings
