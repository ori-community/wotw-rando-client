#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object_.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/IEnumerator_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Array.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x01A72C10, int32_t, get_Count, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, System_Collections_Generic_ICollection_TKey__get_IsReadOnly, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026A9D70, app::Object*, ICollection_get_SyncRoot, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026A9540, void, ctor, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object_ * this_ptr, app::Dictionary_2_System_Object_System_Object_* dictionary))
    IL2CPP_REGISTER_METHODINFO(0x0475D530, Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A729A0, app::Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_System_Object_, GetEnumerator, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026A9610, void, CopyTo, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object_ * this_ptr, app::Object__Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04790378, Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026A9840, void, System_Collections_Generic_ICollection_TKey__Add, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHODINFO(0x04765000, Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object__System_Collections_Generic_ICollection_TKey__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026A98A0, void, System_Collections_Generic_ICollection_TKey__Clear, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04769FB8, Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object__System_Collections_Generic_ICollection_TKey__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A72D00, bool, System_Collections_Generic_ICollection_TKey__Contains, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x026A9900, bool, System_Collections_Generic_ICollection_TKey__Remove, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHODINFO(0x0473F5A8, Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object__System_Collections_Generic_ICollection_TKey__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A72D90, app::IEnumerator_1_System_Object_*, System_Collections_Generic_IEnumerable_TKey__GetEnumerator, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A72D90, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026A9960, void, ICollection_CopyTo, (app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047368A8, Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object__System_Collections_ICollection_CopyTo__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__KeyCollection_System_Object_System_Object_
