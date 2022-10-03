#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::EntityReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_RunInParallel, (app::EntityReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanInterruptSelf, (app::EntityReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnCacheSerializedComponents, (app::EntityReactionBehaviour * this_ptr, app::Entity* owner))
    IL2CPP_REGISTER_METHOD(0x00CA0090, void, OnInitializeTask, (app::EntityReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::EntityEvent*, get_ReactionEvent, (app::EntityReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, SetReactionEvent, (app::EntityReactionBehaviour * this_ptr, app::EntityEvent* reaction_event))
    IL2CPP_REGISTER_METHOD(0x00CA02E0, bool, CanInterrupt, (app::EntityReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, HandleReasonToNotInterrupt, (app::EntityReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, app::EntityEvent* reaction_event))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::EntityReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::EntityReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015E8300, app::Object*, GetReactionEvent_1, (app::EntityReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015E8300, app::EntityDeathEvent*, GetReactionEvent_2, (app::EntityReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04723360, EntityReactionBehaviour_GetReactionEvent_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015E8300, app::EntityDamageEvent*, GetReactionEvent_3, (app::EntityReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047657D8, EntityReactionBehaviour_GetReactionEvent_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015E8300, app::EntityKickbackEvent*, GetReactionEvent_4, (app::EntityReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04744E00, EntityReactionBehaviour_GetReactionEvent_3__MethodInfo)
} // namespace app::classes::EntityReactionBehaviour
