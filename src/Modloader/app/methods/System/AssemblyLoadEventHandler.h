#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AssemblyLoadEventArgs.h>
#include <Modloader/app/structs/AssemblyLoadEventHandler.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::AssemblyLoadEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::AssemblyLoadEventHandler* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, app::AssemblyLoadEventHandler* this_ptr, app::Object* sender, app::AssemblyLoadEventArgs* args)
    IL2CPP_REGISTER_METHOD(
        0x01435260,
        app::IAsyncResult*,
        BeginInvoke,
        app::AssemblyLoadEventHandler* this_ptr,
        app::Object* sender,
        app::AssemblyLoadEventArgs* args,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::AssemblyLoadEventHandler* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::AssemblyLoadEventHandler
