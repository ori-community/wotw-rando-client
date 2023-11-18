#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SetUberStateValueStoreAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::SetUberStateValueStoreAction {
    IL2CPP_REGISTER_METHOD(0x005A4EF0, void, Perform, (app::SetUberStateValueStoreAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SetUberStateValueStoreAction * this_ptr))
} // namespace app::classes::SetUberStateValueStoreAction
