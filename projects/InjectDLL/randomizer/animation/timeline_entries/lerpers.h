#pragma once

#include <randomizer/animation/timeline_entries/base.h>

namespace randomizer
{
    namespace timeline_entries
    {
        struct LerpPosition : Target
        {
            app::Vector3 start;
            app::Vector3 end;
            float duration;

            virtual void parse(nlohmann::json const& j) override;
            virtual bool update_state(TimelineState& state, float dt) override;
        };
    }
}
