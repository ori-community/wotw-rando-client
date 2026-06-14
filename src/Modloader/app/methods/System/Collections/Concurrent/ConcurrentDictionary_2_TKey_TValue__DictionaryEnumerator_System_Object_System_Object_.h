#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConcurrentDictionary_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/ConcurrentDictionary_2_TKey_TValue_DictionaryEnumerator_System_Object_System_Object_.h>
#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Concurrent::ConcurrentDictionary_2_TKey_TValue__DictionaryEnumerator_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x02ADD500,
        app::DictionaryEntry,
        get_Entry,
        app::ConcurrentDictionary_2_TKey_TValue_DictionaryEnumerator_System_Object_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02ADD6A0,
        app::Object*,
        get_Key,
        app::ConcurrentDictionary_2_TKey_TValue_DictionaryEnumerator_System_Object_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02ADD750,
        app::Object*,
        get_Value,
        app::ConcurrentDictionary_2_TKey_TValue_DictionaryEnumerator_System_Object_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02ADD810,
        app::Object*,
        get_Current,
        app::ConcurrentDictionary_2_TKey_TValue_DictionaryEnumerator_System_Object_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02ADC8C0,
        void,
        ctor,
        app::ConcurrentDictionary_2_TKey_TValue_DictionaryEnumerator_System_Object_System_Object_* this_ptr,
        app::ConcurrentDictionary_2_System_Object_System_Object_* dictionary
    )
    IL2CPP_REGISTER_METHOD(0x02ADD8D0, bool, MoveNext, app::ConcurrentDictionary_2_TKey_TValue_DictionaryEnumerator_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02ADD960, void, Reset, app::ConcurrentDictionary_2_TKey_TValue_DictionaryEnumerator_System_Object_System_Object_* this_ptr)
} // namespace app::classes::System::Collections::Concurrent::ConcurrentDictionary_2_TKey_TValue__DictionaryEnumerator_System_Object_System_Object_
