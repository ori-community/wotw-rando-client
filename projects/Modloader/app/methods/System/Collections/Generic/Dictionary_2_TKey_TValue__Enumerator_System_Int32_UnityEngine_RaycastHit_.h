#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_UnityEngine_RaycastHit_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Int32_UnityEngine_RaycastHit___Boxed.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_UnityEngine_RaycastHit_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Int32_UnityEngine_RaycastHit_ {
    IL2CPP_REGISTER_METHOD(
        0x00135060,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_UnityEngine_RaycastHit___Boxed* this_ptr,
        app::Dictionary_2_System_Int32_UnityEngine_RaycastHit_* dictionary,
        int32_t get_enumerator_ret_type
    )
    IL2CPP_REGISTER_METHOD(0x001B6880, bool, MoveNext, app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_UnityEngine_RaycastHit___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001350C0,
        app::KeyValuePair_2_System_Int32_UnityEngine_RaycastHit_,
        get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_UnityEngine_RaycastHit___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_UnityEngine_RaycastHit___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001B6890,
        app::Object*,
        IEnumerator_get_Current,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_UnityEngine_RaycastHit___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x001B68A0, void, IEnumerator_Reset, app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_UnityEngine_RaycastHit___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001B6980,
        app::DictionaryEntry,
        IDictionaryEnumerator_get_Entry,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_UnityEngine_RaycastHit___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001B69B0,
        app::Object*,
        IDictionaryEnumerator_get_Key,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_UnityEngine_RaycastHit___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001B6AF0,
        app::Object*,
        IDictionaryEnumerator_get_Value,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_UnityEngine_RaycastHit___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Int32_UnityEngine_RaycastHit_
