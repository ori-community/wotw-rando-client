#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/DSAManaged_KeyGeneratedEventHandler.h>
#include <Modloader/app/structs/EventArgs.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::DSAManaged_KeyGeneratedEventHandler* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x015FE410, void, Invoke, app::DSAManaged_KeyGeneratedEventHandler* this_ptr, app::Object* sender, app::EventArgs* e)
    IL2CPP_REGISTER_METHOD(
        0x01435260,
        app::IAsyncResult*,
        BeginInvoke,
        app::DSAManaged_KeyGeneratedEventHandler* this_ptr,
        app::Object* sender,
        app::EventArgs* e,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::DSAManaged_KeyGeneratedEventHandler* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler
