#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_UInt32_System_Object_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object___Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue__Enumerator_System_UInt32_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x00144B50,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object___Boxed* this_ptr,
        app::Dictionary_2_System_UInt32_System_Object_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x00002890,
        void,
        Dispose,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001CE460,
        bool,
        MoveNext,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00114150,
        uint32_t,
        get_Current,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001CE470,
        app::Object*,
        IEnumerator_get_Current,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001CE590,
        void,
        IEnumerator_Reset,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue__Enumerator_System_UInt32_System_Object_
