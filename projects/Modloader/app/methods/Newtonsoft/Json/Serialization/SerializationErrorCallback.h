#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SerializationErrorCallback.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/ErrorContext.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::Newtonsoft::Json::Serialization::SerializationErrorCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::SerializationErrorCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01BFC440, void, Invoke, (app::SerializationErrorCallback * this_ptr, app::Object* o, app::StreamingContext context, app::ErrorContext* error_context))
    IL2CPP_REGISTER_METHOD(0x01BFCB40, app::IAsyncResult*, BeginInvoke, (app::SerializationErrorCallback * this_ptr, app::Object* o, app::StreamingContext context, app::ErrorContext* error_context, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::SerializationErrorCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Newtonsoft::Json::Serialization::SerializationErrorCallback
