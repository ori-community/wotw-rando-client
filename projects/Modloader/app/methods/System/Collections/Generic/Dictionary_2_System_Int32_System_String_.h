#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_System_String_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_String_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_String_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_System_String_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Int32_System_String_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, app::Dictionary_2_System_Int32_System_String_* this_ptr, int32_t key, app::String** value)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, app::Dictionary_2_System_Int32_System_String_* this_ptr, int32_t key, app::String* value)
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_String_*,
        get_Keys,
        app::Dictionary_2_System_Int32_System_String_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02BB8880, app::String*, get_Item, app::Dictionary_2_System_Int32_System_String_* this_ptr, int32_t key)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, app::Dictionary_2_System_Int32_System_String_* this_ptr, int32_t key, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_System_Int32_System_String_* this_ptr, int32_t key)
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_String_*,
        get_Values,
        app::Dictionary_2_System_Int32_System_String_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, app::Dictionary_2_System_Int32_System_String_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_System_String_
