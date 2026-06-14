#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Single_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Single___Boxed.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_System_Single_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Int32_System_Single_ {
    IL2CPP_REGISTER_METHOD(
        0x00135C80,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Single___Boxed* this_ptr,
        app::Dictionary_2_System_Int32_System_Single_* dictionary,
        int32_t get_enumerator_ret_type
    )
    IL2CPP_REGISTER_METHOD(0x001B5D80, bool, MoveNext, app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00107C20,
        app::KeyValuePair_2_System_Int32_System_Single_,
        get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Single___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001B5D90,
        app::Object*,
        IEnumerator_get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Single___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x001B5DA0, void, IEnumerator_Reset, app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001B5E70,
        app::DictionaryEntry,
        IDictionaryEnumerator_get_Entry,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Single___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001B5EA0,
        app::Object*,
        IDictionaryEnumerator_get_Key,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Single___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001B5FE0,
        app::Object*,
        IDictionaryEnumerator_get_Value,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Single___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Int32_System_Single_
