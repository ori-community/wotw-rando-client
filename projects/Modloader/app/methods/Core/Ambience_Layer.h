#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkCurveInterpolation__Enum.h>
#include <Modloader/app/structs/AmbienceZone.h>
#include <Modloader/app/structs/Ambience_Layer.h>
#include <Modloader/app/structs/SoundProvider.h>

namespace app::classes::Core::Ambience_Layer {
    IL2CPP_REGISTER_METHOD(0x011F7960, int32_t, Sort, app::Ambience_Layer* layer_a, app::Ambience_Layer* layer_b)
    IL2CPP_REGISTER_METHOD(
        0x011F79A0,
        void,
        ctor,
        app::Ambience_Layer* this_ptr,
        app::SoundProvider* sound_provider,
        float fade_in_duration,
        float fade_out_duration,
        int32_t priority,
        app::AmbienceZone* ambience_zone,
        app::AkCurveInterpolation__Enum fade_type
    )
    IL2CPP_REGISTER_METHOD(0x011F7C20, void, Enter, app::Ambience_Layer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011F7E70, void, Exit, app::Ambience_Layer* this_ptr)
} // namespace app::classes::Core::Ambience_Layer
