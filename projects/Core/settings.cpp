#include <macros.h>
#include <settings.h>

#include <Common/settings_reader.h>

#include <Modloader/modloader.h>

#include <INIReader.h>
#include <memory>
#include <variant>

namespace core::settings {
    namespace {
        std::unique_ptr<INIReader> reader = nullptr;

        using key = std::pair<std::string, std::string>;
        using values = std::variant<bool, int, float, std::string>;
        std::unordered_map<key, values, pair_hash> overrides;

        INIReader& get_settings() {
            if (reader == nullptr) {
                reader = read_utf16_ini((modloader::base_path / "settings.ini").string());
            }

            return *reader;
        }

        bool get_boolean(std::string_view section, std::string_view name, bool default_value) {
            const auto it = overrides.find(key{ section, name });
            return it == overrides.end()
                ? get_settings().GetBoolean(section.data(), name.data(), default_value)
                : std::get<bool>(it->second);
        }

        int get_int(std::string_view section, std::string_view name, int default_value) {
            const auto it = overrides.find(key{ section, name });
            return it == overrides.end()
                ? get_settings().GetInteger(section.data(), name.data(), default_value)
                : std::get<int>(it->second);
        }

        float get_float(std::string_view section, std::string_view name, float default_value) {
            const auto it = overrides.find(key{ section, name });
            return it == overrides.end()
                ? get_settings().GetReal(section.data(), name.data(), default_value)
                : std::get<float>(it->second);
        }

        std::string get_string(std::string_view section, std::string_view name, std::string const& default_value) {
            const auto it = overrides.find(key{ section, name });
            return it == overrides.end()
                ? get_settings().GetString(section.data(), name.data(), default_value)
                : std::get<std::string>(it->second);
        }
    } // namespace

    void reload() {
        reader = nullptr;
        get_settings();
    }

    bool dev_mode() {
        return get_boolean("Flags", "Dev", false);
    }

    bool cursor_locked() {
        return get_boolean("Flags", "CursorLock", false);
    }

    bool start_debug_enabled() {
        return !get_boolean("Flags", "DisableDebugControls", true);
    }

    bool netcode_disabled() {
        return get_boolean("Flags", "DisableNetcode", false);
    }

    bool insecure() {
        return get_boolean("Flags", "Insecure", false);
    }

    std::string host() {
        return get_string("Paths", "Host", "wotw.orirando.com");
    }

    int websocket_port() {
        return get_int("Paths", "WebsocketPort", insecure() ? 80 : 443);
    }

    int udp_port() {
        return get_int("Paths", "UdpPort", 31415);
    }

    bool use_default_currency_name() {
        return get_boolean("Flags", "BoringMoney", false);
    }

    bool start_in_logic_filter() {
        return get_boolean("Flags", "SelectInLogicFilterByDefault", true);
    }

    bool hide_quest_filter() {
        return get_boolean("Flags", "HideQuestFilter", false);
    }

    bool hide_warp_filter() {
        return get_boolean("Flags", "HideWarpFilter", false);
    }

    bool hide_collectible_filter() {
        return get_boolean("Flags", "HideCollectableFilter", false);
    }

    bool burrow_mouse_control() {
        return get_boolean("Flags", "BurrowMouseControl", false);
    }
    bool grapple_mouse_control() {
        return get_boolean("Flags", "GrappleMouseControl", false);
    }
    bool water_dash_mouse_control() {
        return get_boolean("Flags", "WaterDashMouseControl", false);
    }
    bool invert_swim() {
        return get_boolean("Flags", "InvertSwim", false);
    }

    bool autoaim() {
        return !get_boolean("Flags", "DisableAutoaim", false);
    }

    bool show_secrets() {
        return !get_boolean("Flags", "DisableShowSecrets", false);
    }

    bool always_show_warps() {
        return get_boolean("Flags", "AlwaysShowWarps", false);
    }

