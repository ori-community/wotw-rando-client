#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XUserGetTokenAndSignatureUtf16Result.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XUserGetTokenAndSignatureUtf16Data.h>

namespace app::classes::XGamingRuntime::XUserGetTokenAndSignatureUtf16Result {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XUserGetTokenAndSignatureUtf16Result * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::XUserGetTokenAndSignatureUtf16Result * this_ptr, int32_t hresult, app::XUserGetTokenAndSignatureUtf16Data* token_and_signature))
    IL2CPP_REGISTER_METHOD(0x030BB730, app::IAsyncResult*, BeginInvoke, (app::XUserGetTokenAndSignatureUtf16Result * this_ptr, int32_t hresult, app::XUserGetTokenAndSignatureUtf16Data* token_and_signature, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XUserGetTokenAndSignatureUtf16Result * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::XGamingRuntime::XUserGetTokenAndSignatureUtf16Result
