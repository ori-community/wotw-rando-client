#pragma once

#include <randomizer/animation/timeline_entries/base.h>

namespace randomizer {
    namespace timeline_entries {
        struct Lerper : Target {
            Variable<app::Vector3> start;
            Variable<app::Vector3> end;
            Variable<float> duration;

            virtual void parse(TimelineState& state, nlohmann::json const& j) override;
        };

        struct LerpPosition : Lerper {
            virtual bool update_state(TimelineState& state, float dt) override;
        };

        struct LerpRotation : Lerper {
            virtual bool update_state(TimelineState& state, float dt) override;
        };

        struct LerpScale : Lerper {
            virtual bool update_state(TimelineState& state, float dt) override;
        };
    } // namespace timeline_entries
} // namespace randomizer
