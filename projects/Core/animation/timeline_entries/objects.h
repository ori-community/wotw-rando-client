#pragma once

#include <Core/animation/animation.h>
#include <Core/animation/timeline_entries/base.h>
#include <Core/enums/audio.h>
#include <Core/macros.h>
#include <Core/utils/json_serializers.h>

namespace core::animation::timeline_entries {
    struct CORE_DLLEXPORT Animation : Base {
        std::shared_ptr<AnimationDefinition> definition;
        std::optional<VariableDeclaration<float>> duration;

        virtual void parse(TimelineState& state, nlohmann::json const& j) override;
        virtual bool update_state(TimelineState& state, float dt) override;
    };

    struct CORE_DLLEXPORT Sound : Base {
        VariableDeclaration<SoundEventID> sound_event;

        virtual void parse(TimelineState& state, nlohmann::json const& j) override;
        virtual bool update_state(TimelineState& state, float dt) override;
    };

    struct CORE_DLLEXPORT Text : Base {
        VariableDeclaration<std::string> text;

        virtual void parse(TimelineState& state, nlohmann::json const& j) override;
        virtual bool update_state(TimelineState& state, float dt) override;
    };
} // namespace core::animation::timeline_entries
