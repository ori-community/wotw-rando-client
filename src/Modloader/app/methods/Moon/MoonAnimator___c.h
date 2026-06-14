#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/IAnimation.h>
#include <Modloader/app/structs/MoonAnimator_c.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/VectorAnimationParameter.h>

namespace app::classes::Moon::MoonAnimator___c {
    IL2CPP_REGISTER_METHOD(0x0210DF60, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MoonAnimator_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _ClearRootMotion_b__202_0, app::MoonAnimator_c* this_ptr, app::Vector3 _p0_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _ClearRootMotion_b__202_1, app::MoonAnimator_c* this_ptr, app::Quaternion _p0_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__208_0, app::MoonAnimator_c* this_ptr, app::Vector3 _p0_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__208_1, app::MoonAnimator_c* this_ptr, app::Quaternion _p0_)
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        __ctor_b__208_2,
        app::MoonAnimator_c* this_ptr,
        app::IAnimation* _p0_,
        app::ActiveAnimationHandle _p1_,
        int32_t _p2_,
        app::Func_1_Boolean_* _p3_
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__208_3, app::MoonAnimator_c* this_ptr, app::IAnimation* _p0_, app::ActiveAnimationHandle _p1_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__208_4, app::MoonAnimator_c* this_ptr, app::FloatAnimationParameter* _p0_, float _p1_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__208_5, app::MoonAnimator_c* this_ptr, app::VectorAnimationParameter* _p0_, app::Vector3 _p1_)
} // namespace app::classes::Moon::MoonAnimator___c
