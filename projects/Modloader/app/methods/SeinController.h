#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinController.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/CharacterState.h>
#include <Modloader/app/structs/Component_1__Array.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IPressurePlate.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/QueryTriggerInteraction__Enum.h>
#include <Modloader/app/structs/RaycastCommand.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinController {
    IL2CPP_REGISTER_METHOD(0x006DB840, bool, get_IsPlayingAnimation, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DB860, void, set_IsPlayingAnimation, (app::SeinController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x006DB880, bool, get_InputLocked, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DB8C0, bool, get_CanMove, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DB910, bool, get_FaceLeft, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DB990, void, set_FaceLeft, (app::SeinController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::Transform*, get_Transform, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DBA20, bool, IsPerforming, (app::SeinController * this_ptr, app::CharacterState* character_state))
    IL2CPP_REGISTER_METHOD(0x006DBAE0, bool, get_IsAimingBow, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DBC20, bool, get_IsBowAttacking, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DBD60, bool, get_IsInsideSoulFlame, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DBD90, bool, get_IsHolding, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DBEF0, bool, get_IsSpiritLeashing, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_IsSuspended, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DC040, void, set_IsSuspended, (app::SeinController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x006DC050, app::SuspendableMask__Enum, get_Mask, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DC060, void, set_Mask, (app::SeinController * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::Component_1__Array*, get_Suspendables, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DC110, bool, get_IsRopeGrabbing, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DC1E0, bool, get_IsSurfaceGrabbing, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DC2B0, bool, get_IsInvisible, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, SetReferenceToSein, (app::SeinController * this_ptr, app::SeinCharacter* sein))
    IL2CPP_REGISTER_METHOD(0x006DC3E0, bool, get_IsInRangeToGrabBlock, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DC510, bool, get_IsInRangeToGrabLever, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DC6D0, bool, get_IsSwimming, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DC760, bool, get_IsLeashGrabbing, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DC7E0, bool, get_IsDigging, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DC860, bool, get_IsInAir, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DCAF0, void, ProvideComponents, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DCBD0, void, Awake, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DD010, void, OnDestroy, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DD250, void, OnGoThroughPortal, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DD2A0, void, Start, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DD840, bool, RayTest_1, (app::SeinController * this_ptr, app::GameObject* target))
    IL2CPP_REGISTER_METHOD(0x006DD930, bool, RayTest_2, (app::SeinController * this_ptr, app::Vector3 target))
    IL2CPP_REGISTER_METHOD(0x006DDA30, bool, RayTest_3, (app::SeinController * this_ptr, app::Vector3 target, app::Vector2 start_offset, app::Vector2 end_offset, app::QueryTriggerInteraction__Enum trigger_interaction))
    IL2CPP_REGISTER_METHOD(0x006DDDD0, bool, RayTest_4, (app::SeinController * this_ptr, app::GameObject* target, app::Vector2 start_offset, app::Vector2 end_offset, app::QueryTriggerInteraction__Enum trigger_interaction))
    IL2CPP_REGISTER_METHOD(0x006DDE10, bool, RayTest_5, (app::SeinController * this_ptr, app::GameObject* target, float start_offset, float end_offset, app::QueryTriggerInteraction__Enum trigger_interaction))
    IL2CPP_REGISTER_METHOD(0x006DDE40, bool, RayTest_6, (app::SeinController * this_ptr, app::GameObject* target, float start_offset, float end_offset, app::LayerMask test_mask, app::QueryTriggerInteraction__Enum trigger_interaction))
    IL2CPP_REGISTER_METHOD(0x006DE110, bool, RayTest_7, (app::SeinController * this_ptr, app::GameObject* target, app::Vector2 start_offset, app::Vector2 end_offset, app::LayerMask test_mask, app::QueryTriggerInteraction__Enum trigger_interaction))
    IL2CPP_REGISTER_METHOD(0x006DE630, bool, RayTest_8, (app::SeinController * this_ptr, app::Vector3 position, app::Vector3 delta, app::RaycastHit* hit_info))
    IL2CPP_REGISTER_METHOD(0x006DE7E0, app::RaycastCommand, GetRayTestCommand, (app::SeinController * this_ptr, app::GameObject* target, app::Vector2 start_offset, app::Vector2 end_offset))
    IL2CPP_REGISTER_METHOD(0x006DEB50, bool, ParseRayTestCommandResult, (app::SeinController * this_ptr, app::GameObject* target, app::Rigidbody* target_rigidbody, app::RaycastHit hit_info))
    IL2CPP_REGISTER_METHOD(0x006DED20, void, StopAnimation, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DED40, void, PlayAnimation, (app::SeinController * this_ptr, app::MoonAnimation* animation))
    IL2CPP_REGISTER_METHOD(0x006DED60, void, FixedUpdate, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DEDE0, void, HandleOffscreenIssue, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DF120, void, UpdateOriActiveState, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DF3A0, void, Serialize, (app::SeinController * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x006DF3D0, void, OnRecieveDamage, (app::SeinController * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x002FBC50, void, ICanActivatePressurePlate_OnPressed, (app::SeinController * this_ptr, app::IPressurePlate* plate))
    IL2CPP_REGISTER_METHOD(0x006DF410, void, ICanActivatePressurePlate_OnReleased, (app::SeinController * this_ptr, app::IPressurePlate* plate))
    IL2CPP_REGISTER_METHOD(0x006DF420, void, ctor, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, (app::SeinController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, (app::SeinController * this_ptr))
} // namespace app::classes::SeinController
