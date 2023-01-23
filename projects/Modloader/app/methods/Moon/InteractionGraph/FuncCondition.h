#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FuncCondition.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::InteractionGraph::FuncCondition {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FuncCondition * this_ptr, app::Func_1_Boolean_* function))
    IL2CPP_REGISTER_METHOD(0x0198D360, bool, Validate, (app::FuncCondition * this_ptr, app::IContext* context))
} // namespace app::classes::Moon::InteractionGraph::FuncCondition
