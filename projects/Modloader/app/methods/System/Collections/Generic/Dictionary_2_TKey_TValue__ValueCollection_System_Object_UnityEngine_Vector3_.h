#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValu_ValueCollectio_TKe_TValu_Enumerato_Syste_Objec_UnityEngin_Vector_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector3__Array.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Object_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(
        0x02834140,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector3_* this_ptr,
        app::Dictionary_2_System_Object_UnityEngine_Vector3_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x01AE1850,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_Vector3_,
        GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector3_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02834210,
        void,
        CopyTo,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector3_* this_ptr,
        app::Vector3__Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x01A72C10, int32_t, get_Count, app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector3_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_TValue__get_IsReadOnly,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector3_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02834450,
        void,
        System_Collections_Generic_ICollection_TValue__Add,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector3_* this_ptr,
        app::Vector3 item
    )
    IL2CPP_REGISTER_METHOD(
        0x028344B0,
        bool,
        System_Collections_Generic_ICollection_TValue__Remove,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector3_* this_ptr,
        app::Vector3 item
    )
    IL2CPP_REGISTER_METHOD(
        0x02834510,
        void,
        System_Collections_Generic_ICollection_TValue__Clear,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector3_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01AE1BF0,
        bool,
        System_Collections_Generic_ICollection_TValue__Contains,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector3_* this_ptr,
        app::Vector3 item
    )
    IL2CPP_REGISTER_METHOD(
        0x01AE1C40,
        app::IEnumerator_1_UnityEngine_Vector3_*,
        System_Collections_Generic_IEnumerable_TValue__GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector3_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01AE1C40,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector3_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02834570,
        void,
        ICollection_CopyTo,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector3_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        ICollection_get_IsSynchronized,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector3_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x028349C0,
        app::Object*,
        ICollection_get_SyncRoot,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector3_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Object_UnityEngine_Vector3_
