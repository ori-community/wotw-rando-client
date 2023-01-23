#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Object_.h>
#include <Modloader/app/structs/Dictionary_2_System_ByteEnum_System_Object_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_ByteEnum_System_Object_.h>
#include <Modloader/app/structs/ByteEnum__Enum__Array.h>
#include <Modloader/app/structs/ByteEnum__Enum.h>
#include <Modloader/app/structs/IEnumerator_1_System_ByteEnum_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_System_ByteEnum_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x01D561A0, void, ctor, (app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Object_ * this_ptr, app::Dictionary_2_System_ByteEnum_System_Object_* dictionary))
    IL2CPP_REGISTER_METHODINFO(0x04719D60, Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Object___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01ADC710, app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_ByteEnum_System_Object_, GetEnumerator, (app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D56270, void, CopyTo, (app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Object_ * this_ptr, app::ByteEnum__Enum__Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0470C400, Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Object__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A72C10, int32_t, get_Count, (app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, System_Collections_Generic_ICollection_TKey__get_IsReadOnly, (app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D564A0, void, System_Collections_Generic_ICollection_TKey__Add, (app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Object_ * this_ptr, app::ByteEnum__Enum item))
    IL2CPP_REGISTER_METHODINFO(0x047574B0, Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Object__System_Collections_Generic_ICollection_TKey__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D56500, void, System_Collections_Generic_ICollection_TKey__Clear, (app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04766F40, Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Object__System_Collections_Generic_ICollection_TKey__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A72D00, bool, System_Collections_Generic_ICollection_TKey__Contains, (app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Object_ * this_ptr, app::ByteEnum__Enum item))
    IL2CPP_REGISTER_METHOD(0x01D56560, bool, System_Collections_Generic_ICollection_TKey__Remove, (app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Object_ * this_ptr, app::ByteEnum__Enum item))
    IL2CPP_REGISTER_METHODINFO(0x0473B930, Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Object__System_Collections_Generic_ICollection_TKey__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01ADCAA0, app::IEnumerator_1_System_ByteEnum_*, System_Collections_Generic_IEnumerable_TKey__GetEnumerator, (app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01ADCAA0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D565C0, void, ICollection_CopyTo, (app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Object_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0475D7A8, Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Object__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D56A10, app::Object*, ICollection_get_SyncRoot, (app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Object_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_System_ByteEnum_System_Object_
