#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ByteEnum__Enum.h>
#include <Modloader/app/structs/ByteEnum__Enum__Array.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_ByteEnum_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_ByteEnum_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int3_Syste_ByteEnu_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_ByteEnum_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Int32_System_ByteEnum_ {
    IL2CPP_REGISTER_METHOD(
        0x01AE33E0,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_ByteEnum_* this_ptr,
        app::Dictionary_2_System_Int32_System_ByteEnum_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x01ADC710,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32_System_ByteEnum_,
        GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_ByteEnum_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01AE34B0,
        void,
        CopyTo,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_ByteEnum_* this_ptr,
        app::ByteEnum__Enum__Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x01A72C10, int32_t, get_Count, app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_ByteEnum_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_TValue__get_IsReadOnly,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_ByteEnum_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01AE36E0,
        void,
        System_Collections_Generic_ICollection_TValue__Add,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_ByteEnum_* this_ptr,
        app::ByteEnum__Enum item
    )
    IL2CPP_REGISTER_METHOD(
        0x01AE3740,
        bool,
        System_Collections_Generic_ICollection_TValue__Remove,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_ByteEnum_* this_ptr,
        app::ByteEnum__Enum item
    )
    IL2CPP_REGISTER_METHOD(
        0x01AE37A0,
        void,
        System_Collections_Generic_ICollection_TValue__Clear,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_ByteEnum_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A72D00,
        bool,
        System_Collections_Generic_ICollection_TValue__Contains,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_ByteEnum_* this_ptr,
        app::ByteEnum__Enum item
    )
    IL2CPP_REGISTER_METHOD(
        0x01ADCAA0,
        app::IEnumerator_1_System_ByteEnum_*,
        System_Collections_Generic_IEnumerable_TValue__GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_ByteEnum_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01ADCAA0,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_ByteEnum_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01AE3800,
        void,
        ICollection_CopyTo,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_ByteEnum_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        ICollection_get_IsSynchronized,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_ByteEnum_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01AE3C50,
        app::Object*,
        ICollection_get_SyncRoot,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_ByteEnum_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Int32_System_ByteEnum_
