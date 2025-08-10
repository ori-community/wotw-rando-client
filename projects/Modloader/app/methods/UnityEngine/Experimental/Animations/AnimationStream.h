#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationHumanStream.h>
#include <Modloader/app/structs/AnimationStream.h>
#include <Modloader/app/structs/AnimationStream__Boxed.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::UnityEngine::Experimental::Animations::AnimationStream {
    IL2CPP_REGISTER_METHOD(0x001EBC90, uint32_t, get_animatorBindingsVersion, app::AnimationStream__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00242880, bool, get_isValid, app::AnimationStream__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00242890, void, CheckIsValid, app::AnimationStream__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002428A0, float, get_deltaTime, app::AnimationStream__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00242900, app::Vector3, get_velocity, app::AnimationStream__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00242990, app::Vector3, get_angularVelocity, app::AnimationStream__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00242A20, app::Vector3, get_rootMotionPosition, app::AnimationStream__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00242AB0, app::Quaternion, get_rootMotionRotation, app::AnimationStream__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00242B40, bool, get_isHumanStream, app::AnimationStream__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00242BA0, app::AnimationHumanStream, AsHuman, app::AnimationStream__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00242CA0, int32_t, get_inputStreamCount, app::AnimationStream__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00242D00, void, ReadSceneTransforms, app::AnimationStream__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00242D60, void, WriteSceneTransforms, app::AnimationStream__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00242DC0, float, GetDeltaTime, app::AnimationStream__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00242E20, bool, GetIsHumanStream, app::AnimationStream__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00242E80, app::Vector3, GetVelocity, app::AnimationStream__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00242F10, app::Vector3, GetAngularVelocity, app::AnimationStream__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00242FA0, app::Vector3, GetRootMotionPosition, app::AnimationStream__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00243030, app::Quaternion, GetRootMotionRotation, app::AnimationStream__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002430B0, int32_t, GetInputStreamCount, app::AnimationStream__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00243110, app::AnimationHumanStream, GetHumanStream, app::AnimationStream__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00243120, void, InternalReadSceneTransforms, app::AnimationStream__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00243180, void, InternalWriteSceneTransforms, app::AnimationStream__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03086AC0, float, GetDeltaTime_Injected, app::AnimationStream* _unity_self)
    IL2CPP_REGISTER_METHOD(0x03086B10, bool, GetIsHumanStream_Injected, app::AnimationStream* _unity_self)
    IL2CPP_REGISTER_METHOD(0x03086B60, void, GetVelocity_Injected, app::AnimationStream* _unity_self, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x03086BC0, void, GetAngularVelocity_Injected, app::AnimationStream* _unity_self, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x03086C20, void, GetRootMotionPosition_Injected, app::AnimationStream* _unity_self, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x03086C80, void, GetRootMotionRotation_Injected, app::AnimationStream* _unity_self, app::Quaternion* ret)
    IL2CPP_REGISTER_METHOD(0x03086CE0, int32_t, GetInputStreamCount_Injected, app::AnimationStream* _unity_self)
    IL2CPP_REGISTER_METHOD(0x03086D30, void, GetHumanStream_Injected, app::AnimationStream* _unity_self, app::AnimationHumanStream* ret)
    IL2CPP_REGISTER_METHOD(0x03086D90, void, InternalReadSceneTransforms_Injected, app::AnimationStream* _unity_self)
    IL2CPP_REGISTER_METHOD(0x03086DE0, void, InternalWriteSceneTransforms_Injected, app::AnimationStream* _unity_self)
} // namespace app::classes::UnityEngine::Experimental::Animations::AnimationStream
