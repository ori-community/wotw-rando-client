#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ContextCallback.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Threading::ContextCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ContextCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::ContextCallback * this_ptr, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::ContextCallback * this_ptr, app::Object* state, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::ContextCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Threading::ContextCallback
