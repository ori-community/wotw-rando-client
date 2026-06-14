#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/EntityHitReactionBehaviour_1_DropSlugEntity_.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::EntityHitReactionBehaviour_1_DropSlugEntity_ {
    IL2CPP_REGISTER_METHOD(0x019E0DF0, void, OnInitializeTask, app::EntityHitReactionBehaviour_1_DropSlugEntity_* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x019E1830, void, ctor, app::EntityHitReactionBehaviour_1_DropSlugEntity_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00420230,
        app::BehaviourStatus__Enum,
        OnExecuteTask,
        app::EntityHitReactionBehaviour_1_DropSlugEntity_* this_ptr,
        app::IContext* context
    )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::EntityHitReactionBehaviour_1_DropSlugEntity_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x019E11F0,
        bool,
        CanInterrupt,
        app::EntityHitReactionBehaviour_1_DropSlugEntity_* this_ptr,
        app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason
    )
    IL2CPP_REGISTER_METHOD(
        0x019E13C0,
        bool,
        IsDamageTypePreventingInterruption,
        app::EntityHitReactionBehaviour_1_DropSlugEntity_* this_ptr,
        app::DamageType__Enum type
    )
    IL2CPP_REGISTER_METHOD(
        0x019E1820,
        bool,
        IsInterruptingDamageWeight,
        app::EntityHitReactionBehaviour_1_DropSlugEntity_* this_ptr,
        app::DamageWeight__Enum weight
    )
} // namespace app::classes::EntityHitReactionBehaviour_1_DropSlugEntity_
