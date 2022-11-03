#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::KuFeatherFlap {
    IL2CPP_REGISTER_METHOD(0x00A3CA60, bool, get_CanCancel, (app::KuFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01236600, void, OnSetReferenceToKu, (app::KuFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008519A0, bool, get_IsStatePerforming, (app::KuFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01236630, app::Input_InputButtonProcessor*, get_Button, (app::KuFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012366F0, void, Start, (app::KuFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01236F50, void, OnDestroy, (app::KuFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01237220, void, UpdateState, (app::KuFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012374B0, void, PerformFeatherFlap, (app::KuFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012378C0, void, OnRootMotion, (app::KuFeatherFlap * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHODINFO(0x04741AB0, KuFeatherFlap_OnRootMotion__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01237B40, void, SpawnWindFX, (app::KuFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477B000, KuFeatherFlap_SpawnWindFX__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01237F30, void, ModifyGravityPlatformMovementSettings, (app::KuFeatherFlap * this_ptr, app::GravityPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHODINFO(0x0471B938, KuFeatherFlap_ModifyGravityPlatformMovementSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01238030, void, ModifyHorizontalPlatformMovementSettings, (app::KuFeatherFlap * this_ptr, app::HorizontalPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHODINFO(0x047176B0, KuFeatherFlap_ModifyHorizontalPlatformMovementSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01238160, void, ctor, (app::KuFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012381A0, void, _Start_b__24_2, (app::KuFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04785578, KuFeatherFlap__Start_b__24_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012381B0, void, _Start_b__24_0, (app::KuFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04782C38, KuFeatherFlap__Start_b__24_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012383A0, void, _Start_b__24_1, (app::KuFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474BF68, KuFeatherFlap__Start_b__24_1__MethodInfo)
} // namespace app::classes::KuFeatherFlap
