#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Steamworks::SteamMusic {
    IL2CPP_REGISTER_METHOD(0x0278B9C0, bool, BIsEnabled, ())
    IL2CPP_REGISTER_METHOD(0x0278BA70, bool, BIsPlaying, ())
    IL2CPP_REGISTER_METHOD(0x0278BB20, app::AudioPlayback_Status__Enum, GetPlaybackStatus, ())
    IL2CPP_REGISTER_METHOD(0x0278BBD0, void, Play, ())
    IL2CPP_REGISTER_METHOD(0x0278BC80, void, Pause, ())
    IL2CPP_REGISTER_METHOD(0x0278BD30, void, PlayPrevious, ())
    IL2CPP_REGISTER_METHOD(0x0278BDE0, void, PlayNext, ())
    IL2CPP_REGISTER_METHOD(0x0278BE90, void, SetVolume, (float fl_volume))
    IL2CPP_REGISTER_METHOD(0x0278BF50, float, GetVolume, ())
}
