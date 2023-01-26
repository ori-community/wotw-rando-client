#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Warning_Logger.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::RootMotion::Warning_Logger {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Warning_Logger * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::Warning_Logger * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::Warning_Logger * this_ptr, app::String* message, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Warning_Logger * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::RootMotion::Warning_Logger
