#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinFeatherFlap.h>
#include <Modloader/app/structs/CharacterGravity.h>
#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/Input_InputButtonProcessor.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/SeinFeatherFlapPuppet.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/SeinFeatherFlap_State__Enum.h>

namespace app::classes::SeinFeatherFlap {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E4240, app::CharacterGravity*, get_CharacterGravity, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06F0, app::CharacterLeftRightMovement*, get_CharacterLeftRightMovement, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement*, get_PlatformMovement, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD8BB0, app::Input_InputButtonProcessor*, get_Button, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD8BF0, bool, get_ButtonDown, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD8CF0, void, Start, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD9200, void, OnDestroy, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD9620, void, OnExit, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD9650, void, ModifyGravityPlatformMovementSettings, (app::SeinFeatherFlap * this_ptr, app::GravityPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHODINFO(0x0478E568, SeinFeatherFlap_ModifyGravityPlatformMovementSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AD9730, void, ModifyHorizontalPlatformMovementSettings, (app::SeinFeatherFlap * this_ptr, app::HorizontalPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHODINFO(0x0474C710, SeinFeatherFlap_ModifyHorizontalPlatformMovementSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AD9860, app::MoonAnimator*, get_Leaf, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD98F0, bool, get_IsStatePerforming, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD9900, bool, get_IsAttacking, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD9910, void, UpdateCharacterState, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EnterIdle, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ExitIdle, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD9920, void, UpdateIdle, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD9A50, void, EnterAttack, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADAB90, void, ExitAttack, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADADF0, void, UpdateAttack, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD9620, void, Stop, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADB2D0, bool, get_CanLeafAttack, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLeafDeployed, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTurnAnimFinished, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmos, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADB550, void, OnLeafAttackAnimationEnd, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047492A8, SeinFeatherFlap_OnLeafAttackAnimationEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00ADB990, void, SpawnWindFX, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04706798, SeinFeatherFlap_SpawnWindFX__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AD9900, bool, ShouldLeafAttackAnimationKeepPlaying, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470F8C8, SeinFeatherFlap_ShouldLeafAttackAnimationKeepPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00ADBE20, app::SeinFeatherFlapPuppet*, get_Puppet, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADBEE0, void, OnSetReferenceToSein, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADBFB0, void, OnProcessRootMotion, (app::SeinFeatherFlap * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHODINFO(0x0474BD98, SeinFeatherFlap_OnProcessRootMotion__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AD9620, void, OnQuickGlowStarted, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478FAC0, SeinFeatherFlap_OnQuickGlowStarted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00ADC2C0, void, ChangeState, (app::SeinFeatherFlap * this_ptr, app::SeinFeatherFlap_State__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x00ADC310, void, UpdateState, (app::SeinFeatherFlap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADC460, void, ctor, (app::SeinFeatherFlap * this_ptr))
} // namespace app::classes::SeinFeatherFlap
