#include <Randomizer/input/helpers.h>

#include <Common/ext.h>

#include <Modloader/modloader.h>

#include <fstream>
#include <magic_enum/magic_enum.hpp>
#include <nlohmann/json.hpp>
#include <string>

using namespace modloader;


namespace randomizer::input {
    namespace {
        std::vector<int> handle_keys_or_notes(std::filesystem::path const& path, std::string const& name, const nlohmann::json& keys) {
            std::vector<int> keys_or_notes;
            if (!keys.is_array()) {
                warn("input", std::format("failed to parse '{}' entry {} keys/notes not an array, skipping.", path.string(), name));
                return {};
            }

            for (auto const& key: keys) {
                if (!key.is_number_integer()) {
                    warn("input", std::format("failed to parse '{}' entry {} key/note not an integer, skipping.", path.string(), name));
                    return {};
                }

                keys_or_notes.push_back(key.get<int>());
            }

            return keys_or_notes;
        }
    } // namespace

    bool read_keyboard_or_controller_bindings(std::filesystem::path const& path, handle_keyboard_or_controller_binding_callback callback) {
        std::ifstream file(path);

        if (!file.is_open()) {
            warn("input", std::format("failed to open '{}'", path.string()));
            return false;
        }

        nlohmann::json j;
        try {
            file >> j;
        } catch (nlohmann::json::parse_error& ex) {
            warn("input", std::format("failed to parse '{}' error '{}' at byte '{}'", path.string(), ex.id, ex.byte));
            return false;
        }

        if (!j.is_object()) {
            warn("input", std::format("failed to parse '{}' top most object not an object", path.string()));
            return false;
        }

        for (auto const& entry: j.items()) {
            auto const& name = entry.key();
            auto action = magic_enum::enum_cast<Action>(entry.key());
            if (!action.has_value()) {
                warn("input", std::format("failed to parse '{}' entry {} not valid action, skipping.", path.string(), name));
                continue;
            }

            if (!entry.value().is_array()) {
                warn("input", std::format("failed to parse '{}' entry {} not an array, skipping.", path.string(), name));
                continue;
            }

            for (auto const& bind: entry.value()) {
                bool does_respect_modifiers = false;
                std::vector<int> buttons;
                if (bind.is_array()) {
                    buttons = handle_keys_or_notes(path, name, bind);
                } else if (bind.is_object()) {
                    auto keys = bind.find("keys");
                    if (keys == bind.end()) {
                        warn("input", std::format("failed to parse '{}' entry 'keys' doesn't exist on action {}, skipping.", path.string(), name));
                        continue;
                    }

                    auto respects_modifiers = bind.find("respects_modifiers");
                    if (respects_modifiers != bind.end() && !respects_modifiers->is_boolean()) {
                        warn("input", std::format("failed to parse '{}' entry {} respects_modifiers not a bool, skipping.", path.string(), name));
                        continue;
                    }

                    does_respect_modifiers = respects_modifiers != bind.end() && respects_modifiers->get<bool>();
                    buttons = handle_keys_or_notes(path, name, keys.value());
                } else {
                    warn("input", std::format("failed to parse '{}' entry {} bind not an object or an array, skipping.", path.string(), name));
                }

                if (!buttons.empty()) {
                    callback(action.value(), buttons, does_respect_modifiers);
                }
            }
        }

        return true;
    }

    bool read_midi_bindings(std::filesystem::path const& path, handle_midi_binding_callback callback) {
        std::ifstream file(path);

        if (!file.is_open()) {
            warn("input", std::format("failed to open '{}'", path.string()));
            return false;
        }

        nlohmann::json j;
        try {
            file >> j;
        } catch (nlohmann::json::parse_error& ex) {
            warn("input", std::format("failed to parse '{}' error '{}' at byte '{}'", path.string(), ex.id, ex.byte));
            return false;
        }

        if (!j.is_object()) {
            warn("input", std::format("failed to parse '{}' top most object not an object", path.string()));
            return false;
        }

        for (auto const& entry: j.items()) {
            auto const& name = entry.key();
            auto action = magic_enum::enum_cast<Action>(entry.key());
            if (!action.has_value()) {
                warn("input", std::format("failed to parse '{}' entry {} not valid action, skipping.", path.string(), name));
                continue;
            }

            if (!entry.value().is_array()) {
                warn("input", std::format("failed to parse '{}' entry {} not an array, skipping.", path.string(), name));
                continue;
            }

            for (auto const& bind: entry.value()) {
                std::vector<int> notes;
                if (bind.is_array()) {
                    notes = handle_keys_or_notes(path, name, bind);
                } else if (bind.is_object()) {
                    auto keys = bind.find("notes");
                    if (keys == bind.end()) {
                        warn("input", std::format("failed to parse '{}' entry 'notes' doesn't exist on {} action, skipping.", path.string(), name));
                        continue;
                    }

                    notes = handle_keys_or_notes(path, name, keys.value());
                } else {
                    warn("input", std::format("failed to parse '{}' entry {} bind not an object or an array, skipping.", path.string(), name));
                }

                if (!notes.empty()) {
                    callback(action.value(), notes);
                }
            }
        }

        return true;
    }
} // namespace randomizer::input
