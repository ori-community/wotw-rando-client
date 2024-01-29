#include <Core/animation/animation.h>
#include <Core/animation/timeline.h>
#include <Core/animation/timeline_entries/objects.h>

namespace core::animation::timeline_entries {
    void Animation::parse(TimelineState& state, nlohmann::json const& j) {
        auto animation_path = j.value<std::string>("path", "");
        definition = animation_cache.get(animation_path);
        if (j.contains("duration")) {
            duration = create_variable(state, j, "duration", 0.f);
        }

        Base::parse(state, j);
    }

    bool Animation::update_state(TimelineState& state, float dt) {
        auto it = state.active_animations.find(id);
        if (it == state.active_animations.end()) {
            state.active_animations[id] = std::make_shared<core::animation::Animation>(*definition.get());
            it = state.active_animations.find(id);
            auto anim = it->second;
            il2cpp::unity::set_parent(it->second->root(), state.root);
            il2cpp::unity::set_local_position(it->second->root(), app::Vector3{ 0.f, 0.f, 0.f });
            il2cpp::unity::set_local_scale(it->second->root(), app::Vector3{ 1.f, 1.f, 1.f });
            il2cpp::unity::set_local_rotation(it->second->root(), app::Vector3{ 0.f, 0.f, 0.f });
            it->second->start(false);
        } else
            it->second->update(dt);

        if (duration.has_value()) {
            auto elapsed = state.time - start_time;

            if (elapsed >= duration.value()(state))
                it->second->stop();
        }

        if (it->second->is_finished() || it->second->is_stopped()) {
            if (duration.has_value() && !it->second->is_stopped())
                it->second->start(true);
            else {
                state.active_animations.erase(it);
                return true;
            }
        }

        return false;
    }

    void Sound::parse(TimelineState& state, nlohmann::json const& j) {
        sound_event = create_variable(state, j, "sound_event", SoundEventID::Catching);
        Base::parse(state, j);
    }

    bool Sound::update_state(TimelineState& state, float dt) {
        auto it = state.active_sounds.find(id);
        if (it == state.active_sounds.end()) {
            state.active_sounds[id] = std::make_shared<api::audio::SoundActor>();
            it = state.active_sounds.find(id);
            il2cpp::unity::set_parent(it->second->root(), state.root);
            it->second->play(sound_event(state));
        }

        switch (it->second->status()) {
            case app::WwiseEventSystem_EventStatus__Enum::None:
            case app::WwiseEventSystem_EventStatus__Enum::Finished:
                state.active_sounds.erase(it);
                return true;
            default:
                return false;
        }
    }

    void Text::parse(TimelineState& state, nlohmann::json const& j) {
        text = create_variable(state, j, "text", std::string(""));
        // TODO: Add more things.
        Base::parse(state, j);
    }

    bool Text::update_state(TimelineState& state, float dt) {
        // TODO: Handle text.
        return true;
    }
} // namespace core::animation::timeline_entries
