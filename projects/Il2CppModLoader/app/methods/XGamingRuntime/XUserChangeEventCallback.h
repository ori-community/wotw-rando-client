#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::XGamingRuntime::XUserChangeEventCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XUserChangeEventCallback * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x015FF360, void, Invoke, (app::XUserChangeEventCallback * this_ptr, app::XUserLocalId user_local_id, app::XUserChangeEvent__Enum event_type))
    IL2CPP_REGISTER_METHOD(0x030BB590, app::IAsyncResult *, BeginInvoke, (app::XUserChangeEventCallback * this_ptr, app::XUserLocalId user_local_id, app::XUserChangeEvent__Enum event_type, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XUserChangeEventCallback * this_ptr, app::IAsyncResult * result))
}
