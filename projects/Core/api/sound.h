#pragma once

#include <Core/enums/sound.h>
#include <Core/macros.h>

#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#include <Modloader/app/structs/ISoundHost.h>
#include <Modloader/app/structs/WwiseEventSystem_EventStatus__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/Vector3.h>

#include <string_view>

namespace core::api {
    CORE_DLLEXPORT app::WwiseEventSystem_SoundHandle play_sound(SoundEventID event_id, app::ISoundHost* host = nullptr);
    CORE_DLLEXPORT void play_sound_at(SoundEventID event_id, app::Vector3 location);
    CORE_DLLEXPORT void set_state(SoundStateGroupID group_id, SoundStateID state_id);

    class CORE_DLLEXPORT SoundActor {
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
} // namespace core::sound
