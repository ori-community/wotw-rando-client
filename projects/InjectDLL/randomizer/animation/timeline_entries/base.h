#pragma once

#include <enums/timeline_entries.h>
#include <json/json.hpp>

namespace randomizer
{
    struct TimelineState;

    namespace timeline_entries
    {
        struct Base
        {
            int id;
            float start_time;
            TimelineEntryType type;

            // Return value is true if this entry has finished its work.
            virtual bool update_state(TimelineState& state, float dt) = 0;
            virtual void parse(nlohmann::json const& j);
        };

        struct Target : Base
        {
            TimelineObjectType target_type;

            virtual void parse(nlohmann::json const& j) override;
        };

        app::GameObject* get_target(TimelineState const& state, TimelineObjectType target_type, int id);
    }
}
