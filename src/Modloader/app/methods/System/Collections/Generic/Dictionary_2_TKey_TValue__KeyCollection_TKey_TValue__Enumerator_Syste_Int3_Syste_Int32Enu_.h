#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Int32Enum_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32_System_Int32Enum___Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue__Enumerator_System_Int32_System_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(
        0x00144B50,
        void,
        ctor,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32_System_Int32Enum___Boxed* this_ptr,
        app::Dictionary_2_System_Int32_System_Int32Enum_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x00002890,
        void,
        Dispose,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32_System_Int32Enum___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00145980,
        bool,
        MoveNext,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32_System_Int32Enum___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00114150,
        int32_t,
        get_Current,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32_System_Int32Enum___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00145990,
        app::Object*,
        IEnumerator_get_Current,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32_System_Int32Enum___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00145AB0,
        void,
        IEnumerator_Reset,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32_System_Int32Enum___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue__Enumerator_System_Int32_System_Int32Enum_
