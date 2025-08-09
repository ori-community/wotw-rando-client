#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/ShowMessageBoxAction.h>

namespace app::classes::ShowMessageBoxAction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Perform, app::ShowMessageBoxAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::ShowMessageBoxAction* this_ptr)
} // namespace app::classes::ShowMessageBoxAction
