#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Core::Ambience_AmbienceTrack {
    IL2CPP_REGISTER_METHOD(0x00CB5CD0, app::ArtificialSoundHostReference, get_SoundHost, (app::Ambience_AmbienceTrack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB5CE0, void, set_SoundHost, (app::Ambience_AmbienceTrack * this_ptr, app::ArtificialSoundHostReference value))
    IL2CPP_REGISTER_METHOD(0x011F7340, void, Play, (app::Ambience_AmbienceTrack * this_ptr, float fade_in_duration, float fade_out_duration))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::Event_1*, get_CurrentEvent, (app::Ambience_AmbienceTrack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_CurrentEvent, (app::Ambience_AmbienceTrack * this_ptr, app::Event_1* value))
    IL2CPP_REGISTER_METHOD(0x011F7900, void, Stop, (app::Ambience_AmbienceTrack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Ambience_AmbienceTrack * this_ptr))
} // namespace app::classes::Core::Ambience_AmbienceTrack
