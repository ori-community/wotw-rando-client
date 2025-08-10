#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Object_FullSerializer_Internal_fsOption_1___Boxed.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_FullSerializer_Internal_fsOption_1_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Object_FullSerializer_Internal_fsOption_1_ {
    IL2CPP_REGISTER_METHOD(
        0x00135490,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_FullSerializer_Internal_fsOption_1___Boxed* this_ptr,
        app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_* dictionary,
        int32_t get_enumerator_ret_type
    )
    IL2CPP_REGISTER_METHOD(
        0x001B9B60,
        bool,
        MoveNext,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_FullSerializer_Internal_fsOption_1___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001354E0,
        app::KeyValuePair_2_System_Object_FullSerializer_Internal_fsOption_1_,
        get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_FullSerializer_Internal_fsOption_1___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00002890,
        void,
        Dispose,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_FullSerializer_Internal_fsOption_1___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001B9B70,
        app::Object*,
        IEnumerator_get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_FullSerializer_Internal_fsOption_1___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001B9B80,
        void,
        IEnumerator_Reset,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_FullSerializer_Internal_fsOption_1___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001B9C60,
        app::DictionaryEntry,
        IDictionaryEnumerator_get_Entry,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_FullSerializer_Internal_fsOption_1___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001B9DF0,
        app::Object*,
        IDictionaryEnumerator_get_Key,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_FullSerializer_Internal_fsOption_1___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001B9EE0,
        app::Object*,
        IDictionaryEnumerator_get_Value,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_FullSerializer_Internal_fsOption_1___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Object_FullSerializer_Internal_fsOption_1_
