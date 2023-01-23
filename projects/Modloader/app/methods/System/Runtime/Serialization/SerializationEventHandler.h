#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SerializationEventHandler.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Runtime::Serialization::SerializationEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::SerializationEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01D247B0, void, Invoke, (app::SerializationEventHandler * this_ptr, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x01EDCAA0, app::IAsyncResult*, BeginInvoke, (app::SerializationEventHandler * this_ptr, app::StreamingContext context, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::SerializationEventHandler * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Runtime::Serialization::SerializationEventHandler
