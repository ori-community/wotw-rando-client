#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnyConditions.h>
#include <Modloader/app/structs/ICondition__Array.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::InteractionGraph::AnyConditions {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::AnyConditions* this_ptr, app::ICondition__Array* conditions)
    IL2CPP_REGISTER_METHOD(0x0198AF80, bool, Validate, app::AnyConditions* this_ptr, app::IContext* context)
} // namespace app::classes::Moon::InteractionGraph::AnyConditions
