#pragma once

#include <randomizer/animation/timeline_entries/base.h>

namespace randomizer
{
    namespace timeline_entries
    {
        struct Position : Target
        {
            app::Vector3 position;

            virtual void parse(nlohmann::json const& j) override;
            virtual bool update_state(TimelineState& state, float dt) override;
        };

        struct Scale : Target
        {
            app::Vector3 scale;

            virtual void parse(nlohmann::json const& j) override;
            virtual bool update_state(TimelineState& state, float dt) override;
        };

        struct Rotation : Target
        {
            app::Vector3 rotation;

            virtual void parse(nlohmann::json const& j) override;
            virtual bool update_state(TimelineState& state, float dt) override;
        };
    }
}
