#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_ValueCollecti_TK_TVal_Enumerat_Syst_UInt_RuntimeGuidMappi_CacheEnt_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_RuntimeGuidMapping_CacheEntry_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RuntimeGuidMapping_CacheEntry.h>
#include <Modloader/app/structs/RuntimeGuidMapping_CacheEntry__Array.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_ {
    IL2CPP_REGISTER_METHOD(
        0x02836510,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_* this_ptr,
        app::Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x01A729A0,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_RuntimeGuidMapping_CacheEntry_,
        GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x028365E0,
        void,
        CopyTo,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_* this_ptr,
        app::RuntimeGuidMapping_CacheEntry__Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x01A72C10, int32_t, get_Count, app::Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_TValue__get_IsReadOnly,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02836810,
        void,
        System_Collections_Generic_ICollection_TValue__Add,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_* this_ptr,
        app::RuntimeGuidMapping_CacheEntry item
    )
    IL2CPP_REGISTER_METHOD(
        0x02836870,
        bool,
        System_Collections_Generic_ICollection_TValue__Remove,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_* this_ptr,
        app::RuntimeGuidMapping_CacheEntry item
    )
    IL2CPP_REGISTER_METHOD(
        0x028368D0,
        void,
        System_Collections_Generic_ICollection_TValue__Clear,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A72D00,
        bool,
        System_Collections_Generic_ICollection_TValue__Contains,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_* this_ptr,
        app::RuntimeGuidMapping_CacheEntry item
    )
    IL2CPP_REGISTER_METHOD(
        0x01A72D90,
        app::IEnumerator_1_RuntimeGuidMapping_CacheEntry_*,
        System_Collections_Generic_IEnumerable_TValue__GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A72D90,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02836930,
        void,
        ICollection_CopyTo,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        ICollection_get_IsSynchronized,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02836D80,
        app::Object*,
        ICollection_get_SyncRoot,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_
