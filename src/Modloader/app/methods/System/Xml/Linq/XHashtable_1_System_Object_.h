#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XHashtable_1_System_Object_.h>
#include <Modloader/app/structs/XHashtable_1_TValue_ExtractKeyDelegate_System_Object_.h>

namespace app::classes::System::Xml::Linq::XHashtable_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x0225AE80,
        void,
        ctor,
        app::XHashtable_1_System_Object_* this_ptr,
        app::XHashtable_1_TValue_ExtractKeyDelegate_System_Object_* extract_key,
        int32_t capacity
    )
    IL2CPP_REGISTER_METHOD(
        0x0225AFC0,
        bool,
        TryGetValue,
        app::XHashtable_1_System_Object_* this_ptr,
        app::String* key,
        int32_t index,
        int32_t count,
        app::Object** value
    )
    IL2CPP_REGISTER_METHOD(0x0225B000, app::Object*, Add, app::XHashtable_1_System_Object_* this_ptr, app::Object* value)
} // namespace app::classes::System::Xml::Linq::XHashtable_1_System_Object_
