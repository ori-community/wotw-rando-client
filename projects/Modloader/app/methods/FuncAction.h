#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FuncAction.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::FuncAction {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FuncAction * this_ptr, app::Action* action))
    IL2CPP_REGISTER_METHOD(0x013E0070, void, Perform, (app::FuncAction * this_ptr, app::IContext* context))
} // namespace app::classes::FuncAction
