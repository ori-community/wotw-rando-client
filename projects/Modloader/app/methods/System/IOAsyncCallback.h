#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IOAsyncCallback.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IOAsyncResult.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::IOAsyncCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IOAsyncCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::IOAsyncCallback * this_ptr, app::IOAsyncResult* ioares))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::IOAsyncCallback * this_ptr, app::IOAsyncResult* ioares, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IOAsyncCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::IOAsyncCallback
