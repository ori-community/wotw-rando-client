#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FirstExecutionOrder.h>

namespace app::classes::FirstExecutionOrder {
    IL2CPP_REGISTER_METHOD(0x01266800, void, Awake, (app::FirstExecutionOrder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012668C0, void, Start, (app::FirstExecutionOrder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FirstExecutionOrder * this_ptr))
} // namespace app::classes::FirstExecutionOrder
