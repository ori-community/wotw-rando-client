#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::FrogHitReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x016493B0, void, HandleReasonToNotInterrupt, (app::FrogHitReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, app::EntityEvent* reaction_event))
    IL2CPP_REGISTER_METHOD(0x01649420, void, OnEnterTask, (app::FrogHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x016497F0, app::BehaviourStatus__Enum, OnExecuteTask, (app::FrogHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x016498E0, void, Explode, (app::FrogHitReactionBehaviour * this_ptr, app::EntityDamageEvent* damage_event))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::FrogHitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01649980, void, ctor, (app::FrogHitReactionBehaviour * this_ptr))
} // namespace app::classes::FrogHitReactionBehaviour
