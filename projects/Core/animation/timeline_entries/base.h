#pragma once

#include <Core/enums/timeline_entries.h>
#include <animation/timeline_state.h>
#include <Core/utils/json_serializers.h>
#include <nlohmann/json.hpp>
#include <Core/macros.h>

namespace core::animation {
    struct TimelineState;

    namespace timeline_entries {
        template <typename T>
        struct VariableDeclaration {
            VariableDeclaration() :
                    name(""), is_settable(false) {}

            VariableDeclaration(T value) :
                    name(""), default_value(value), is_settable(false) {}

            VariableDeclaration(std::string name, T default_value) :
                    name(name), default_value(default_value), is_settable(true) {}

            std::string name;
            T default_value;
            bool is_settable;

            T operator()(TimelineState const& state) const {
                if (!is_settable)
                    return default_value;

                auto it = state.variable_values.find(name);
                if (it != state.variable_values.end() && it->second.value.has_value() && std::holds_alternative<T>(it->second.value.value()))
                    return std::get<T>(it->second.value.value());

                return default_value;
            }
        };

        template <typename T>
        T value(TimelineState const& state, VariableDeclaration<T> const& value) {
            return value(state);
        }

        template <typename T>
        VariableDeclaration<T> create_variable(TimelineState& state, nlohmann::json const& j, std::string entry_name, T default_value) {
            if (j.contains(entry_name)) {
                auto const& entry = j.at(entry_name);
                if (entry.is_object() && entry.contains("variable")) {
                    auto name = entry.at("variable").get<std::string>();
                    default_value = entry.value("value", default_value);
                    return VariableDeclaration<T>(name, default_value);
                } else
                    default_value = j.value(entry_name, default_value);
            }

            return VariableDeclaration<T>(default_value);
        }

        struct CORE_DLLEXPORT Base {
            int id;
            float start_time;
            TimelineEntryType type;

            // Return value is true if this entry has finished its work.
            virtual bool update_state(TimelineState& state, float dt) = 0;
            virtual void parse(TimelineState& state, nlohmann::json const& j);
        };

        struct CORE_DLLEXPORT Target : Base {
            TimelineObjectType target_type;

            virtual void parse(TimelineState& state, nlohmann::json const& j) override;
        };

        CORE_DLLEXPORT app::GameObject* get_target(TimelineState const& state, TimelineObjectType target_type, int id);
    } // namespace timeline_entries
} // namespace core::animation
