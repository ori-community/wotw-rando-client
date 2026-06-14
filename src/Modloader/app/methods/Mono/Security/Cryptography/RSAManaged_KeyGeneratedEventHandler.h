#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EventArgs.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RSAManaged_KeyGeneratedEventHandler.h>
#include <Modloader/app/structs/RSAManaged_KeyGeneratedEventHandler_1.h>

namespace app::classes::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor_1, app::RSAManaged_KeyGeneratedEventHandler* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x015FE410, void, Invoke_1, app::RSAManaged_KeyGeneratedEventHandler* this_ptr, app::Object* sender, app::EventArgs* e)
    IL2CPP_REGISTER_METHOD(
        0x01435260,
        app::IAsyncResult*,
        BeginInvoke_1,
        app::RSAManaged_KeyGeneratedEventHandler* this_ptr,
        app::Object* sender,
        app::EventArgs* e,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke_1, app::RSAManaged_KeyGeneratedEventHandler* this_ptr, app::IAsyncResult* result)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor_2, app::RSAManaged_KeyGeneratedEventHandler_1* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x015FE410, void, Invoke_2, app::RSAManaged_KeyGeneratedEventHandler_1* this_ptr, app::Object* sender, app::EventArgs* e)
    IL2CPP_REGISTER_METHOD(
        0x01435260,
        app::IAsyncResult*,
        BeginInvoke_2,
        app::RSAManaged_KeyGeneratedEventHandler_1* this_ptr,
        app::Object* sender,
        app::EventArgs* e,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke_2, app::RSAManaged_KeyGeneratedEventHandler_1* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler
