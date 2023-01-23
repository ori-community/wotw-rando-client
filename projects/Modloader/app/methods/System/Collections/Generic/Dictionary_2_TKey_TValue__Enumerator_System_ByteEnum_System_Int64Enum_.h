#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int64Enum___Boxed.h>
#include <Modloader/app/structs/Dictionary_2_System_ByteEnum_System_Int64Enum_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_ByteEnum_System_Int64Enum_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/DictionaryEntry.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_ByteEnum_System_Int64Enum_ {
    IL2CPP_REGISTER_METHOD(0x001363F0, void, ctor, (app::Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int64Enum___Boxed * this_ptr, app::Dictionary_2_System_ByteEnum_System_Int64Enum_* dictionary, int32_t get_enumerator_ret_type))
    IL2CPP_REGISTER_METHOD(0x00136430, bool, MoveNext, (app::Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int64Enum___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470BA80, Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int64Enum__MoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00136440, app::KeyValuePair_2_System_ByteEnum_System_Int64Enum_, get_Current, (app::Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int64Enum___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int64Enum___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00136450, app::Object*, IEnumerator_get_Current, (app::Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int64Enum___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04705998, Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int64Enum__System_Collections_IEnumerator_get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00136460, void, IEnumerator_Reset, (app::Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int64Enum___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476F6A0, Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int64Enum__System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00136530, app::DictionaryEntry, IDictionaryEnumerator_get_Entry, (app::Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int64Enum___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04743830, Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int64Enum__System_Collections_IDictionaryEnumerator_get_Entry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00136560, app::Object*, IDictionaryEnumerator_get_Key, (app::Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int64Enum___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047595C8, Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int64Enum__System_Collections_IDictionaryEnumerator_get_Key__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001366A0, app::Object*, IDictionaryEnumerator_get_Value, (app::Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int64Enum___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470E038, Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int64Enum__System_Collections_IDictionaryEnumerator_get_Value__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__Enumerator_System_ByteEnum_System_Int64Enum_
