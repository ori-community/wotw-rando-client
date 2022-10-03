#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::XGamingRuntime::XUserAddCompleted {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XUserAddCompleted * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::XUserAddCompleted * this_ptr, int32_t hresult, app::XUserHandle* user_handle))
    IL2CPP_REGISTER_METHOD(0x030BB4C0, app::IAsyncResult*, BeginInvoke, (app::XUserAddCompleted * this_ptr, int32_t hresult, app::XUserHandle* user_handle, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XUserAddCompleted * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::XGamingRuntime::XUserAddCompleted
