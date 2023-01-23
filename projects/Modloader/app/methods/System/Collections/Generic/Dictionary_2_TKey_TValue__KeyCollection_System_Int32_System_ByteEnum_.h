#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_ByteEnum_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_ByteEnum_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32_System_ByteEnum_.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/IEnumerator_1_System_Int32_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_System_Int32_System_ByteEnum_ {
    IL2CPP_REGISTER_METHOD(0x01D5A980, void, ctor, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_ByteEnum_ * this_ptr, app::Dictionary_2_System_Int32_System_ByteEnum_* dictionary))
    IL2CPP_REGISTER_METHODINFO(0x04731F18, Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_ByteEnum___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A78360, app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32_System_ByteEnum_, GetEnumerator, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_ByteEnum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D5AA50, void, CopyTo, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_ByteEnum_ * this_ptr, app::Int32__Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04716E60, Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_ByteEnum__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A72C10, int32_t, get_Count, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_ByteEnum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, System_Collections_Generic_ICollection_TKey__get_IsReadOnly, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_ByteEnum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D5AC80, void, System_Collections_Generic_ICollection_TKey__Add, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_ByteEnum_ * this_ptr, int32_t item))
    IL2CPP_REGISTER_METHODINFO(0x04774C48, Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_ByteEnum__System_Collections_Generic_ICollection_TKey__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D5ACE0, void, System_Collections_Generic_ICollection_TKey__Clear, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_ByteEnum_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472B360, Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_ByteEnum__System_Collections_Generic_ICollection_TKey__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A72D00, bool, System_Collections_Generic_ICollection_TKey__Contains, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_ByteEnum_ * this_ptr, int32_t item))
    IL2CPP_REGISTER_METHOD(0x01D5AD40, bool, System_Collections_Generic_ICollection_TKey__Remove, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_ByteEnum_ * this_ptr, int32_t item))
    IL2CPP_REGISTER_METHODINFO(0x04760260, Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_ByteEnum__System_Collections_Generic_ICollection_TKey__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A786F0, app::IEnumerator_1_System_Int32_*, System_Collections_Generic_IEnumerable_TKey__GetEnumerator, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_ByteEnum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A786F0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_ByteEnum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D5ADA0, void, ICollection_CopyTo, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_ByteEnum_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047037A0, Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_ByteEnum__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_ByteEnum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D5B1F0, app::Object*, ICollection_get_SyncRoot, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_ByteEnum_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_System_Int32_System_ByteEnum_
