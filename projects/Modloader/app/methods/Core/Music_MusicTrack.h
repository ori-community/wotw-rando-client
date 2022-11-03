#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Core::Music_MusicTrack {
    IL2CPP_REGISTER_METHOD(0x00DAE690, void, Play_1, (app::Music_MusicTrack * this_ptr, float fade_in_duration, float fade_out_duration))
    IL2CPP_REGISTER_METHOD(0x00DAE6B0, void, Play_2, (app::Music_MusicTrack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAEAB0, void, Stop, (app::Music_MusicTrack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAEB90, void, PlayDescriptor, (app::Music_MusicTrack * this_ptr, app::SoundDescriptor* sound_descriptor))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Music_MusicTrack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBAF0, void, _Play_b__8_0, (app::Music_MusicTrack * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04744AA0, Music_MusicTrack__Play_b__8_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FBAF0, void, _PlayDescriptor_b__10_0, (app::Music_MusicTrack * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04707D68, Music_MusicTrack__PlayDescriptor_b__10_0__MethodInfo)
} // namespace app::classes::Core::Music_MusicTrack
