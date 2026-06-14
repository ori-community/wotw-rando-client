#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/ActiveAnimationHandle__Array.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_Moon_ActiveAnimationHandle_.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_ValueCollectio_TKe_TValu_Enumerat_Syst_Obje_Mo_ActiveAnimationHand_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_ActiveAnimationHandle_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_Moon_ActiveAnimationHandle_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Object_Moon_ActiveAnimationHandle_ {
    IL2CPP_REGISTER_METHOD(
        0x026B9CB0,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_ActiveAnimationHandle_* this_ptr,
        app::Dictionary_2_System_Object_Moon_ActiveAnimationHandle_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x01A7A830,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_Moon_ActiveAnimationHandle_,
        GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_ActiveAnimationHandle_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x026B9D80,
        void,
        CopyTo,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_ActiveAnimationHandle_* this_ptr,
        app::ActiveAnimationHandle__Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x01A72C10, int32_t, get_Count, app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_ActiveAnimationHandle_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_TValue__get_IsReadOnly,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_ActiveAnimationHandle_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x026B9FB0,
        void,
        System_Collections_Generic_ICollection_TValue__Add,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_ActiveAnimationHandle_* this_ptr,
        app::ActiveAnimationHandle item
    )
    IL2CPP_REGISTER_METHOD(
        0x026BA010,
        bool,
        System_Collections_Generic_ICollection_TValue__Remove,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_ActiveAnimationHandle_* this_ptr,
        app::ActiveAnimationHandle item
    )
    IL2CPP_REGISTER_METHOD(
        0x026BA070,
        void,
        System_Collections_Generic_ICollection_TValue__Clear,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_ActiveAnimationHandle_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A7AB60,
        bool,
        System_Collections_Generic_ICollection_TValue__Contains,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_ActiveAnimationHandle_* this_ptr,
        app::ActiveAnimationHandle item
    )
    IL2CPP_REGISTER_METHOD(
        0x01A7AC00,
        app::IEnumerator_1_Moon_ActiveAnimationHandle_*,
        System_Collections_Generic_IEnumerable_TValue__GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_ActiveAnimationHandle_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A7AC00,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_ActiveAnimationHandle_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x026BA0D0,
        void,
        ICollection_CopyTo,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_ActiveAnimationHandle_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        ICollection_get_IsSynchronized,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_ActiveAnimationHandle_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x026BA510,
        app::Object*,
        ICollection_get_SyncRoot,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_ActiveAnimationHandle_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Object_Moon_ActiveAnimationHandle_
