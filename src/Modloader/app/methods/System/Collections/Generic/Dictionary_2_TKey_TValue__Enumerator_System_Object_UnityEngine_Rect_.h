#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Rect___Boxed.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Object_UnityEngine_Rect_ {
    IL2CPP_REGISTER_METHOD(
        0x00133A30,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Rect___Boxed* this_ptr,
        app::Dictionary_2_System_Object_UnityEngine_Rect_* dictionary,
        int32_t get_enumerator_ret_type
    )
    IL2CPP_REGISTER_METHOD(0x0013EFF0, bool, MoveNext, app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Rect___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00133A80,
        app::KeyValuePair_2_System_Object_UnityEngine_Rect_,
        get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Rect___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Rect___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0013F000,
        app::Object*,
        IEnumerator_get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Rect___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0013F010, void, IEnumerator_Reset, app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Rect___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0013F0F0,
        app::DictionaryEntry,
        IDictionaryEnumerator_get_Entry,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Rect___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0013F280,
        app::Object*,
        IDictionaryEnumerator_get_Key,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Rect___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0013F370,
        app::Object*,
        IDictionaryEnumerator_get_Value,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Rect___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Object_UnityEngine_Rect_
