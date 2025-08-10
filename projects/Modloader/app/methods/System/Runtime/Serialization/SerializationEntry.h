#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationEntry__Boxed.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Runtime::Serialization::SerializationEntry {
    IL2CPP_REGISTER_METHOD(0x00107C10, app::Object*, get_Value, app::SerializationEntry__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00107C20, app::String*, get_Name, app::SerializationEntry__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001D7CA0,
        void,
        ctor,
        app::SerializationEntry__Boxed* this_ptr,
        app::String* entry_name,
        app::Object* entry_value,
        app::Type* entry_type
    )
} // namespace app::classes::System::Runtime::Serialization::SerializationEntry
