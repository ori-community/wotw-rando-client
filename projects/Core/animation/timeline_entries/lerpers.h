#pragma once

#include <Core/animation/timeline_entries/base.h>
#include <Core/macros.h>

namespace core::animation::timeline_entries {
    struct CORE_DLLEXPORT Lerper : Target {
        VariableDeclaration<app::Vector3> start;
        VariableDeclaration<app::Vector3> end;
        VariableDeclaration<float> duration;

        virtual void parse(TimelineState& state, nlohmann::json const& j) override;
    };

    struct CORE_DLLEXPORT LerpPosition : Lerper {
        virtual bool update_state(TimelineState& state, float dt) override;
    };

    struct CORE_DLLEXPORT LerpRotation : Lerper {
        virtual bool update_state(TimelineState& state, float dt) override;
    };

    struct CORE_DLLEXPORT LerpScale : Lerper {
        virtual bool update_state(TimelineState& state, float dt) override;
    };
} // namespace core::animation::timeline_entries
