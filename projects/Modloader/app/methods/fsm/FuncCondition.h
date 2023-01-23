#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FuncCondition_1.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::fsm::FuncCondition {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FuncCondition_1 * this_ptr, app::Func_1_Boolean_* function))
    IL2CPP_REGISTER_METHOD(0x00F6DF20, bool, Validate, (app::FuncCondition_1 * this_ptr, app::IContext* context))
} // namespace app::classes::fsm::FuncCondition
