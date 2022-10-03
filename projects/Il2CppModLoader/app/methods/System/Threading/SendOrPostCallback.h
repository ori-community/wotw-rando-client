#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Threading::SendOrPostCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::SendOrPostCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::SendOrPostCallback * this_ptr, app::Object* state))
    IL2CPP_REGISTER_METHODINFO(0x04765EE0, SendOrPostCallback_Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::SendOrPostCallback * this_ptr, app::Object* state, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::SendOrPostCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Threading::SendOrPostCallback
