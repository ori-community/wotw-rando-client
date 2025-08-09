#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_UInt32_RuntimeGuidMapping_CacheEntry___Boxed.h>
#include <Modloader/app/structs/KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_UInt32_RuntimeGuidMapping_CacheEntry_ {
    IL2CPP_REGISTER_METHOD(
        0x00140C40,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_Enumerator_System_UInt32_RuntimeGuidMapping_CacheEntry___Boxed* this_ptr,
        app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_* dictionary,
        int32_t get_enumerator_ret_type
    )
    IL2CPP_REGISTER_METHOD(0x00140C80, bool, MoveNext, app::Dictionary_2_TKey_TValue_Enumerator_System_UInt32_RuntimeGuidMapping_CacheEntry___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00140C90,
        app::KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry_,
        get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_UInt32_RuntimeGuidMapping_CacheEntry___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::Dictionary_2_TKey_TValue_Enumerator_System_UInt32_RuntimeGuidMapping_CacheEntry___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00140CB0,
        app::Object*,
        IEnumerator_get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_UInt32_RuntimeGuidMapping_CacheEntry___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00140CC0,
        void,
        IEnumerator_Reset,
        app::Dictionary_2_TKey_TValue_Enumerator_System_UInt32_RuntimeGuidMapping_CacheEntry___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00140D90,
        app::DictionaryEntry,
        IDictionaryEnumerator_get_Entry,
        app::Dictionary_2_TKey_TValue_Enumerator_System_UInt32_RuntimeGuidMapping_CacheEntry___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00140DC0,
        app::Object*,
        IDictionaryEnumerator_get_Key,
        app::Dictionary_2_TKey_TValue_Enumerator_System_UInt32_RuntimeGuidMapping_CacheEntry___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00140F00,
        app::Object*,
        IDictionaryEnumerator_get_Value,
        app::Dictionary_2_TKey_TValue_Enumerator_System_UInt32_RuntimeGuidMapping_CacheEntry___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_UInt32_RuntimeGuidMapping_CacheEntry_
