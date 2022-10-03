#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Core::Ambience {
    IL2CPP_REGISTER_METHOD(0x011F6690, app::Ambience_Layer*, get_CurrentAmbienceLayer, ())
    IL2CPP_REGISTER_METHOD(0x011F6790, void, AddAmbienceLayer, (app::Ambience_Layer * music_layer))
    IL2CPP_REGISTER_METHOD(0x011F6870, void, RemoveAmbienceLayer, (app::Ambience_Layer * music_layer))
    IL2CPP_REGISTER_METHOD(0x011F6990, void, SortLayers, ())
    IL2CPP_REGISTER_METHOD(0x011F6B50, app::Ambience_AmbienceTrack*, PlayTrack, (app::SoundProvider * sound_provider, float fade_in_duration, float fade_out_duration, app::AmbienceZone** ambience_zone, app::AkCurveInterpolation__Enum fade_type))
    IL2CPP_REGISTER_METHOD(0x011F6E60, void, StopTrack, (app::Ambience_AmbienceTrack * track))
    IL2CPP_REGISTER_METHOD(0x011F6ED0, void, UpdateAmbience, ())
    IL2CPP_REGISTER_METHOD(0x011F7110, void, cctor, ())
} // namespace app::classes::Core::Ambience
