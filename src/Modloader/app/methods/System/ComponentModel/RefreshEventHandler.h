#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RefreshEventArgs.h>
#include <Modloader/app/structs/RefreshEventHandler.h>

namespace app::classes::System::ComponentModel::RefreshEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::RefreshEventHandler* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, app::RefreshEventHandler* this_ptr, app::RefreshEventArgs* e)
    IL2CPP_REGISTER_METHOD(
        0x00674080,
        app::IAsyncResult*,
        BeginInvoke,
        app::RefreshEventHandler* this_ptr,
        app::RefreshEventArgs* e,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::RefreshEventHandler* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::ComponentModel::RefreshEventHandler
