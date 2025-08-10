#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/EntityDeathEvent.h>
#include <Modloader/app/structs/EntityEvent.h>
#include <Modloader/app/structs/EntityKickbackEvent.h>
#include <Modloader/app/structs/EntityReactionBehaviour.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::EntityReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_RunInParallel, app::EntityReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanInterruptSelf, app::EntityReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnCacheSerializedComponents, app::EntityReactionBehaviour* this_ptr, app::Entity* owner)
    IL2CPP_REGISTER_METHOD(0x00CA0090, void, OnInitializeTask, app::EntityReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::EntityEvent*, get_ReactionEvent, app::EntityReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, SetReactionEvent, app::EntityReactionBehaviour* this_ptr, app::EntityEvent* reaction_event)
    IL2CPP_REGISTER_METHOD(
        0x00CA02E0,
        bool,
        CanInterrupt,
        app::EntityReactionBehaviour* this_ptr,
        app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason
    )
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        HandleReasonToNotInterrupt,
        app::EntityReactionBehaviour* this_ptr,
        app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason,
        app::EntityEvent* reaction_event
    )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::EntityReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, app::EntityReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015E8300, app::Object*, GetReactionEvent_1, app::EntityReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015E8300, app::EntityDeathEvent*, GetReactionEvent_2, app::EntityReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015E8300, app::EntityDamageEvent*, GetReactionEvent_3, app::EntityReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015E8300, app::EntityKickbackEvent*, GetReactionEvent_4, app::EntityReactionBehaviour* this_ptr)
} // namespace app::classes::EntityReactionBehaviour
