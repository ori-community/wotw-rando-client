#pragma once

#include <animation/timeline_entries/base.h>
#include <Core/macros.h>

namespace core::animation {
    namespace timeline_entries {
        struct CORE_DLLEXPORT Position : Target {
            VariableDeclaration<app::Vector3> value;

            virtual void parse(TimelineState& state, nlohmann::json const& j) override;
            virtual bool update_state(TimelineState& state, float dt) override;
        };

        struct CORE_DLLEXPORT Scale : Target {
            VariableDeclaration<app::Vector3> value;

            virtual void parse(TimelineState& state, nlohmann::json const& j) override;
            virtual bool update_state(TimelineState& state, float dt) override;
        };

        struct CORE_DLLEXPORT Rotation : Target {
            VariableDeclaration<app::Vector3> value;

            virtual void parse(TimelineState& state, nlohmann::json const& j) override;
            virtual bool update_state(TimelineState& state, float dt) override;
        };

        struct CORE_DLLEXPORT Color : Target {
            VariableDeclaration<app::Color> value;

            virtual void parse(TimelineState& state, nlohmann::json const& j) override;
            virtual bool update_state(TimelineState& state, float dt) override;
        };
    } // namespace timeline_entries
} // namespace core::animation
