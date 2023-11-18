#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Object___Boxed.h>
#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Int32_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x001363F0, void, ctor, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Object___Boxed * this_ptr, app::Dictionary_2_System_Int32_System_Object_* dictionary, int32_t get_enumerator_ret_type))
    IL2CPP_REGISTER_METHOD(0x001B58E0, bool, MoveNext, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00136440, app::KeyValuePair_2_System_Int32_System_Object_, get_Current, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001B58F0, app::Object*, IEnumerator_get_Current, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001B5900, void, IEnumerator_Reset, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001B59D0, app::DictionaryEntry, IDictionaryEnumerator_get_Entry, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001B5B50, app::Object*, IDictionaryEnumerator_get_Key, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001B5C90, app::Object*, IDictionaryEnumerator_get_Value, (app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_System_Object___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_Int32_System_Object_
