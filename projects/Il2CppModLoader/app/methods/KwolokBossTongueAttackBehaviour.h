#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::KwolokBossTongueAttackBehaviour {
    IL2CPP_REGISTER_METHOD(0x012F0DF0, app::Transform*, get_TongueRoot, (app::KwolokBossTongueAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012F0EA0, app::Vector3, get_TongueRootPosition, (app::KwolokBossTongueAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012F0FD0, app::Transform*, get_TongueTip, (app::KwolokBossTongueAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012F1080, app::Vector3, get_TongueTipPosition, (app::KwolokBossTongueAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00805AA0, int32_t, get_GroundMask, ())
    IL2CPP_REGISTER_METHOD(0x012E0B60, void, InitializeCancellableController, (app::KwolokBossTongueAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012F11B0, void, OnEnter, (app::KwolokBossTongueAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012F1720, app::BehaviourStatus__Enum, OnExecute, (app::KwolokBossTongueAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012F1890, void, OnExit, (app::KwolokBossTongueAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012F1E10, float, ComputeUtility, (app::KwolokBossTongueAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00965980, void, InitializeHitReactionController, (app::KwolokBossTongueAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012F2340, void, ModifyAcceleration, (app::KwolokBossTongueAttackBehaviour * this_ptr, float* acceleration, float* deceleration))
    IL2CPP_REGISTER_METHODINFO(0x04730888, KwolokBossTongueAttackBehaviour_ModifyAcceleration__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012F2370, void, UpdateSounds, (app::KwolokBossTongueAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012F2560, void, UpdateTongueHitEffect, (app::KwolokBossTongueAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012F2A20, void, OnTargetLockEvent, (app::KwolokBossTongueAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04797AC8, KwolokBossTongueAttackBehaviour_OnTargetLockEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012F3500, void, OnMouthHeightLockEvent, (app::KwolokBossTongueAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470E818, KwolokBossTongueAttackBehaviour_OnMouthHeightLockEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnMaxExtenReached, (app::KwolokBossTongueAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473F7B0, KwolokBossTongueAttackBehaviour_OnMaxExtenReached__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012F3630, void, ctor, (app::KwolokBossTongueAttackBehaviour * this_ptr))
} // namespace app::classes::KwolokBossTongueAttackBehaviour
