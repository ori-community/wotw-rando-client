#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::InteractionGraph::AnyConditions {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::AnyConditions * this_ptr, app::ICondition__Array* conditions))
    IL2CPP_REGISTER_METHOD(0x0198AF80, bool, Validate, (app::AnyConditions * this_ptr, app::IContext* context))
} // namespace app::classes::Moon::InteractionGraph::AnyConditions
