#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Experimental::Animations::TransformStreamHandle {
    IL2CPP_REGISTER_METHOD(0x002431E0, bool, IsValidInternal, (app::TransformStreamHandle__Boxed * this_ptr, app::AnimationStream* stream))
    IL2CPP_REGISTER_METHOD(0x00243220, bool, get_createdByNative, (app::TransformStreamHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00243230, bool, IsSameVersionAsStream, (app::TransformStreamHandle__Boxed * this_ptr, app::AnimationStream* stream))
    IL2CPP_REGISTER_METHOD(0x00243240, bool, get_hasHandleIndex, (app::TransformStreamHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00243250, bool, get_hasSkeletonIndex, (app::TransformStreamHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EBC90, uint32_t, get_animatorBindingsVersion, (app::TransformStreamHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00243260, bool, IsResolvedInternal, (app::TransformStreamHandle__Boxed * this_ptr, app::AnimationStream* stream))
    IL2CPP_REGISTER_METHOD(0x002432B0, void, CheckIsValidAndResolve, (app::TransformStreamHandle__Boxed * this_ptr, app::AnimationStream* stream))
    IL2CPP_REGISTER_METHODINFO(0x0477AB90, TransformStreamHandle_CheckIsValidAndResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002432C0, app::Vector3, GetPosition, (app::TransformStreamHandle__Boxed * this_ptr, app::AnimationStream stream))
    IL2CPP_REGISTER_METHOD(0x00243380, void, SetPosition, (app::TransformStreamHandle__Boxed * this_ptr, app::AnimationStream stream, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00243430, app::Quaternion, GetRotation, (app::TransformStreamHandle__Boxed * this_ptr, app::AnimationStream stream))
    IL2CPP_REGISTER_METHOD(0x002434F0, void, SetRotation, (app::TransformStreamHandle__Boxed * this_ptr, app::AnimationStream stream, app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x002435A0, void, ResolveInternal, (app::TransformStreamHandle__Boxed * this_ptr, app::AnimationStream* stream))
    IL2CPP_REGISTER_METHOD(0x002435B0, app::Vector3, GetPositionInternal, (app::TransformStreamHandle__Boxed * this_ptr, app::AnimationStream* stream))
    IL2CPP_REGISTER_METHOD(0x00243650, void, SetPositionInternal, (app::TransformStreamHandle__Boxed * this_ptr, app::AnimationStream* stream, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x002436D0, app::Quaternion, GetRotationInternal, (app::TransformStreamHandle__Boxed * this_ptr, app::AnimationStream* stream))
    IL2CPP_REGISTER_METHOD(0x00243760, void, SetRotationInternal, (app::TransformStreamHandle__Boxed * this_ptr, app::AnimationStream* stream, app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x03087080, void, ResolveInternal_Injected, (app::TransformStreamHandle * _unity_self, app::AnimationStream* stream))
    IL2CPP_REGISTER_METHOD(0x030870E0, void, GetPositionInternal_Injected, (app::TransformStreamHandle * _unity_self, app::AnimationStream* stream, app::Vector3* ret))
    IL2CPP_REGISTER_METHOD(0x03087150, void, SetPositionInternal_Injected, (app::TransformStreamHandle * _unity_self, app::AnimationStream* stream, app::Vector3* position))
    IL2CPP_REGISTER_METHOD(0x030871C0, void, GetRotationInternal_Injected, (app::TransformStreamHandle * _unity_self, app::AnimationStream* stream, app::Quaternion* ret))
    IL2CPP_REGISTER_METHOD(0x03087230, void, SetRotationInternal_Injected, (app::TransformStreamHandle * _unity_self, app::AnimationStream* stream, app::Quaternion* rotation))
} // namespace app::classes::UnityEngine::Experimental::Animations::TransformStreamHandle
