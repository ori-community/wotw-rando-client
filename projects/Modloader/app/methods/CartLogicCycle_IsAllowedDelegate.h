#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/CartLogicCycle_IsAllowedDelegate.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::CartLogicCycle_IsAllowedDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::CartLogicCycle_IsAllowedDelegate* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x008A18F0, bool, Invoke, app::CartLogicCycle_IsAllowedDelegate* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00611B10,
        app::IAsyncResult*,
        BeginInvoke,
        app::CartLogicCycle_IsAllowedDelegate* this_ptr,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, app::CartLogicCycle_IsAllowedDelegate* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::CartLogicCycle_IsAllowedDelegate
