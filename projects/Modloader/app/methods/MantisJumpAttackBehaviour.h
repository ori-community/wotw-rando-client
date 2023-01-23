#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MantisJumpAttackBehaviour.h>
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MantisJumpAttackBehaviour_State__Enum.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Switch_1.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::MantisJumpAttackBehaviour {
    IL2CPP_REGISTER_METHOD(0x00A04E60, bool, get_m_jumpDirectionLeft, (app::MantisJumpAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A04E70, bool, get_IsOnGroundCondition, (app::MantisJumpAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A04EB0, void, Awake, (app::MantisJumpAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A04F30, void, CacheSerializedComponents, (app::MantisJumpAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A04FB0, bool, IsBlockingInterruption, (app::MantisJumpAttackBehaviour * this_ptr, app::EntityDamageEvent* damage_event, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason))
    IL2CPP_REGISTER_METHOD(0x00A05050, void, StartTimeline, (app::MantisJumpAttackBehaviour * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x00A05350, void, ForceStopTimeline, (app::MantisJumpAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A05590, void, ResetTimeline, (app::MantisJumpAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A057F0, void, MoveToNextState, (app::MantisJumpAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047512D0, MantisJumpAttackBehaviour_MoveToNextState__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00A05830, void, OnEntityInitialized, (app::MantisJumpAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A059D0, void, OnEnter, (app::MantisJumpAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00A06460, void, Jump, (app::MantisJumpAttackBehaviour * this_ptr, float jump_distance, float jump_height, float short_jump_height, float gravity))
    IL2CPP_REGISTER_METHOD(0x00A068A0, void, Flip, (app::MantisJumpAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A068D0, void, ChangeState, (app::MantisJumpAttackBehaviour * this_ptr, app::MantisJumpAttackBehaviour_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00A07550, void, ChangeStateToLand, (app::MantisJumpAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A07580, app::BehaviourStatus__Enum, OnExecute, (app::MantisJumpAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00A07AA0, void, OnExit, (app::MantisJumpAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnReset, (app::MantisJumpAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::MantisJumpAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A07BB0, float, GetJumpHeightForIndex, (app::MantisJumpAttackBehaviour * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00A07BE0, app::Switch_1*, GetSoundSwitchForIndex, (app::MantisJumpAttackBehaviour * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00A07C40, float, GetJumpDistanceForIndex, (app::MantisJumpAttackBehaviour * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00A07C70, void, OnCollisionDuringMain, (app::MantisJumpAttackBehaviour * this_ptr, app::Collision* hit))
    IL2CPP_REGISTER_METHODINFO(0x047097E0, MantisJumpAttackBehaviour_OnCollisionDuringMain__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00A083A0, app::Vector3, ProcessRootMotion, (app::MantisJumpAttackBehaviour * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHODINFO(0x04742EC8, MantisJumpAttackBehaviour_ProcessRootMotion__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00A084E0, void, ctor, (app::MantisJumpAttackBehaviour * this_ptr))
} // namespace app::classes::MantisJumpAttackBehaviour
