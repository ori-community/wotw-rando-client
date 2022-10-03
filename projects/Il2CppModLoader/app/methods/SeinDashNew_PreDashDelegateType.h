#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SeinDashNew_PreDashDelegateType {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::SeinDashNew_PreDashDelegateType * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, (app::SeinDashNew_PreDashDelegateType * this_ptr, bool* allow))
    IL2CPP_REGISTER_METHOD(0x006FD2A0, app::IAsyncResult*, BeginInvoke, (app::SeinDashNew_PreDashDelegateType * this_ptr, bool* allow, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (app::SeinDashNew_PreDashDelegateType * this_ptr, bool* allow, app::IAsyncResult* result))
} // namespace app::classes::SeinDashNew_PreDashDelegateType
