#include <Common/settings.h>

#include <variant>
#include <fstream>

namespace common::settings {
    void Settings::reload() {
        std::ifstream settings_file(m_settings_path);
        if (settings_file.is_open()) {
            m_cached_settings = nlohmann::json::parse(settings_file);
        }
    }

    std::unordered_map<key_t, values_t, pair_hash>& Settings::overrides() {
        return m_overrides;
    }

    bool Settings::get_boolean(std::string_view section, std::string_view name, bool default_value) {
        const auto it = m_overrides.find(key_t{section, name});
        const nlohmann::json_pointer<std::string> path(std::format("/{}/{}", section, name));
        return it != m_overrides.end()
            ? std::get<bool>(it->second)
            : m_cached_settings.contains(path) && m_cached_settings.at(path).is_boolean()
            ? m_cached_settings.at(path).get<bool>()
            : default_value;
    }

    int Settings::get_int(std::string_view section, std::string_view name, int default_value) {
        const auto it = m_overrides.find(key_t{section, name});
        const nlohmann::json_pointer<std::string> path(std::format("/{}/{}", section, name));
        return it != m_overrides.end()
            ? std::get<int>(it->second)
            : m_cached_settings.contains(path) && m_cached_settings.at(path).is_number_integer()
            ? m_cached_settings.at(path).get<int>()
            : default_value;
    }

    float Settings::get_float(std::string_view section, std::string_view name, float default_value) {
        const auto it = m_overrides.find(key_t{section, name});
        const nlohmann::json_pointer<std::string> path(std::format("/{}/{}", section, name));
        return it != m_overrides.end()
            ? std::get<float>(it->second)
            : m_cached_settings.contains(path) && m_cached_settings.at(path).is_number_float()
            ? m_cached_settings.at(path).get<float>()
            : default_value;
    }

    std::string Settings::get_string(std::string_view section, std::string_view name, std::string const& default_value) {
        const auto it = m_overrides.find(key_t{section, name});
        const nlohmann::json_pointer<std::string> path(std::format("/{}/{}", section, name));
        return it != m_overrides.end()
            ? std::get<std::string>(it->second)
            : m_cached_settings.contains(path) && m_cached_settings.at(path).is_string()
            ? m_cached_settings.at(path).get<std::string>()
            : default_value;
    }
} // namespace core::settings
