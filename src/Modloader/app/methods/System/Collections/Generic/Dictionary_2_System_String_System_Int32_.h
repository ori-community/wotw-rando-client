#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_System_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_String_System_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_String_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, app::Dictionary_2_System_String_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_System_String_System_Int32_* this_ptr, app::String* key)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, app::Dictionary_2_System_String_System_Int32_* this_ptr, app::String* key, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02BCDF80, bool, TryGetValue, app::Dictionary_2_System_String_System_Int32_* this_ptr, app::String* key, int32_t* value)
    IL2CPP_REGISTER_METHOD(0x02BCC050, int32_t, get_Item, app::Dictionary_2_System_String_System_Int32_* this_ptr, app::String* key)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, app::Dictionary_2_System_String_System_Int32_* this_ptr, app::String* key, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor_2, app::Dictionary_2_System_String_System_Int32_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, ctor_3, app::Dictionary_2_System_String_System_Int32_* this_ptr, app::IEqualityComparer_1_System_String_* comparer)
    IL2CPP_REGISTER_METHOD(0x02BCDB30, bool, Remove, app::Dictionary_2_System_String_System_Int32_* this_ptr, app::String* key)
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_System_String_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, app::Dictionary_2_System_String_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BAE050, bool, TryAdd, app::Dictionary_2_System_String_System_Int32_* this_ptr, app::String* key, int32_t value)
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32_*,
        get_Keys,
        app::Dictionary_2_System_String_System_Int32_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_System_String_System_Int32_,
        GetEnumerator,
        app::Dictionary_2_System_String_System_Int32_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Int32_
