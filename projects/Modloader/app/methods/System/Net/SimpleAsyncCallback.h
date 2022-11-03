#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::SimpleAsyncCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::SimpleAsyncCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::SimpleAsyncCallback * this_ptr, app::SimpleAsyncResult* result))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::SimpleAsyncCallback * this_ptr, app::SimpleAsyncResult* result, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::SimpleAsyncCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Net::SimpleAsyncCallback
