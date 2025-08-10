#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_UnityEngine_Color_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_Color___Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue__Enumerator_System_Object_UnityEngine_Color_ {
    IL2CPP_REGISTER_METHOD(
        0x00142E50,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_Color___Boxed* this_ptr,
        app::Dictionary_2_System_Object_UnityEngine_Color_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x00002890,
        void,
        Dispose,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_Color___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001A1990,
        bool,
        MoveNext,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_Color___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00136440,
        app::Color,
        get_Current,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_Color___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001A19A0,
        app::Object*,
        IEnumerator_get_Current,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_Color___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001A1AC0,
        void,
        IEnumerator_Reset,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_Color___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue__Enumerator_System_Object_UnityEngine_Color_
