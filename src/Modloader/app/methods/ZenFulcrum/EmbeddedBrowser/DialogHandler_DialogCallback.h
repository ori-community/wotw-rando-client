#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/DialogHandler_DialogCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::DialogHandler_DialogCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::DialogHandler_DialogCallback* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x01DD5590, void, Invoke, app::DialogHandler_DialogCallback* this_ptr, bool affirm, app::String* text1, app::String* text2)
    IL2CPP_REGISTER_METHOD(
        0x01DD5920,
        app::IAsyncResult*,
        BeginInvoke,
        app::DialogHandler_DialogCallback* this_ptr,
        bool affirm,
        app::String* text1,
        app::String* text2,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::DialogHandler_DialogCallback* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::DialogHandler_DialogCallback
