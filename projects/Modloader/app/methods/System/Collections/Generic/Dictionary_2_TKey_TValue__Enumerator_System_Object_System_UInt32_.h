#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_System_UInt32_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Object_System_UInt32___Boxed.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_UInt32_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Object_System_UInt32_ {
    IL2CPP_REGISTER_METHOD(
        0x001363F0,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_UInt32___Boxed* this_ptr,
        app::Dictionary_2_System_Object_System_UInt32_* dictionary,
        int32_t get_enumerator_ret_type
    )
    IL2CPP_REGISTER_METHOD(0x001BE0A0, bool, MoveNext, app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_UInt32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00136440,
        app::KeyValuePair_2_System_Object_System_UInt32_,
        get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_UInt32___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_UInt32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001BE0B0,
        app::Object*,
        IEnumerator_get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_UInt32___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x001BE0C0, void, IEnumerator_Reset, app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_UInt32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001BE190,
        app::DictionaryEntry,
        IDictionaryEnumerator_get_Entry,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_UInt32___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001BE1C0,
        app::Object*,
        IDictionaryEnumerator_get_Key,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_UInt32___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001BE2B0,
        app::Object*,
        IDictionaryEnumerator_get_Value,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_System_UInt32___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Object_System_UInt32_
