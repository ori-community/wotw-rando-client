#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::InteractionGraph::FuncCondition {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FuncCondition * this_ptr, app::Func_1_Boolean_* function))
    IL2CPP_REGISTER_METHOD(0x0198D360, bool, Validate, (app::FuncCondition * this_ptr, app::IContext* context))
} // namespace app::classes::Moon::InteractionGraph::FuncCondition
