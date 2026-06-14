#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ByteEnum__Enum.h>
#include <Modloader/app/structs/ByteEnum__Enum__Array.h>
#include <Modloader/app/structs/Dictionary_2_System_ByteEnum_SpiritShardIconsCollection_Icons_.h>
#include <Modloader/app/structs/Dictionary_2_TK_TVal_KeyCollecti_TK_TVal_Enumerat_Syst_ByteEn_SpiritShardIconsCollecti_Ic_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_SpiritShardIconsCollection_Icons_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_ByteEnum_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_System_ByteEnum_SpiritShardIconsCollection_Icons_ {
    IL2CPP_REGISTER_METHOD(
        0x01D534A0,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_SpiritShardIconsCollection_Icons_* this_ptr,
        app::Dictionary_2_System_ByteEnum_SpiritShardIconsCollection_Icons_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x01ADC710,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_ByteEnum_SpiritShardIconsCollection_Icons_,
        GetEnumerator,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_SpiritShardIconsCollection_Icons_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01D53570,
        void,
        CopyTo,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_SpiritShardIconsCollection_Icons_* this_ptr,
        app::ByteEnum__Enum__Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x01A72C10,
        int32_t,
        get_Count,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_SpiritShardIconsCollection_Icons_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_TKey__get_IsReadOnly,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_SpiritShardIconsCollection_Icons_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01D537B0,
        void,
        System_Collections_Generic_ICollection_TKey__Add,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_SpiritShardIconsCollection_Icons_* this_ptr,
        app::ByteEnum__Enum item
    )
    IL2CPP_REGISTER_METHOD(
        0x01D53810,
        void,
        System_Collections_Generic_ICollection_TKey__Clear,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_SpiritShardIconsCollection_Icons_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A72D00,
        bool,
        System_Collections_Generic_ICollection_TKey__Contains,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_SpiritShardIconsCollection_Icons_* this_ptr,
        app::ByteEnum__Enum item
    )
    IL2CPP_REGISTER_METHOD(
        0x01D53870,
        bool,
        System_Collections_Generic_ICollection_TKey__Remove,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_SpiritShardIconsCollection_Icons_* this_ptr,
        app::ByteEnum__Enum item
    )
    IL2CPP_REGISTER_METHOD(
        0x01ADCAA0,
        app::IEnumerator_1_System_ByteEnum_*,
        System_Collections_Generic_IEnumerable_TKey__GetEnumerator,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_SpiritShardIconsCollection_Icons_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01ADCAA0,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_SpiritShardIconsCollection_Icons_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01D538D0,
        void,
        ICollection_CopyTo,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_SpiritShardIconsCollection_Icons_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        ICollection_get_IsSynchronized,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_SpiritShardIconsCollection_Icons_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01D53D10,
        app::Object*,
        ICollection_get_SyncRoot,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_SpiritShardIconsCollection_Icons_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_System_ByteEnum_SpiritShardIconsCollection_Icons_
