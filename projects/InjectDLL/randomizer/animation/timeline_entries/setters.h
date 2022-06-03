#pragma once

#include <randomizer/animation/timeline_entries/base.h>

namespace randomizer {
    namespace timeline_entries {
        struct Position : Target {
            Variable<app::Vector3> value;

            virtual void parse(TimelineState& state, nlohmann::json const& j) override;
            virtual bool update_state(TimelineState& state, float dt) override;
        };

        struct Scale : Target {
            Variable<app::Vector3> value;

            virtual void parse(TimelineState& state, nlohmann::json const& j) override;
            virtual bool update_state(TimelineState& state, float dt) override;
        };

        struct Rotation : Target {
            Variable<app::Vector3> value;

            virtual void parse(TimelineState& state, nlohmann::json const& j) override;
            virtual bool update_state(TimelineState& state, float dt) override;
        };

        struct Color : Target {
            Variable<app::Color> value;

            virtual void parse(TimelineState& state, nlohmann::json const& j) override;
            virtual bool update_state(TimelineState& state, float dt) override;
        };
    } // namespace timeline_entries
} // namespace randomizer
