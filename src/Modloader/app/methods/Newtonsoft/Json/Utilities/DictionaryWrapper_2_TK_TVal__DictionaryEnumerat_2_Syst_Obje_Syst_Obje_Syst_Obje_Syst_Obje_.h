#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object___Boxed.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Newtonsoft::Json::Utilities::
    DictionaryWrapper_2_TKey_TValue__DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x001C9550,
        app::DictionaryEntry,
        get_Entry,
        app::DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001C9580,
        app::Object*,
        get_Key,
        app::DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001C95D0,
        app::Object*,
        get_Value,
        app::DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001C9630,
        app::Object*,
        get_Current,
        app::DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001C94B0,
        void,
        ctor,
        app::DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object___Boxed* this_ptr,
        app::IEnumerator_1_KeyValuePair_2_System_Object_System_Object_* e
    )
    IL2CPP_REGISTER_METHOD(
        0x001C9640,
        bool,
        MoveNext,
        app::DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001C96D0,
        void,
        Reset,
        app::DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object___Boxed* this_ptr
    )
} // namespace
  // app::classes::Newtonsoft::Json::Utilities::DictionaryWrapper_2_TKey_TValue__DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object_
