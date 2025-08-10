#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/CharacterUpwardsDeceleration.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/SeinDoubleJump.h>
#include <Modloader/app/structs/SeinStomp.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinStomp {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D06F0, app::CharacterLeftRightMovement*, get_LeftRightMovement, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A7EB40, app::SeinDoubleJump*, get_DoubleJump, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A52480, app::CharacterUpwardsDeceleration*, get_UpwardsDeceleration, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement*, get_PlatformMovement, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A7EB80, bool, get_Finished, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A7EBC0, bool, get_IsStomping, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A7EC00, bool, get_IsStompDownHack, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A7EC40, void, OnRestoreCheckpoint, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A7EC80, void, OnSetReferenceToSein, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A7ED50, void, Start, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A7F020, void, OnExit, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A7F080, void, UpdateCharacterState, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A7F0F0, void, ModifyVerticalPlatformMovementSettings, app::SeinStomp* this_ptr, app::GravityPlatformMovementSettings* settings)
    IL2CPP_REGISTER_METHOD(0x00A7F140, float, get_StompDamage, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A7F1C0, void, OnCollisionGround, app::SeinStomp* this_ptr, app::Vector3 normal, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x00A7F640, void, DoBlastRadius, app::SeinStomp* this_ptr, app::IAttackable* landed_stomp_attackable)
    IL2CPP_REGISTER_METHOD(0x00A7FC60, void, OnAwake, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A80910, void, OnDestroy, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A80D30, void, OnEnterStompIdleState, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A80FE0, void, OnEnterStompDownState, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A81300, void, UpdateStompFinishedState, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A81360, void, LandStomp, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A81760, void, DoStompBlastEffect, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterInactive, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A819B0, void, UpdateStompIdleState, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A81CD0, void, UpdateStompInactiveState, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A81F10, bool, CanStomp, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A82190, void, UpdateStompDownState, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A7EC40, void, EndStomp, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A7EBC0, bool, ShouldStompAnimationKeepPlaying, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A82C00, bool, ShouldStompLandAnimationKeepPlaying, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A82CC0, void, Serialize, app::SeinStomp* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x00A82D10, void, add_OnStompIdleEvent, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00A82E50, void, remove_OnStompIdleEvent, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00A82F90, void, add_OnStompLandEvent, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00A830D0, void, remove_OnStompLandEvent, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00A83210, void, add_OnStompDownEvent, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00A83350, void, remove_OnStompDownEvent, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00A83490, void, ctor, app::SeinStomp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A836C0, void, cctor, )
} // namespace app::classes::SeinStomp
