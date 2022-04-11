#pragma once

#include <enums/sound_event_id.h>
#include <randomizer/animation/timeline_entries/base.h>
#include <randomizer/animation/animation.h>

namespace randomizer
{
    namespace timeline_entries
    {
        struct Animation : Base
        {
            AnimationDefinition definition;
            AnimationEnd end;

            virtual void parse(nlohmann::json const& j) override;
            virtual bool update_state(TimelineState& state, float dt) override;
        };

        struct Sound : Base
        {
            SoundEventID sound_event;

            virtual void parse(nlohmann::json const& j) override;
            virtual bool update_state(TimelineState& state, float dt) override;
        };

        struct Text : Base
        {
            std::string text;

            virtual void parse(nlohmann::json const& j) override;
            virtual bool update_state(TimelineState& state, float dt) override;
        };
    }
}