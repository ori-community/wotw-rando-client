#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimationAssociation_c.h>

namespace app::classes::MoonAnimationAssociation___c {
    IL2CPP_REGISTER_METHOD(0x02130740, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MoonAnimationAssociation_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        __ctor_b__20_0,
        app::MoonAnimationAssociation_c* this_ptr,
        app::MoonAnimation* _p0_,
        app::ActiveAnimationHandle _p1_,
        int32_t _p2_,
        app::Func_1_Boolean_* _p3_
    )
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        __ctor_b__20_1,
        app::MoonAnimationAssociation_c* this_ptr,
        app::MoonAnimation* _p0_,
        app::ActiveAnimationHandle _p1_
    )
} // namespace app::classes::MoonAnimationAssociation___c
