#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BombableWallLogic.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/IMoonSetupAnimator.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::BombableWallLogic {
    IL2CPP_REGISTER_METHOD(0x00D388C0, app::Vector3, get_Position, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, ShouldCreateCheckpointOnDestruction, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonSetupAnimator*, get_MoonSetupAnimator, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D38AD0, void, set_MoonSetupAnimator, app::BombableWallLogic* this_ptr, app::IMoonSetupAnimator* value)
    IL2CPP_REGISTER_METHOD(0x00D38BA0, app::Vector2, get_BabyWormAutoTargetPosition, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_BabyWormAutoTargetPriority, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D38C60, bool, get_TargetActive, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D38D80, void, Apply, app::BombableWallLogic* this_ptr, app::UberStateApplyContext__Enum context)
    IL2CPP_REGISTER_METHOD(0x00D38F20, void, Awake, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D391E0, void, OnEnable, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D39380, void, OnDisable, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D39500, void, OnRecieveDamage, app::BombableWallLogic* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00D39530, void, DestroyWall, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C32A40, app::IUberState__Array*, get_AffectingUberStates, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D398F0, app::List_1_UnityEngine_GameObject_*, get_AllTargets, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BDCCA0, bool, IsDead, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByMelee, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHomingMissiled, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::IDamageReciever__Array*, get_AffectedReceivers, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D39A20, bool, OnRange, app::BombableWallLogic* this_ptr, app::Vector2 point)
    IL2CPP_REGISTER_METHOD(0x00D39A80, app::Vector2, GasBallBaitCenter, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_GasBallAttractionTime, app::BombableWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D39B40, void, ctor, app::BombableWallLogic* this_ptr)
} // namespace app::classes::BombableWallLogic
