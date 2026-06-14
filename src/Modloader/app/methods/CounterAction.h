#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CounterAction.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::CounterAction {
    IL2CPP_REGISTER_METHOD(0x00DB1490, void, Perform, app::CounterAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00DB1500, app::String*, GetNiceName, app::CounterAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::CounterAction* this_ptr)
} // namespace app::classes::CounterAction
