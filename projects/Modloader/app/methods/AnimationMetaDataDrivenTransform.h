#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationMetaDataDrivenTransform.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::AnimationMetaDataDrivenTransform {
    IL2CPP_REGISTER_METHOD(0x005023A0, void, Awake, app::AnimationMetaDataDrivenTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005024A0, void, OnDestroy, app::AnimationMetaDataDrivenTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00502540, void, Start, app::AnimationMetaDataDrivenTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00502550, void, Initialize, app::AnimationMetaDataDrivenTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00502730, void, UpdateCurrentTextureAnimation, app::AnimationMetaDataDrivenTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005028B0, void, UpdateDataFromAnimator, app::AnimationMetaDataDrivenTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, app::AnimationMetaDataDrivenTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00502AF0, void, FixedUpdate, app::AnimationMetaDataDrivenTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00502B20, void, Sample, app::AnimationMetaDataDrivenTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005035A0, bool, get_IsSuspended, app::AnimationMetaDataDrivenTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005035B0, void, set_IsSuspended, app::AnimationMetaDataDrivenTransform* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x005035C0, app::SuspendableMask__Enum, get_Mask, app::AnimationMetaDataDrivenTransform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005035D0, void, set_Mask, app::AnimationMetaDataDrivenTransform* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00503690, void, ctor, app::AnimationMetaDataDrivenTransform* this_ptr)
} // namespace app::classes::AnimationMetaDataDrivenTransform
