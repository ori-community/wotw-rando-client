#pragma once

#include <randomizer/animation/timeline_entries/base.h>

namespace randomizer
{
    namespace timeline_entries
    {
        struct Position : Target
        {
            app::Vector3 value;

            virtual void parse(nlohmann::json const& j) override;
            virtual bool update_state(TimelineState& state, float dt) override;
        };

        struct Scale : Target
        {
            app::Vector3 value;

            virtual void parse(nlohmann::json const& j) override;
            virtual bool update_state(TimelineState& state, float dt) override;
        };

        struct Rotation : Target
        {
            app::Vector3 value;

            virtual void parse(nlohmann::json const& j) override;
            virtual bool update_state(TimelineState& state, float dt) override;
        };

        struct Color : Target
        {
            app::Color value;

            virtual void parse(nlohmann::json const& j) override;
            virtual bool update_state(TimelineState& state, float dt) override;
        };
    }
}
