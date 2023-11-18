#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt__Boxed.h>

namespace app::classes::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt {
    IL2CPP_REGISTER_METHOD(0x0011D880, bool, get_ClashWithNonInterruptableTask, (app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0011D890, bool, get_ClashWithNonInterruptableDamage, (app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt__Boxed * this_ptr))
} // namespace app::classes::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt
