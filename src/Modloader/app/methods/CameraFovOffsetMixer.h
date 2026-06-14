#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFovOffsetMixer_OffsetResult.h>
#include <Modloader/app/structs/IFieldOfViewInfluencer.h>

namespace app::classes::CameraFovOffsetMixer {
    IL2CPP_REGISTER_METHOD(0x01688BB0, int32_t, get_InfluencersCount, )
    IL2CPP_REGISTER_METHOD(0x01688C60, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x01688D40, void, Register, app::IFieldOfViewInfluencer* influencer)
    IL2CPP_REGISTER_METHOD(0x01688E60, void, Unregister, app::IFieldOfViewInfluencer* influencer)
    IL2CPP_REGISTER_METHOD(0x01688F20, app::CameraFovOffsetMixer_OffsetResult, GetOffset, )
    IL2CPP_REGISTER_METHOD(0x01689460, void, cctor, )
} // namespace app::classes::CameraFovOffsetMixer
