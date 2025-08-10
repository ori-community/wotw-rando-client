#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_UnityEngine_Vector4_.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_ValueCollectio_TKe_TValu_Enumerato_Syste_Objec_UnityEngin_Vector_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector4_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_UnityEngine_Vector4_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/Vector4__Array.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Object_UnityEngine_Vector4_ {
    IL2CPP_REGISTER_METHOD(
        0x02834A50,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector4_* this_ptr,
        app::Dictionary_2_System_Object_UnityEngine_Vector4_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x01A7A830,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_Vector4_,
        GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector4_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02834B20,
        void,
        CopyTo,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector4_* this_ptr,
        app::Vector4__Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x01A72C10, int32_t, get_Count, app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector4_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_TValue__get_IsReadOnly,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector4_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02834D50,
        void,
        System_Collections_Generic_ICollection_TValue__Add,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector4_* this_ptr,
        app::Vector4 item
    )
    IL2CPP_REGISTER_METHOD(
        0x02834DB0,
        bool,
        System_Collections_Generic_ICollection_TValue__Remove,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector4_* this_ptr,
        app::Vector4 item
    )
    IL2CPP_REGISTER_METHOD(
        0x02834E10,
        void,
        System_Collections_Generic_ICollection_TValue__Clear,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector4_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A7AB60,
        bool,
        System_Collections_Generic_ICollection_TValue__Contains,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector4_* this_ptr,
        app::Vector4 item
    )
    IL2CPP_REGISTER_METHOD(
        0x01A7AC00,
        app::IEnumerator_1_UnityEngine_Vector4_*,
        System_Collections_Generic_IEnumerable_TValue__GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector4_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A7AC00,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector4_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02834E70,
        void,
        ICollection_CopyTo,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector4_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        ICollection_get_IsSynchronized,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector4_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x028352B0,
        app::Object*,
        ICollection_get_SyncRoot,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector4_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Object_UnityEngine_Vector4_
