#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/NativeBool.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XGameSaveBlobInfo.h>
#include <Modloader/app/structs/XGameSaveBlobInfoCallback.h>

namespace app::classes::XGamingRuntime::Interop::XGameSaveBlobInfoCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::XGameSaveBlobInfoCallback* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x030B3590, app::NativeBool, Invoke, app::XGameSaveBlobInfoCallback* this_ptr, app::XGameSaveBlobInfo info, void* context)
    IL2CPP_REGISTER_METHOD(
        0x030B39F0,
        app::IAsyncResult*,
        BeginInvoke,
        app::XGameSaveBlobInfoCallback* this_ptr,
        app::XGameSaveBlobInfo info,
        void* context,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x008A1BF0, app::NativeBool, EndInvoke, app::XGameSaveBlobInfoCallback* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::XGamingRuntime::Interop::XGameSaveBlobInfoCallback
