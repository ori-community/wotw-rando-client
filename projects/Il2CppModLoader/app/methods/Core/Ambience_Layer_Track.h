#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Core::Ambience_Layer_Track {
    IL2CPP_REGISTER_METHOD(0x011F80F0, void, ctor, (app::Ambience_Layer_Track * this_ptr, app::SoundProvider* sound_provider, float fade_in_duration, float fade_out_duration, app::AmbienceZone** ambience_zone, app::AkCurveInterpolation__Enum fade_type))
    IL2CPP_REGISTER_METHOD(0x011F8120, void, Enter, (app::Ambience_Layer_Track * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F8250, void, Exit, (app::Ambience_Layer_Track * this_ptr))
} // namespace app::classes::Core::Ambience_Layer_Track
