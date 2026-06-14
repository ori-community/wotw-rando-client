#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerato_Syste_Objec_UnityEngin_Rec_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Rect__Array.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Object_UnityEngine_Rect_ {
    IL2CPP_REGISTER_METHOD(
        0x02832F00,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Rect_* this_ptr,
        app::Dictionary_2_System_Object_UnityEngine_Rect_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x01A7A830,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_Rect_,
        GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Rect_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02832FD0,
        void,
        CopyTo,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Rect_* this_ptr,
        app::Rect__Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x01A72C10, int32_t, get_Count, app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Rect_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_TValue__get_IsReadOnly,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Rect_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02833200,
        void,
        System_Collections_Generic_ICollection_TValue__Add,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Rect_* this_ptr,
        app::Rect item
    )
    IL2CPP_REGISTER_METHOD(
        0x02833260,
        bool,
        System_Collections_Generic_ICollection_TValue__Remove,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Rect_* this_ptr,
        app::Rect item
    )
    IL2CPP_REGISTER_METHOD(
        0x028332C0,
        void,
        System_Collections_Generic_ICollection_TValue__Clear,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Rect_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A7AB60,
        bool,
        System_Collections_Generic_ICollection_TValue__Contains,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Rect_* this_ptr,
        app::Rect item
    )
    IL2CPP_REGISTER_METHOD(
        0x01A7AC00,
        app::IEnumerator_1_UnityEngine_Rect_*,
        System_Collections_Generic_IEnumerable_TValue__GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Rect_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01A7AC00,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Rect_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02833320,
        void,
        ICollection_CopyTo,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Rect_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        ICollection_get_IsSynchronized,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Rect_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02833760,
        app::Object*,
        ICollection_get_SyncRoot,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Rect_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Object_UnityEngine_Rect_
