#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XGameSaveBlob__Array.h>
#include <Modloader/app/structs/XGameSaveReadBlobDataCompleted.h>

namespace app::classes::XGamingRuntime::XGameSaveReadBlobDataCompleted {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::XGameSaveReadBlobDataCompleted* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, app::XGameSaveReadBlobDataCompleted* this_ptr, int32_t hresult, app::XGameSaveBlob__Array* blobs)
    IL2CPP_REGISTER_METHOD(
        0x030BB1C0,
        app::IAsyncResult*,
        BeginInvoke,
        app::XGameSaveReadBlobDataCompleted* this_ptr,
        int32_t hresult,
        app::XGameSaveBlob__Array* blobs,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::XGameSaveReadBlobDataCompleted* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::XGamingRuntime::XGameSaveReadBlobDataCompleted
