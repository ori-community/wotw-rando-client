#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Core::Music {
    IL2CPP_REGISTER_METHOD(0x00DAC8A0, app::Music_Layer*, get_CurrentMusicLayer, ())
    IL2CPP_REGISTER_METHOD(0x00DACAB0, int32_t, get_HighestLayerPriority, ())
    IL2CPP_REGISTER_METHOD(0x00DACCB0, void, AddMusicLayer, (app::Music_Layer * music_layer))
    IL2CPP_REGISTER_METHOD(0x00DACE60, void, RemoveMusicLayer, (app::Music_Layer * music_layer))
    IL2CPP_REGISTER_METHOD(0x00DACFF0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00DAD100, app::Music_MusicTrack*, PlayTrack, (app::SoundDescriptor * sound_descriptor, float fade_in_duration, float fade_out_duration))
    IL2CPP_REGISTER_METHOD(0x00DAD3F0, void, StopTrack, (app::Music_MusicTrack * track))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRestoreCheckpoint, ())
    IL2CPP_REGISTER_METHOD(0x00DAD410, void, UpdateMusic, ())
    IL2CPP_REGISTER_METHOD(0x00DAD690, void, cctor, ())
} // namespace app::classes::Core::Music
