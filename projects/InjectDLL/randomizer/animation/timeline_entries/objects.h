#pragma once

#include <enums/sound.h>
#include <randomizer/animation/animation.h>
#include <randomizer/animation/timeline_entries/base.h>
#include <utils/json_serializers.h>

namespace randomizer::timeline_entries {
    struct Animation : Base {
        std::shared_ptr<AnimationDefinition> definition;
        std::optional<VariableDeclaration<float>> duration;

        virtual void parse(TimelineState& state, nlohmann::json const& j) override;
        virtual bool update_state(TimelineState& state, float dt) override;
    };

    struct Sound : Base {
        VariableDeclaration<SoundEventID> sound_event;

        virtual void parse(TimelineState& state, nlohmann::json const& j) override;
        virtual bool update_state(TimelineState& state, float dt) override;
    };

    struct Text : Base {
        VariableDeclaration<std::string> text;

        virtual void parse(TimelineState& state, nlohmann::json const& j) override;
        virtual bool update_state(TimelineState& state, float dt) override;
    };
} // namespace randomizer::timeline_entries