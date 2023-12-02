#pragma once

#include <Common/ext.h>
#include <string>
#include <filesystem>
#include <utility>
#include <variant>
#include <unordered_map>
#include <nlohmann/json.hpp>

namespace common::settings {
    using key_t = std::pair<std::string, std::string>;
    using values_t = std::variant<bool, int, float, std::string>;

    class Settings {
    public:
        explicit Settings(std::filesystem::path path) : m_settings_path(std::move(path)) {
            reload();
        }

        void reload();
        std::unordered_map<key_t, values_t, pair_hash>& overrides();
        bool get_boolean(std::string_view section, std::string_view name, bool default_value);
        int get_int(std::string_view section, std::string_view name, int default_value);
        float get_float(std::string_view section, std::string_view name, float default_value);
        std::string get_string(std::string_view section, std::string_view name, std::string const&default_value);

    private:
        nlohmann::json m_cached_settings;
        std::filesystem::path m_settings_path;
        std::unordered_map<key_t, values_t, pair_hash> m_overrides;
    };
} // namespace core::settings
