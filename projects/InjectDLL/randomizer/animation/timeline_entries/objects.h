#pragma once

#include <enums/sound_event_id.h>
#include <randomizer/animation/animation.h>
#include <randomizer/animation/timeline_entries/base.h>
#include <utils/json_serializers.h>

namespace randomizer {
    namespace timeline_entries {
        struct Animation : Base {
            std::shared_ptr<AnimationDefinition> definition;
            std::optional<Variable<float>> duration;

            virtual void parse(TimelineState& state, nlohmann::json const& j) override;
            virtual bool update_state(TimelineState& state, float dt) override;
        };

        struct Sound : Base {
            Variable<SoundEventID> sound_event;

            virtual void parse(TimelineState& state, nlohmann::json const& j) override;
            virtual bool update_state(TimelineState& state, float dt) override;
        };

        struct Text : Base {
            Variable<std::string> text;

            virtual void parse(TimelineState& state, nlohmann::json const& j) override;
            virtual bool update_state(TimelineState& state, float dt) override;
        };
    } // namespace timeline_entries
} // namespace randomizer