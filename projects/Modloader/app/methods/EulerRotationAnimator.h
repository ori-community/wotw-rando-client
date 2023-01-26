#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/EulerRotationAnimator.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::EulerRotationAnimator {
    IL2CPP_REGISTER_METHOD(0x00982550, app::Transform*, get_m_target, (app::EulerRotationAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00982620, float, get_AngularSpeedZ, (app::EulerRotationAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009826B0, void, CacheOriginals, (app::EulerRotationAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00982760, float, get_Duration, (app::EulerRotationAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00982860, void, SampleValue, (app::EulerRotationAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00982AF0, void, RestoreToOriginalState, (app::EulerRotationAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00868870, app::Vector3, get_OriginalEulerAngles, (app::EulerRotationAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00982B40, bool, get_IsLooping, (app::EulerRotationAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00982DC0, void, ctor, (app::EulerRotationAnimator * this_ptr))
} // namespace app::classes::EulerRotationAnimator
