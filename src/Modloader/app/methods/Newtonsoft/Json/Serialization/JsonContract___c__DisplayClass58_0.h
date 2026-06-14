#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ErrorContext.h>
#include <Modloader/app/structs/JsonContract_c_DisplayClass58_0.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass58_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::JsonContract_c_DisplayClass58_0* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0186F7B0,
        void,
        _CreateSerializationErrorCallback_b__0,
        app::JsonContract_c_DisplayClass58_0* this_ptr,
        app::Object* o,
        app::StreamingContext context,
        app::ErrorContext* econtext
    )
} // namespace app::classes::Newtonsoft::Json::Serialization::JsonContract___c__DisplayClass58_0
