#pragma once

#include <enums/timeline_entries.h>
#include <utils/json_serializers.h>
#include <json/json.hpp>

namespace randomizer
{
    struct TimelineState;

    namespace timeline_entries
    {
        template<typename T>
        struct Variable
        {
            Variable()
                : name("")
                , is_variable(false)
            {}

            Variable(T value)
                : name("")
                , default_value(value)
                , is_variable(false)
            {}

            Variable(std::string name, T default_value)
                : name(name)
                , default_value(default_value)
                , is_variable(true)
            {}

            std::string name;
            T default_value;
            bool is_variable;

            T operator()(TimelineState const& state) const
            {
                if (!is_variable)
                    return default_value;

                auto it = state.variables.find(name);
                if (it != state.variables.end() && it->second.value.has_value() && std::holds_alternative<T>(it->second.value.value()))
                    return std::get<T>(it->second.value.value());

                return default_value;
            }
        };

        template<typename T>
        T value(TimelineState const& state, Variable<T> const& value)
        {
            return value(state);
        }

        template<typename T>
        Variable<T> create_variable(TimelineState& state, nlohmann::json const& j, std::string variable, T default_value)
        {
            if (j.contains(variable))
            {
                auto const& entry = j.at(variable);
                if (entry.is_object() && entry.contains("variable"))
                {
                    auto name = entry.at("variable").get<std::string>();
                    default_value = entry.value("value", default_value);
                    return Variable<T>(name, default_value);
                }
                else
                    default_value = j.value(variable, default_value);
            }

            return Variable<T>(default_value);
        }

        struct Base
        {
            int id;
            float start_time;
            TimelineEntryType type;

            // Return value is true if this entry has finished its work.
            virtual bool update_state(TimelineState& state, float dt) = 0;
            virtual void parse(TimelineState& state, nlohmann::json const& j);
        };

        struct Target : Base
        {
            TimelineObjectType target_type;

            virtual void parse(TimelineState& state, nlohmann::json const& j) override;
        };

        app::GameObject* get_target(TimelineState const& state, TimelineObjectType target_type, int id);
    }
}
