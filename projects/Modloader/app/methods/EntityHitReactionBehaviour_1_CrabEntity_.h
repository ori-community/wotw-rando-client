#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EntityHitReactionBehaviour_1_CrabEntity_.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>
#include <Modloader/app/structs/DamageType__Enum.h>

namespace app::classes::EntityHitReactionBehaviour_1_CrabEntity_ {
    IL2CPP_REGISTER_METHOD(0x019E0DF0, void, OnInitializeTask, (app::EntityHitReactionBehaviour_1_CrabEntity_ * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0472C838, EntityHitReactionBehaviour_1_CrabEntity__OnInitializeTask__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019E1460, void, ApplyExternalKickbackForce, (app::EntityHitReactionBehaviour_1_CrabEntity_ * this_ptr, app::Vector2 force, app::DamageWeight__Enum damage_weight))
    IL2CPP_REGISTER_METHODINFO(0x04781400, EntityHitReactionBehaviour_1_CrabEntity__ApplyExternalKickbackForce__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019E11F0, bool, CanInterrupt, (app::EntityHitReactionBehaviour_1_CrabEntity_ * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason))
    IL2CPP_REGISTER_METHODINFO(0x047837E0, EntityHitReactionBehaviour_1_CrabEntity__CanInterrupt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019E1830, void, ctor, (app::EntityHitReactionBehaviour_1_CrabEntity_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477CE38, EntityHitReactionBehaviour_1_CrabEntity___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019E13C0, bool, IsDamageTypePreventingInterruption, (app::EntityHitReactionBehaviour_1_CrabEntity_ * this_ptr, app::DamageType__Enum type))
    IL2CPP_REGISTER_METHOD(0x019E1820, bool, IsInterruptingDamageWeight, (app::EntityHitReactionBehaviour_1_CrabEntity_ * this_ptr, app::DamageWeight__Enum weight))
} // namespace app::classes::EntityHitReactionBehaviour_1_CrabEntity_
