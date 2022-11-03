#include <settings.h>
#include <Core/macros.h>

#include <Common/settings.h>
#include <Modloader/common.h>

namespace core::settings {
    namespace {
        class Settings {
        public:
            Settings(std::string_view path) {
                load(path);
            }

            void load(std::string_view from_path) {
                path = from_path;
                ini = create_randomizer_settings(path);
                load_settings_from_file(ini);
                loaded = true;
            }

            bool has_loaded() const { return loaded; }

            template <typename T>
            T value(std::string_view section, std::string_view entry, T default_value) {
                return check_option<T>(ini, section, entry, default_value);
            }

        private:
            IniSettings ini;
            std::string path;
            bool loaded = false;
        };

        Settings ini_settings(modloader::base_path);
    } // namespace

    bool burrow_mouse_control() {
        return ini_settings.value("Flags", "BurrowMouseControl", false);
    }
    bool grapple_mouse_control() {
        return ini_settings.value("Flags", "GrappleMouseControl", false);
    }
    bool water_dash_mouse_control() {
        return ini_settings.value("Flags", "WaterDashMouseControl", false);
    }
    bool invert_swim() {
        return ini_settings.value("Flags", "InvertSwim", false);
    }

    bool autoaim() {
        return !ini_settings.value("Flags", "DisableAutoaim", false);
    }
    bool show_secrets() {
        return !ini_settings.value("Flags", "DisableShowSecrets", false);
    }

    float map_icon_transparency() {
        return ini_settings.value("Values", "MapIconTransparency", 0.f);
    }
} // namespace core::settings
