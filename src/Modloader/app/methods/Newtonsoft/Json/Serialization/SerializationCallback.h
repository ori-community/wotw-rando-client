#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationCallback.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::Newtonsoft::Json::Serialization::SerializationCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::SerializationCallback* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x01BFBCE0, void, Invoke, app::SerializationCallback* this_ptr, app::Object* o, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(
        0x01BFC360,
        app::IAsyncResult*,
        BeginInvoke,
        app::SerializationCallback* this_ptr,
        app::Object* o,
        app::StreamingContext context,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::SerializationCallback* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::Newtonsoft::Json::Serialization::SerializationCallback
