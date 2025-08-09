#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/MoonControllerColliderHit.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ReactionFallingBehaviour.h>
#include <Modloader/app/structs/ReactionFallingBehaviour_FallState__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::ReactionFallingBehaviour {
    IL2CPP_REGISTER_METHOD(0x00730A90, void, OnResetEntity, app::ReactionFallingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::LegacyTimelineSequence*, get_EffectiveLandSequence, app::ReactionFallingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00730AB0, app::MoonTimeline*, get_EffectiveLandSequenceNew, app::ReactionFallingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00730B90, void, UseShortAnimForNextLand, app::ReactionFallingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00730BA0, void, OnInitializeTask, app::ReactionFallingBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00730CB0, bool, get_ShouldLand, app::ReactionFallingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00730D40, void, OnEnterTask, app::ReactionFallingBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00731140, void, OnCollision, app::ReactionFallingBehaviour* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x007312B0, app::BehaviourStatus__Enum, OnExecuteTask, app::ReactionFallingBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00731660, void, OnExitTask, app::ReactionFallingBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00731980, void, HandleCollision_1, app::ReactionFallingBehaviour* this_ptr, app::MoonControllerColliderHit hit)
    IL2CPP_REGISTER_METHOD(0x00731A90, void, HandleCollision_2, app::ReactionFallingBehaviour* this_ptr, app::Vector3 point, app::Vector3 normal, bool force)
    IL2CPP_REGISTER_METHOD(0x00731DC0, void, UpdateState, app::ReactionFallingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00731E10, void, ChangeState, app::ReactionFallingBehaviour* this_ptr, app::ReactionFallingBehaviour_FallState__Enum new_state)
    IL2CPP_REGISTER_METHOD(0x00731F70, void, OnEnterFalling, app::ReactionFallingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007323E0, void, OnExitFalling, app::ReactionFallingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007324C0, void, OnExitLanding, app::ReactionFallingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007325E0, void, FallingUpdate, app::ReactionFallingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00732DA0, void, OnEnterLand, app::ReactionFallingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LandUpdate, app::ReactionFallingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00733230, void, OnEndLand, app::ReactionFallingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007335C0, void, OnEnterCollision, app::ReactionFallingBehaviour* this_ptr, app::Vector3 normal)
    IL2CPP_REGISTER_METHOD(0x00733990, void, CollisionUpdate, app::ReactionFallingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00733C00, void, PlayShake, app::ReactionFallingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00733FC0, void, ForceFalling, app::ReactionFallingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00733FD0, void, ctor, app::ReactionFallingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00734030, bool, _OnEnterFalling_b__60_0, app::ReactionFallingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00734030, bool, _FallingUpdate_b__63_0, app::ReactionFallingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00734050, void, _PlayShake_b__69_0, app::ReactionFallingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007340A0, bool, _PlayShake_b__69_1, app::ReactionFallingBehaviour* this_ptr)
} // namespace app::classes::ReactionFallingBehaviour
