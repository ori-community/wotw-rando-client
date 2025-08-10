#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_EntityTargetting_.h>
#include <Modloader/app/structs/Action_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/CharacterAirNoDeceleration.h>
#include <Modloader/app/structs/CharacterApplyFrictionToSpeed.h>
#include <Modloader/app/structs/CharacterGravity.h>
#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/IBashAttackable.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/PlayerAbilities.h>
#include <Modloader/app/structs/SeinBashAttack.h>
#include <Modloader/app/structs/SeinBashAttackPuppet.h>
#include <Modloader/app/structs/SeinBashAttackPuppet_SetElement__Enum.h>
#include <Modloader/app/structs/SeinController.h>
#include <Modloader/app/structs/SeinDoubleJump.h>

namespace app::classes::SeinBashAttack {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00660430, app::IBashAttackable*, get_PotentialFutureTarget, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D85220, void, set_PotentialFutureTarget, app::SeinBashAttack* this_ptr, app::IBashAttackable* value)
    IL2CPP_REGISTER_METHOD(0x004B6800, bool, get_IsStatePerforming, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D06F0, app::CharacterLeftRightMovement*, get_LeftRightMovement, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D85240, void, add_OnBashAttackEvent, app::Action_1_UnityEngine_Vector2_* value)
    IL2CPP_REGISTER_METHOD(0x00D85380, void, remove_OnBashAttackEvent, app::Action_1_UnityEngine_Vector2_* value)
    IL2CPP_REGISTER_METHOD(0x00D854C0, void, add_OnBashBegin, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00D85600, void, remove_OnBashBegin, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00D85740, void, add_OnBashEnemy, app::Action_1_EntityTargetting_* value)
    IL2CPP_REGISTER_METHOD(0x00D85880, void, remove_OnBashEnemy, app::Action_1_EntityTargetting_* value)
    IL2CPP_REGISTER_METHOD(0x00D859C0, app::Component_1*, get_TargetAsComponent, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F0FF0, app::CharacterAirNoDeceleration*, get_AirNoDeceleration, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A7EB40, app::SeinDoubleJump*, get_DoubleJump, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F0FB0, app::CharacterApplyFrictionToSpeed*, get_ApplyFrictionToSpeed, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E4240, app::CharacterGravity*, get_Gravity, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D06F0, app::CharacterLeftRightMovement*, get_CharacterLeftRightMovement, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A50B70, app::PlayerAbilities*, get_PlayerAbilities, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement*, get_PlatformMovement, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D85A80, app::SeinController*, get_SeinController, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D85AA0, app::SeinBashAttackPuppet_SetElement__Enum, get_BashChargeAnimation, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D85EC0, app::SeinBashAttackPuppet_SetElement__Enum, get_BashJumpAnimation, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00757DC0, bool, get_SpriteMirrorLock, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D86360, void, set_SpriteMirrorLock, app::SeinBashAttack* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00D86420, bool, get_CanBash, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D86650, void, OnSetReferenceToSein, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D86820, void, Start, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D86E60, void, OnDestroy, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00D87460,
        void,
        ModifyGravityPlatformMovementSettings,
        app::SeinBashAttack* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x00D87490,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::SeinBashAttack* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x00D874C0, void, OnRestoreCheckpoint, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpiritLeashEnded, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D87530, void, OnDisable, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D87580, void, ExitBash, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D876F0, void, MovePlayerToTargetAndCreateEffect, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D87FA0, bool, HasUltraLeashEquipped, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D87FE0, void, BeginBash, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D89170, void, PlayBashStartSound, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D89270, void, BashGameComplete, app::SeinBashAttack* this_ptr, float angle)
    IL2CPP_REGISTER_METHOD(0x00D892E0, void, JumpOffTarget, app::SeinBashAttack* this_ptr, float angle)
    IL2CPP_REGISTER_METHOD(0x00D8A560, void, OnPreTurningHandlerTurn, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8A770, bool, CanPerfomBashCustomTurn, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8A7E0, void, PerformBashTurn, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8AAD0, bool, get_JustBashed, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8AAF0, void, AttackTarget, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8B2B0, float, GetThrowForce, app::SeinBashAttack* this_ptr, app::GameObject* bashed_object)
    IL2CPP_REGISTER_METHOD(0x00D8B430, float, GetBashDamage, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8B500, void, BeginBashThroughEnemies, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8B650, void, MakeInvincibleToEnemies, app::SeinBashAttack* this_ptr, float duration)
    IL2CPP_REGISTER_METHOD(0x00D8B820, void, UpdateBashThroughEnemies, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8C140, void, FinishBashThroughEnemies, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8C270, void, UpdateBashingState, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8C3D0, void, BashFailed, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8C590, bool, get_m_ignoreBashForGlide, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8C650, bool, get_GlideBlockedByBash, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8C670, bool, get_SpiritLeashBlockedByBash, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8C6D0, void, UpdateNormalState, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE77E0, void, OnEnter, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8D4C0, void, OnExit, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8D4D0, void, UpdateCharacterState, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8DA70, void, HandleMovingTowardsBashTarget, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8DC80, void, HandleBashAngle, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8DD50, void, HandleFindingTarget, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8DE00, void, UpdateTargetHighlight, app::SeinBashAttack* this_ptr, app::IBashAttackable* target)
    IL2CPP_REGISTER_METHOD(0x00D8DFC0, bool, IsAttackableInteresting, app::SeinBashAttack* this_ptr, app::IAttackable* attackable)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RemovingAttackable, app::SeinBashAttack* this_ptr, app::IAttackable* attackable)
    IL2CPP_REGISTER_METHOD(0x00D8E0B0, app::Guid, get_AttackableConsumerID, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8E0C0, void, set_AttackableConsumerID, app::SeinBashAttack* this_ptr, app::Guid value)
    IL2CPP_REGISTER_METHOD(0x00D8E0D0, app::IBashAttackable*, FindClosestAttackHandler, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004B6800, bool, ShouldBashChargeAnimationKeepPlaying, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8E6B0, bool, ShouldBashJumpAnimationKeepPlaying, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8E750, bool, ShouldSwimBashJumpAnimationKeepPlaying, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8E840, void, Serialize, app::SeinBashAttack* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x00D8E9C0, app::SeinBashAttackPuppet*, get_Puppet, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8EA80, void, ctor, app::SeinBashAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D8EF00, void, cctor, )
} // namespace app::classes::SeinBashAttack
