#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XTaskQueueHandle.h>
#include <Modloader/app/structs/XTaskQueue.h>

namespace app::classes::XGamingRuntime::Interop::XTaskQueue {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XTaskQueueHandle, get_handle, (app::XTaskQueue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_handle, (app::XTaskQueue * this_ptr, app::XTaskQueueHandle value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XTaskQueue * this_ptr))
} // namespace app::classes::XGamingRuntime::Interop::XTaskQueue
