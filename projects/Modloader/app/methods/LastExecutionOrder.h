#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LastExecutionOrder.h>

namespace app::classes::LastExecutionOrder {
    IL2CPP_REGISTER_METHOD(0x00F21DB0, void, Awake, (app::LastExecutionOrder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F21E70, void, Start, (app::LastExecutionOrder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F21F00, void, FixedUpdate, (app::LastExecutionOrder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LastExecutionOrder * this_ptr))
} // namespace app::classes::LastExecutionOrder
