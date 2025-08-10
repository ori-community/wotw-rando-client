#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationMetaDataCurveProcessor_c.h>
#include <Modloader/app/structs/AnimationMetaData_AnimationData.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::AnimationMetaDataCurveProcessor___c {
    IL2CPP_REGISTER_METHOD(0x005020E0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AnimationMetaDataCurveProcessor_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00502220, app::Transform*, _OnPreProcessModel_b__5_0, app::AnimationMetaDataCurveProcessor_c* this_ptr, app::Transform* i)
    IL2CPP_REGISTER_METHOD(
        0x00502230,
        app::AnimationMetaData_AnimationData*,
        _OnPreProcessModel_b__5_1,
        app::AnimationMetaDataCurveProcessor_c* this_ptr,
        app::Transform* i
    )
} // namespace app::classes::AnimationMetaDataCurveProcessor___c
