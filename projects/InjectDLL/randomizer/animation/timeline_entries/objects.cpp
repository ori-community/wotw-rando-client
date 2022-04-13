#include <randomizer/animation/timeline_entries/objects.h>
#include <randomizer/animation/animation.h>
#include <randomizer/animation/timeline.h>

namespace randomizer
{
    namespace timeline_entries
    {
        void Animation::parse(nlohmann::json const& j)
        {
            auto animation_path = j.value<std::string>("path", "");
            definition = animation_cache.get(animation_path);
            end = j.value<AnimationEnd>("on_end", AnimationEnd::Destroy);
            Base::parse(j);
        }

        bool Animation::update_state(TimelineState& state, float dt)
        {
            auto it = state.active_animations.find(id);
            if (it != state.active_animations.end())
            {
                state.active_animations[id] = std::make_shared<randomizer::Animation>(*definition.get());
                it = state.active_animations.find(id);
                il2cpp::unity::set_parent(it->second->root(), state.root);
                it->second->start(false);
            }
            else
                it->second->update(dt);

            if (it->second->is_finished() || it->second->is_stopped())
            {
                if (end == AnimationEnd::Repeat && !it->second->is_stopped())
                    it->second->start(true);
                else
                {
                    state.active_animations.erase(it);
                    return true;
                }
            }

            return false;
        }

        void Sound::parse(nlohmann::json const& j)
        {
            sound_event = j.value<SoundEventID>("sound_event", SoundEventID::Catching);
            Base::parse(j);
        }

        bool Sound::update_state(TimelineState& state, float dt)
        {
            auto it = state.active_sounds.find(id);
            if (it != state.active_sounds.end())
            {
                state.active_sounds[id] = std::make_shared<SoundActor>();
                it = state.active_sounds.find(id);
                il2cpp::unity::set_parent(it->second->root(), state.root);
                it->second->play(sound_event);
            }

            if (it->second->status() == app::WwiseEventSystem_EventStatus__Enum_Finished)
            {
                state.active_sounds.erase(it);
                return true;
            }

            return false;
        }
        
        void Text::parse(nlohmann::json const& j)
        {
            text = j.value<std::string>("text", "");
            // TODO: Add more things.
            Base::parse(j);
        }

        bool Text::update_state(TimelineState& state, float dt)
        {
            // TODO: Handle text.
            return true;
        }
    }
}
