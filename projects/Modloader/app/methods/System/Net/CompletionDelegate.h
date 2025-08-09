#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CompletionDelegate.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Net::CompletionDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::CompletionDelegate* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x01434270,
        void,
        Invoke,
        app::CompletionDelegate* this_ptr,
        app::Byte__Array* response_bytes,
        app::Exception* exception,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(
        0x00DC7DB0,
        app::IAsyncResult*,
        BeginInvoke,
        app::CompletionDelegate* this_ptr,
        app::Byte__Array* response_bytes,
        app::Exception* exception,
        app::Object* state,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::CompletionDelegate* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Net::CompletionDelegate
