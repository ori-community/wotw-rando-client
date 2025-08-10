#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/Dictionary_2_TK_TVal_ValueCollecti_TK_TVal_Enumerat_Syst_Obje_KeyValueP_2_Sys_Obj_Sys_Obj_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollectio_Syste_Objec_KeyValuePai_2_Syste_Objec_Syste_Objec_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Object___Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Object_KeyValuePair_2_System_Object_System_Object__ {
    IL2CPP_REGISTER_METHOD(
        0x026BDBD0,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_KeyValuePair_2_System_Object_System_Object_* this_ptr,
        app::Dictionary_2_System_Object_KeyValuePair_2_System_Object_System_Object_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x01A7A830,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_KeyValuePair_2_System_Object_System_Object_,
        GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_KeyValuePair_2_System_Object_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x026BDCA0,
        void,
        CopyTo,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_KeyValuePair_2_System_Object_System_Object_* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x01A72C10,
        int32_t,
        get_Count,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_KeyValuePair_2_System_Object_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_TValue__get_IsReadOnly,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_KeyValuePair_2_System_Object_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x026BDED0,
        void,
        System_Collections_Generic_ICollection_TValue__Add,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_KeyValuePair_2_System_Object_System_Object_* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object_ item
    )
    IL2CPP_REGISTER_METHOD(
        0x026BDF30,
        bool,
        System_Collections_Generic_ICollection_TValue__Remove,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_KeyValuePair_2_System_Object_System_Object_* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object_ item
    )
    IL2CPP_REGISTER_METHOD(
        0x026BDF90,
        void,
        System_Collections_Generic_ICollection_TValue__Clear,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_KeyValuePair_2_System_Object_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A7AB60,
        bool,
        System_Collections_Generic_ICollection_TValue__Contains,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_KeyValuePair_2_System_Object_System_Object_* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object_ item
    )
    IL2CPP_REGISTER_METHOD(
        0x01A7AC00,
        app::IEnumerator_1_KeyValuePair_2_System_Object_System_Object_*,
        System_Collections_Generic_IEnumerable_TValue__GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_KeyValuePair_2_System_Object_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A7AC00,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_KeyValuePair_2_System_Object_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x026BDFF0,
        void,
        ICollection_CopyTo,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_KeyValuePair_2_System_Object_System_Object_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        ICollection_get_IsSynchronized,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_KeyValuePair_2_System_Object_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x026BE430,
        app::Object*,
        ICollection_get_SyncRoot,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_KeyValuePair_2_System_Object_System_Object_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Object_KeyValuePair_2_System_Object_System_Object__
