#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_UInt64_System_Object___Boxed.h>
#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Dictionary_2_System_UInt64_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_UInt64_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_UInt64_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x001363F0, void, ctor, (app::Dictionary_2_TKey_TValue_Enumerator_System_UInt64_System_Object___Boxed * this_ptr, app::Dictionary_2_System_UInt64_System_Object_* dictionary, int32_t get_enumerator_ret_type))
    IL2CPP_REGISTER_METHOD(0x00141880, bool, MoveNext, (app::Dictionary_2_TKey_TValue_Enumerator_System_UInt64_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00136440, app::KeyValuePair_2_System_UInt64_System_Object_, get_Current, (app::Dictionary_2_TKey_TValue_Enumerator_System_UInt64_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Dictionary_2_TKey_TValue_Enumerator_System_UInt64_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00141890, app::Object*, IEnumerator_get_Current, (app::Dictionary_2_TKey_TValue_Enumerator_System_UInt64_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001418A0, void, IEnumerator_Reset, (app::Dictionary_2_TKey_TValue_Enumerator_System_UInt64_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00141970, app::DictionaryEntry, IDictionaryEnumerator_get_Entry, (app::Dictionary_2_TKey_TValue_Enumerator_System_UInt64_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00141AF0, app::Object*, IDictionaryEnumerator_get_Key, (app::Dictionary_2_TKey_TValue_Enumerator_System_UInt64_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00141C30, app::Object*, IDictionaryEnumerator_get_Value, (app::Dictionary_2_TKey_TValue_Enumerator_System_UInt64_System_Object___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_UInt64_System_Object_
