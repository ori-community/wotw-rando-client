#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Object_System_UInt32_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_UInt32___Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue__Enumerator_System_Object_System_UInt32_ {
    IL2CPP_REGISTER_METHOD(
        0x00144B50,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_UInt32___Boxed* this_ptr,
        app::Dictionary_2_System_Object_System_UInt32_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x00002890,
        void,
        Dispose,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_UInt32___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001A0B50,
        bool,
        MoveNext,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_UInt32___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00114150,
        uint32_t,
        get_Current,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_UInt32___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001A0B60,
        app::Object*,
        IEnumerator_get_Current,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_UInt32___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001A0C80,
        void,
        IEnumerator_Reset,
        app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_UInt32___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue__Enumerator_System_Object_System_UInt32_
