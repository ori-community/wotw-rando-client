#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkLogger_ErrorLoggerInteropDelegate.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::AkLogger_ErrorLoggerInteropDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::AkLogger_ErrorLoggerInteropDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::AkLogger_ErrorLoggerInteropDelegate * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::AkLogger_ErrorLoggerInteropDelegate * this_ptr, app::String* message, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::AkLogger_ErrorLoggerInteropDelegate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::AkLogger_ErrorLoggerInteropDelegate
