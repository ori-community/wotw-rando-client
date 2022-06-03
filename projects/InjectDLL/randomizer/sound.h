#pragma once

#include <enums/sound_event_id.h>
#include <macros.h>

#include <string_view>

namespace randomizer {
    namespace sound {
        app::WwiseEventSystem_SoundHandle play_sound(SoundEventID event_id, app::ISoundHost* host = nullptr);
        void play_sound_at(SoundEventID event_id, app::Vector3 location);
    } // namespace sound

    class SoundActor {
    public:
        SoundActor(app::GameObject* parent = nullptr);
        ~SoundActor();

        SoundActor(SoundActor const&) = delete;
        SoundActor(SoundActor&&) = delete;

        app::WwiseEventSystem_EventStatus__Enum status();
        void play(SoundEventID event_id);
        void pause();
        void resume();
        void stop();

        app::GameObject* root() { return m_root; }

    private:
        app::GameObject* m_root;
        app::SoundHost* m_host;
        app::WwiseEventSystem_SoundHandle m_sound;
    };
} // namespace randomizer
