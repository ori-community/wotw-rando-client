#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RotationAnimatorB.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RotationAnimatorB {
    IL2CPP_REGISTER_METHOD(0x01371210, void, CacheOriginals, (app::RotationAnimatorB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01371320, void, SampleValue, (app::RotationAnimatorB * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x01371500, void, RestoreToOriginalState, (app::RotationAnimatorB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01371550, float, get_Duration, (app::RotationAnimatorB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01371720, app::Vector3, get_OriginalRotation, (app::RotationAnimatorB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00982B40, bool, get_IsLooping, (app::RotationAnimatorB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A4BA0, void, ctor, (app::RotationAnimatorB * this_ptr))
} // namespace app::classes::RotationAnimatorB
