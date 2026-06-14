#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Int32___Boxed.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_System_Int32_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Int32_System_Int32_ {
    IL2CPP_REGISTER_METHOD(
        0x00107C20,
        app::KeyValuePair_2_System_Int32_System_Int32_,
        get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Int32___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00138C70, bool, MoveNext, app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00135C80,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Int32___Boxed* this_ptr,
        app::Dictionary_2_System_Int32_System_Int32_* dictionary,
        int32_t get_enumerator_ret_type
    )
    IL2CPP_REGISTER_METHOD(
        0x00138C80,
        app::Object*,
        IEnumerator_get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Int32___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00138C90, void, IEnumerator_Reset, app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00138D60,
        app::DictionaryEntry,
        IDictionaryEnumerator_get_Entry,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Int32___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00138D90,
        app::Object*,
        IDictionaryEnumerator_get_Key,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Int32___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00138ED0,
        app::Object*,
        IDictionaryEnumerator_get_Value,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Int32___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Int32_System_Int32_
