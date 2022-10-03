#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::XGamingRuntime::XUserGetTokenAndSignatureUtf16Result {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XUserGetTokenAndSignatureUtf16Result * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::XUserGetTokenAndSignatureUtf16Result * this_ptr, int32_t hresult, app::XUserGetTokenAndSignatureUtf16Data* token_and_signature))
    IL2CPP_REGISTER_METHOD(0x030BB730, app::IAsyncResult*, BeginInvoke, (app::XUserGetTokenAndSignatureUtf16Result * this_ptr, int32_t hresult, app::XUserGetTokenAndSignatureUtf16Data* token_and_signature, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XUserGetTokenAndSignatureUtf16Result * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::XGamingRuntime::XUserGetTokenAndSignatureUtf16Result
