#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Application_ControllerStateChanged.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::Application_ControllerStateChanged {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Application_ControllerStateChanged* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x01D19FD0, void, Invoke, app::Application_ControllerStateChanged* this_ptr, app::String* name, bool connected)
    IL2CPP_REGISTER_METHOD(
        0x0241CDA0,
        app::IAsyncResult*,
        BeginInvoke,
        app::Application_ControllerStateChanged* this_ptr,
        app::String* name,
        bool connected,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::Application_ControllerStateChanged* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::UnityEngine::Application_ControllerStateChanged
