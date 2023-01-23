#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SandwormHitReaction.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>
#include <Modloader/app/structs/EntityEvent.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::SandwormHitReaction {
    IL2CPP_REGISTER_METHOD(0x00C2A890, bool, CanInterrupt, (app::SandwormHitReaction * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason))
    IL2CPP_REGISTER_METHOD(0x00C2A9B0, void, HandleReasonToNotInterrupt, (app::SandwormHitReaction * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, app::EntityEvent* reaction_event))
    IL2CPP_REGISTER_METHOD(0x00C2AAE0, void, OnEnterTask, (app::SandwormHitReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00C2AC20, void, ctor, (app::SandwormHitReaction * this_ptr))
} // namespace app::classes::SandwormHitReaction