    bool always_show_keystone_doors() {
        return get_boolean("Flags", "AlwaysShowKeystoneDoors", false);
    }

    bool always_show_keystones() {
        return get_boolean("Flags", "AlwaysShowKeystones", false);
    }

    bool world_map_enabled() {
        return get_boolean("Flags", "WorldMapEnabled", true);
    }

    float map_icon_transparency() {
        return get_float("Values", "MapIconTransparency", 0.f);
    }

    float camera_shake_intensity() {
        return get_float("Values", "CameraShakeIntensity", 1.f);
    }

    bool shriek_is_shrek() {
        return get_boolean("Flags", "ShriekIsShrek", false);
    }

    std::string ori_model_texture() {
        return get_settings().GetString("Paths", "OriModelTexture", "");
    }

    std::string ori_model_emissivity_mask_texture() {
        return get_settings().GetString("Paths", "OriModelEmissivityMaskTexture", "");
    }

    // Set overrides

    void dev_mode(bool value) {
        overrides[key{ "Flags", "Dev" }] = value;
    }

    void cursor_locked(bool value) {
        overrides[key{ "Flags", "CursorLock" }] = value;
    }

    void netcode_disabled(bool value) {
        overrides[key{ "Flags", "DisableNetcode" }] = value;
    }

    void insecure(bool value) {
        overrides[key{ "Flags", "Insecure" }] = value;
    }

    void host(std::string value) {
        overrides[key{ "Paths", "Host" }] = value;
    }

    void websocket_port(int value) {
        overrides[key{ "Paths", "WebsocketPort" }] = value;
    }

    void udp_port(int value) {
        overrides[key{ "Paths", "UdpPort" }] = value;
    }

    void start_in_logic_filter(bool value) {
        overrides[key{ "Flags", "SelectInLogicFilterByDefault" }] = value;
    }

    void hide_quest_filter(bool value) {
        overrides[key{ "Flags", "HideQuestFilter" }] = value;
    }

    void hide_warp_filter(bool value) {
        overrides[key{ "Flags", "HideWarpFilter" }] = value;
    }

    void hide_collectible_filter(bool value) {
        overrides[key{ "Flags", "HideCollectableFilter" }] = value;
    }

    void burrow_mouse_control(bool value) {
        overrides[key{ "Flags", "BurrowMouseControl" }] = value;
    }

    void grapple_mouse_control(bool value) {
        overrides[key{ "Flags", "GrappleMouseControl" }] = value;
    }

    void water_dash_mouse_control(bool value) {
        overrides[key{ "Flags", "WaterDashMouseControl" }] = value;
    }

    void invert_swim(bool value) {
        overrides[key{ "Flags", "InvertSwim" }] = value;
    }

    void autoaim(bool value) {
        overrides[key{ "Flags", "DisableAutoaim" }] = value;
    }

    void show_secrets(bool value) {
        overrides[key{ "Flags", "DisableShowSecrets" }] = !value;
    }

    void always_show_warps(bool value) {
        overrides[key{ "Flags", "AlwaysShowWarps" }] = value;
    }

    void always_show_keystone_doors(bool value) {
        overrides[key{ "Flags", "AlwaysShowKeystoneDoors" }] = value;
    }

    void always_show_keystones(bool value) {
        overrides[key{ "Flags", "AlwaysShowKeystones" }] = value;
    }

    void world_map_enabled(bool value) {
        overrides[key{ "Flags", "WorldMapEnabled" }] = value;
    }

    void map_icon_transparency(float value) {
        overrides[key{ "Flags", "MapIconTransparency" }] = value;
    }

    void camera_shake_intensity(float value) {
        overrides[key{ "Flags", "CameraShakeIntensity" }] = value;
    }

    void shriek_is_shrek(bool value) {
        overrides[key{ "Flags", "ShriekIsShrek" }] = value;
    }
} // namespace core::settings
