#include <settings.h>
#include <Core/macros.h>
#include <Common/settings_reader.h>

#include <Modloader/common.h>
#include <INIReader.h>
#include <memory>

namespace core::settings {
    namespace {
        std::unique_ptr<INIReader> reader = nullptr;

        INIReader& get_settings() {
            if (reader == nullptr) {
                reader = read_utf16_ini(modloader::base_path + "settings.ini");
            }

            return *reader;
        }
    } // namespace

    void reload() {
        reader = nullptr;
        get_settings();
    }

    bool burrow_mouse_control() {
        return get_settings().GetBoolean("Flags", "BurrowMouseControl", false);
    }
    bool grapple_mouse_control() {
        return get_settings().GetBoolean("Flags", "GrappleMouseControl", false);
    }
    bool water_dash_mouse_control() {
        return get_settings().GetBoolean("Flags", "WaterDashMouseControl", false);
    }
    bool invert_swim() {
        return get_settings().GetBoolean("Flags", "InvertSwim", false);
    }

    bool autoaim() {
        return !get_settings().GetBoolean("Flags", "DisableAutoaim", false);
    }
    bool show_secrets() {
        return !get_settings().GetBoolean("Flags", "DisableShowSecrets", false);
    }

    float map_icon_transparency() {
        return get_settings().GetReal("Values", "MapIconTransparency", 0.f);
    }

    float camera_shake_intensity() {
        return get_settings().GetReal("Values", "CameraShakeIntensity", 1.f);
    }

    bool shriek_is_shrek() {
        return get_settings().GetBoolean("Flags", "ShriekIsShrek", false);
    }
} // namespace core::settings
