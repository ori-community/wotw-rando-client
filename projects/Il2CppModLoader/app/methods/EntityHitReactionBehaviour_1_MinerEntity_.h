#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::EntityHitReactionBehaviour_1_MinerEntity_ {
    IL2CPP_REGISTER_METHOD(0x019E11F0, bool, CanInterrupt, (app::EntityHitReactionBehaviour_1_MinerEntity_ * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason))
    IL2CPP_REGISTER_METHODINFO(0x04730DB0, EntityHitReactionBehaviour_1_MinerEntity__CanInterrupt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019E1460, void, ApplyExternalKickbackForce, (app::EntityHitReactionBehaviour_1_MinerEntity_ * this_ptr, app::Vector2 force, app::DamageWeight__Enum damage_weight))
    IL2CPP_REGISTER_METHODINFO(0x04709758, EntityHitReactionBehaviour_1_MinerEntity__ApplyExternalKickbackForce__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019E0DF0, void, OnInitializeTask, (app::EntityHitReactionBehaviour_1_MinerEntity_ * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04746E78, EntityHitReactionBehaviour_1_MinerEntity__OnInitializeTask__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019E1830, void, ctor, (app::EntityHitReactionBehaviour_1_MinerEntity_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04795018, EntityHitReactionBehaviour_1_MinerEntity___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019E13C0, bool, IsDamageTypePreventingInterruption, (app::EntityHitReactionBehaviour_1_MinerEntity_ * this_ptr, app::DamageType__Enum type))
    IL2CPP_REGISTER_METHOD(0x019E1820, bool, IsInterruptingDamageWeight, (app::EntityHitReactionBehaviour_1_MinerEntity_ * this_ptr, app::DamageWeight__Enum weight))
} // namespace app::classes::EntityHitReactionBehaviour_1_MinerEntity_
