#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::XGamingRuntime::Interop::XUserChangeEventCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XUserChangeEventCallback_1 * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01443A00, void, Invoke, (app::XUserChangeEventCallback_1 * this_ptr, void* context, app::XUserLocalId user_local_id, app::XUserChangeEvent__Enum event_type))
    IL2CPP_REGISTER_METHOD(0x030B3AD0, app::IAsyncResult*, BeginInvoke, (app::XUserChangeEventCallback_1 * this_ptr, void* context, app::XUserLocalId user_local_id, app::XUserChangeEvent__Enum event_type, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XUserChangeEventCallback_1 * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::XGamingRuntime::Interop::XUserChangeEventCallback
