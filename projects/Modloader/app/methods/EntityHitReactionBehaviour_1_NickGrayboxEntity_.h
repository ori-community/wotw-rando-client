#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/EntityHitReactionBehaviour_1_NickGrayboxEntity_.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::EntityHitReactionBehaviour_1_NickGrayboxEntity_ {
    IL2CPP_REGISTER_METHOD(0x019E0DF0, void, OnInitializeTask, app::EntityHitReactionBehaviour_1_NickGrayboxEntity_* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(
        0x019E1460,
        void,
        ApplyExternalKickbackForce,
        app::EntityHitReactionBehaviour_1_NickGrayboxEntity_* this_ptr,
        app::Vector2 force,
        app::DamageWeight__Enum damage_weight
    )
    IL2CPP_REGISTER_METHOD(
        0x019E11F0,
        bool,
        CanInterrupt,
        app::EntityHitReactionBehaviour_1_NickGrayboxEntity_* this_ptr,
        app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason
    )
    IL2CPP_REGISTER_METHOD(0x019E1830, void, ctor, app::EntityHitReactionBehaviour_1_NickGrayboxEntity_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x019E13C0,
        bool,
        IsDamageTypePreventingInterruption,
        app::EntityHitReactionBehaviour_1_NickGrayboxEntity_* this_ptr,
        app::DamageType__Enum type
    )
    IL2CPP_REGISTER_METHOD(
        0x019E1820,
        bool,
        IsInterruptingDamageWeight,
        app::EntityHitReactionBehaviour_1_NickGrayboxEntity_* this_ptr,
        app::DamageWeight__Enum weight
    )
} // namespace app::classes::EntityHitReactionBehaviour_1_NickGrayboxEntity_
