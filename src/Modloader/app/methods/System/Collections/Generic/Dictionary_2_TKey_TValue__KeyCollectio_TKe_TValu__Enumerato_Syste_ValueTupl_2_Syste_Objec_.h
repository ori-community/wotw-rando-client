#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_ValueTuple_2_System_Object_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_ValueTuple_2_System_Object___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ValueTuple_2_Object_Object_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue__Enumerator_System_ValueTuple_2_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x00142E50,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_ValueTuple_2_System_Object___Boxed* this_ptr,
        app::Dictionary_2_System_ValueTuple_2_System_Object_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x00002890,
        void,
        Dispose,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_ValueTuple_2_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001CEA60,
        bool,
        MoveNext,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_ValueTuple_2_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00136440,
        app::ValueTuple_2_Object_Object_,
        get_Current,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_ValueTuple_2_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001CEA70,
        app::Object*,
        IEnumerator_get_Current,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_ValueTuple_2_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001CEB90,
        void,
        IEnumerator_Reset,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_ValueTuple_2_System_Object___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue__Enumerator_System_ValueTuple_2_System_Object_
