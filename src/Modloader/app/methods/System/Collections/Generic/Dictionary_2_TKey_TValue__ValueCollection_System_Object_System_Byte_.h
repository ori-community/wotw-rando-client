#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_System_Byte_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Byte_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Byte_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Byte_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Object_System_Byte_ {
    IL2CPP_REGISTER_METHOD(
        0x026BD2D0,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Byte_* this_ptr,
        app::Dictionary_2_System_Object_System_Byte_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x01ADC710,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Byte_,
        GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Byte_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x026BD3A0,
        void,
        CopyTo,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Byte_* this_ptr,
        app::Byte__Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x01A72C10, int32_t, get_Count, app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Byte_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_TValue__get_IsReadOnly,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Byte_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x026BD5D0,
        void,
        System_Collections_Generic_ICollection_TValue__Add,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Byte_* this_ptr,
        uint8_t item
    )
    IL2CPP_REGISTER_METHOD(
        0x026BD630,
        bool,
        System_Collections_Generic_ICollection_TValue__Remove,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Byte_* this_ptr,
        uint8_t item
    )
    IL2CPP_REGISTER_METHOD(
        0x026BD690,
        void,
        System_Collections_Generic_ICollection_TValue__Clear,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Byte_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A72D00,
        bool,
        System_Collections_Generic_ICollection_TValue__Contains,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Byte_* this_ptr,
        uint8_t item
    )
    IL2CPP_REGISTER_METHOD(
        0x01ADCAA0,
        app::IEnumerator_1_System_Byte_*,
        System_Collections_Generic_IEnumerable_TValue__GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Byte_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01ADCAA0,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Byte_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x026BD6F0,
        void,
        ICollection_CopyTo,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Byte_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Byte_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x026BDB40,
        app::Object*,
        ICollection_get_SyncRoot,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Byte_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Object_System_Byte_
