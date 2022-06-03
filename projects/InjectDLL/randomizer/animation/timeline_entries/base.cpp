#pragma once

#include <randomizer/animation/animation.h>
#include <randomizer/animation/timeline.h>
#include <randomizer/animation/timeline_entries/base.h>
#include <randomizer/sound.h>

#include <Common/ext.h>

namespace randomizer {
    namespace timeline_entries {
        void Base::parse(TimelineState& state, nlohmann::json const& j) {
            id = j.value("id", 0);
            type = j.value("type", TimelineEntryType::Unknown);
            start_time = j.value("start_time", 0.f);
        }

        void Target::parse(TimelineState& state, nlohmann::json const& j) {
            target_type = j.value<TimelineObjectType>("target_type", TimelineObjectType::Unknown);
            Base::parse(state, j);
        }

        app::GameObject* get_target(TimelineState const& state, TimelineObjectType target_type, int id) {
            app::GameObject* root = nullptr;
            switch (target_type) {
                case TimelineObjectType::Animation: {
                    auto animation = state.active_animations.find(id);
                    if (animation != state.active_animations.end())
                        root = animation->second->root();
                    break;
                }
                case TimelineObjectType::Sound: {
                    auto sound = state.active_sounds.find(id);
                    if (sound != state.active_sounds.end())
                        root = sound->second->root();
                    break;
                }
                case TimelineObjectType::Text:
                    // TODO: Handle text
                    break;
                default:
                    break;
            }

            return root;
        }
    } // namespace timeline_entries
} // namespace randomizer
