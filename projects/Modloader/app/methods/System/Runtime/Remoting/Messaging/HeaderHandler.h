#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HeaderHandler.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Header__Array.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Runtime::Remoting::Messaging::HeaderHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::HeaderHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01852930, app::Object*, Invoke, (app::HeaderHandler * this_ptr, app::Header__Array* headers))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::HeaderHandler * this_ptr, app::Header__Array* headers, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object*, EndInvoke, (app::HeaderHandler * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Runtime::Remoting::Messaging::HeaderHandler
