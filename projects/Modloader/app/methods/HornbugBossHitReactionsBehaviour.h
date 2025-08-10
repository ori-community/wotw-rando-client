#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/EntityEvent.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>
#include <Modloader/app/structs/HornbugBossHitReactionsBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::HornbugBossHitReactionsBehaviour {
    IL2CPP_REGISTER_METHOD(0x00B6F390, void, Awake, app::HornbugBossHitReactionsBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B6F4A0, app::MoonTimeline*, PlayReaction, app::HornbugBossHitReactionsBehaviour* this_ptr, bool additive)
    IL2CPP_REGISTER_METHOD(
        0x00B6F870,
        void,
        HandleReasonToNotInterrupt,
        app::HornbugBossHitReactionsBehaviour* this_ptr,
        app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason,
        app::EntityEvent* reaction_event
    )
    IL2CPP_REGISTER_METHOD(0x00B6F880, void, OnEnterTask, app::HornbugBossHitReactionsBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecuteTask, app::HornbugBossHitReactionsBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x006B38C0, void, OnHitReactionFinished, app::HornbugBossHitReactionsBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B6F950, void, OnExitTask, app::HornbugBossHitReactionsBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00B6FA20, void, ctor, app::HornbugBossHitReactionsBehaviour* this_ptr)
} // namespace app::classes::HornbugBossHitReactionsBehaviour
