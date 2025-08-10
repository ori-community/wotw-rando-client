#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XHashtable_1_TValue_ExtractKeyDelegate_System_Object_.h>
#include <Modloader/app/structs/XHashtable_1_TValue_XHashtableState_System_Object_.h>

namespace app::classes::System::Xml::Linq::XHashtable_1_TValue__XHashtableState_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x0225A250,
        void,
        ctor,
        app::XHashtable_1_TValue_XHashtableState_System_Object_* this_ptr,
        app::XHashtable_1_TValue_ExtractKeyDelegate_System_Object_* extract_key,
        int32_t capacity
    )
    IL2CPP_REGISTER_METHOD(
        0x0225A340,
        app::XHashtable_1_TValue_XHashtableState_System_Object_*,
        Resize,
        app::XHashtable_1_TValue_XHashtableState_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0225A7D0,
        bool,
        TryGetValue,
        app::XHashtable_1_TValue_XHashtableState_System_Object_* this_ptr,
        app::String* key,
        int32_t index,
        int32_t count,
        app::Object** value
    )
    IL2CPP_REGISTER_METHOD(
        0x0225A8D0,
        bool,
        TryAdd,
        app::XHashtable_1_TValue_XHashtableState_System_Object_* this_ptr,
        app::Object* value,
        app::Object** new_value
    )
    IL2CPP_REGISTER_METHOD(
        0x0225AB50,
        bool,
        FindEntry,
        app::XHashtable_1_TValue_XHashtableState_System_Object_* this_ptr,
        int32_t hash_code,
        app::String* key,
        int32_t index,
        int32_t count,
        int32_t* entry_index
    )
    IL2CPP_REGISTER_METHOD(0x0225AE00, int32_t, ComputeHashCode, app::String* key, int32_t index, int32_t count)
} // namespace app::classes::System::Xml::Linq::XHashtable_1_TValue__XHashtableState_System_Object_
