#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ReadyForAnimationTrigger {
    IL2CPP_REGISTER_METHOD(0x007340E0, void, Awake, (app::ReadyForAnimationTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00734290, void, OnDestroy, (app::ReadyForAnimationTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00734430, void, OnDisable, (app::ReadyForAnimationTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007346E0, void, OnRestoreCheckpoint, (app::ReadyForAnimationTrigger * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473D408, ReadyForAnimationTrigger_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x007346F0, app::CharacterLeftRightMovement*, get_LeftRightMovement, (app::ReadyForAnimationTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00734820, bool, get_IsOri, (app::ReadyForAnimationTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007348D0, app::Vector3, GetDestination, (app::ReadyForAnimationTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00734CD0, void, Init, (app::ReadyForAnimationTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00734FF0, void, FixedUpdate, (app::ReadyForAnimationTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00735AD0, bool, Validate, (app::ReadyForAnimationTrigger * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00735B10, void, ctor, (app::ReadyForAnimationTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00735B20, void, _FixedUpdate_b__25_0, (app::ReadyForAnimationTrigger * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471BAC8, ReadyForAnimationTrigger__FixedUpdate_b__25_0__MethodInfo)
} // namespace app::classes::ReadyForAnimationTrigger
