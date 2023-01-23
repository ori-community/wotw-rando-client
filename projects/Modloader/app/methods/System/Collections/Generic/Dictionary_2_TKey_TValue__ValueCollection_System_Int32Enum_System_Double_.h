#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Double_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32Enum_System_Double_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Double_.h>
#include <Modloader/app/structs/Double__Array.h>
#include <Modloader/app/structs/IEnumerator_1_System_Double_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Int32Enum_System_Double_ {
    IL2CPP_REGISTER_METHOD(0x026B4320, void, ctor, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Double_ * this_ptr, app::Dictionary_2_System_Int32Enum_System_Double_* dictionary))
    IL2CPP_REGISTER_METHODINFO(0x0475AEA0, Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Double___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A729A0, app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Double_, GetEnumerator, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026B43F0, void, CopyTo, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Double_ * this_ptr, app::Double__Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0477BC38, Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Double__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A72C10, int32_t, get_Count, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, System_Collections_Generic_ICollection_TValue__get_IsReadOnly, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026B4620, void, System_Collections_Generic_ICollection_TValue__Add, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Double_ * this_ptr, double item))
    IL2CPP_REGISTER_METHODINFO(0x047361A0, Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Double__System_Collections_Generic_ICollection_TValue__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026B4680, bool, System_Collections_Generic_ICollection_TValue__Remove, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Double_ * this_ptr, double item))
    IL2CPP_REGISTER_METHODINFO(0x0472DDE8, Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Double__System_Collections_Generic_ICollection_TValue__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026B46E0, void, System_Collections_Generic_ICollection_TValue__Clear, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04707B10, Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Double__System_Collections_Generic_ICollection_TValue__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026AFA20, bool, System_Collections_Generic_ICollection_TValue__Contains, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Double_ * this_ptr, double item))
    IL2CPP_REGISTER_METHOD(0x01A72D90, app::IEnumerator_1_System_Double_*, System_Collections_Generic_IEnumerable_TValue__GetEnumerator, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A72D90, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026B4740, void, ICollection_CopyTo, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Double_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04719D68, Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Double__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026B4B90, app::Object*, ICollection_get_SyncRoot, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_System_Double_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Int32Enum_System_Double_
