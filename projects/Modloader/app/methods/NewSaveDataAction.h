#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NewSaveDataAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::NewSaveDataAction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Perform, (app::NewSaveDataAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::NewSaveDataAction * this_ptr))
} // namespace app::classes::NewSaveDataAction
