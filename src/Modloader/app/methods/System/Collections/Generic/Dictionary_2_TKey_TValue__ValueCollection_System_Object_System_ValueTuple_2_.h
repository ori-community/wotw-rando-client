#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_System_ValueTuple_2_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollectio_TKe_TValu_Enumerato_Syste_Objec_Syste_ValueTupl_2_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_ValueTuple_2_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_ValueTuple_2__6.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ValueTuple_2_Int32_Int32_.h>
#include <Modloader/app/structs/ValueTuple_2_Int32_Int32___Array.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Object_System_ValueTuple_2_ {
    IL2CPP_REGISTER_METHOD(
        0x0282E6E0,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_ValueTuple_2_* this_ptr,
        app::Dictionary_2_System_Object_System_ValueTuple_2_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x01A729A0,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_ValueTuple_2_,
        GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_ValueTuple_2_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0282E7B0,
        void,
        CopyTo,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_ValueTuple_2_* this_ptr,
        app::ValueTuple_2_Int32_Int32___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x01A72C10, int32_t, get_Count, app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_ValueTuple_2_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_TValue__get_IsReadOnly,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_ValueTuple_2_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0282E9E0,
        void,
        System_Collections_Generic_ICollection_TValue__Add,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_ValueTuple_2_* this_ptr,
        app::ValueTuple_2_Int32_Int32_ item
    )
    IL2CPP_REGISTER_METHOD(
        0x0282EA40,
        bool,
        System_Collections_Generic_ICollection_TValue__Remove,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_ValueTuple_2_* this_ptr,
        app::ValueTuple_2_Int32_Int32_ item
    )
    IL2CPP_REGISTER_METHOD(
        0x0282EAA0,
        void,
        System_Collections_Generic_ICollection_TValue__Clear,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_ValueTuple_2_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A72D00,
        bool,
        System_Collections_Generic_ICollection_TValue__Contains,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_ValueTuple_2_* this_ptr,
        app::ValueTuple_2_Int32_Int32_ item
    )
    IL2CPP_REGISTER_METHOD(
        0x01A72D90,
        app::IEnumerator_1_System_ValueTuple_2__6*,
        System_Collections_Generic_IEnumerable_TValue__GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_ValueTuple_2_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A72D90,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_ValueTuple_2_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0282EB00,
        void,
        ICollection_CopyTo,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_ValueTuple_2_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        ICollection_get_IsSynchronized,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_ValueTuple_2_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0282EF50,
        app::Object*,
        ICollection_get_SyncRoot,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_ValueTuple_2_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Object_System_ValueTuple_2_
