#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_String_System_String_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_String_System_String_.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_System_String_System_String_ {
    IL2CPP_REGISTER_METHOD(0x01A72C10, int32_t, get_Count, app::Dictionary_2_TKey_TValue_KeyCollection_System_String_System_String_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x026A9610,
        void,
        CopyTo,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_String_System_String_* this_ptr,
        app::String__Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x01A729A0,
        app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_String_System_String_,
        GetEnumerator,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_String_System_String_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_System_String_System_String_
