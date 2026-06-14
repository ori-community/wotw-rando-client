#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/EntityEvent.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SkeetoHitReaction.h>

namespace app::classes::SkeetoHitReaction {
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::EntityDamageEvent*, get_DamageEvent, app::SkeetoHitReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A6390, void, set_DamageEvent, app::SkeetoHitReaction* this_ptr, app::EntityDamageEvent* value)
    IL2CPP_REGISTER_METHOD(0x0061EBC0, bool, get_UseDamageTypePreventingInterruption, app::SkeetoHitReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00756FF0, void, set_UseDamageTypePreventingInterruption, app::SkeetoHitReaction* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0068B8C0, bool, get_LockDamageKickback, app::SkeetoHitReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00757000, void, set_LockDamageKickback, app::SkeetoHitReaction* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00757010, void, OnInitializeTask, app::SkeetoHitReaction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x007570E0, void, OnEnterTask, app::SkeetoHitReaction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00757220, void, OnHit, app::SkeetoHitReaction* this_ptr, app::EntityDamageEvent* damage_event, bool can_interrupt)
    IL2CPP_REGISTER_METHOD(0x007574B0, app::BehaviourStatus__Enum, OnExecuteTask, app::SkeetoHitReaction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00757680, void, OnExitTask, app::SkeetoHitReaction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00757690, void, StartTimeline, app::SkeetoHitReaction* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x00757820, void, ResetTimeline, app::SkeetoHitReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00757A80,
        void,
        HandleReasonToNotInterrupt,
        app::SkeetoHitReaction* this_ptr,
        app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason,
        app::EntityEvent* reaction_event
    )
    IL2CPP_REGISTER_METHOD(0x00757B60, void, ProcessKickback, app::SkeetoHitReaction* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::SkeetoHitReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00757DC0, bool, PlayedAdditiveAnim, app::SkeetoHitReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00757DD0, void, TimelineFinished, app::SkeetoHitReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00757DF0, bool, IsInterruptingDamageWeight, app::SkeetoHitReaction* this_ptr, app::DamageWeight__Enum weight)
    IL2CPP_REGISTER_METHOD(0x00757E10, bool, IsDamageTypePreventingInterruption, app::SkeetoHitReaction* this_ptr, app::DamageType__Enum type)
    IL2CPP_REGISTER_METHOD(0x00757F30, bool, IsKickbackAllowed, app::SkeetoHitReaction* this_ptr, app::AbilityType__Enum ability)
    IL2CPP_REGISTER_METHOD(0x00757F50, void, ctor, app::SkeetoHitReaction* this_ptr)
} // namespace app::classes::SkeetoHitReaction
