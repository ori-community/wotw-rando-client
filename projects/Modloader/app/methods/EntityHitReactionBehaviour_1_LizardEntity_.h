#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::EntityHitReactionBehaviour_1_LizardEntity_ {
    IL2CPP_REGISTER_METHOD(0x019E0DF0, void, OnInitializeTask, (app::EntityHitReactionBehaviour_1_LizardEntity_ * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0470AC30, EntityHitReactionBehaviour_1_LizardEntity__OnInitializeTask__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019E1460, void, ApplyExternalKickbackForce, (app::EntityHitReactionBehaviour_1_LizardEntity_ * this_ptr, app::Vector2 force, app::DamageWeight__Enum damage_weight))
    IL2CPP_REGISTER_METHODINFO(0x04720A68, EntityHitReactionBehaviour_1_LizardEntity__ApplyExternalKickbackForce__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019E11F0, bool, CanInterrupt, (app::EntityHitReactionBehaviour_1_LizardEntity_ * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason))
    IL2CPP_REGISTER_METHODINFO(0x04766428, EntityHitReactionBehaviour_1_LizardEntity__CanInterrupt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019E1830, void, ctor, (app::EntityHitReactionBehaviour_1_LizardEntity_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04769430, EntityHitReactionBehaviour_1_LizardEntity___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019E13C0, bool, IsDamageTypePreventingInterruption, (app::EntityHitReactionBehaviour_1_LizardEntity_ * this_ptr, app::DamageType__Enum type))
    IL2CPP_REGISTER_METHOD(0x019E1820, bool, IsInterruptingDamageWeight, (app::EntityHitReactionBehaviour_1_LizardEntity_ * this_ptr, app::DamageWeight__Enum weight))
} // namespace app::classes::EntityHitReactionBehaviour_1_LizardEntity_
