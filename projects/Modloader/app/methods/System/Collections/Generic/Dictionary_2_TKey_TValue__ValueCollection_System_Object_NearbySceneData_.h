#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Object_NearbySceneData_.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_NearbySceneData_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_NearbySceneData_.h>
#include <Modloader/app/structs/NearbySceneData__Array.h>
#include <Modloader/app/structs/NearbySceneData.h>
#include <Modloader/app/structs/IEnumerator_1_NearbySceneData_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Object_NearbySceneData_ {
    IL2CPP_REGISTER_METHOD(0x026BAED0, void, ctor, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_NearbySceneData_ * this_ptr, app::Dictionary_2_System_Object_NearbySceneData_* dictionary))
    IL2CPP_REGISTER_METHODINFO(0x04760BA8, Dictionary_2_TKey_TValue_ValueCollection_System_Object_NearbySceneData___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A7BB40, app::Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_NearbySceneData_, GetEnumerator, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_NearbySceneData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026BAFA0, void, CopyTo, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_NearbySceneData_ * this_ptr, app::NearbySceneData__Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04724AA8, Dictionary_2_TKey_TValue_ValueCollection_System_Object_NearbySceneData__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A72C10, int32_t, get_Count, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_NearbySceneData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, System_Collections_Generic_ICollection_TValue__get_IsReadOnly, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_NearbySceneData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026BB1E0, void, System_Collections_Generic_ICollection_TValue__Add, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_NearbySceneData_ * this_ptr, app::NearbySceneData item))
    IL2CPP_REGISTER_METHODINFO(0x04728190, Dictionary_2_TKey_TValue_ValueCollection_System_Object_NearbySceneData__System_Collections_Generic_ICollection_TValue__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026BB240, bool, System_Collections_Generic_ICollection_TValue__Remove, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_NearbySceneData_ * this_ptr, app::NearbySceneData item))
    IL2CPP_REGISTER_METHODINFO(0x04726C58, Dictionary_2_TKey_TValue_ValueCollection_System_Object_NearbySceneData__System_Collections_Generic_ICollection_TValue__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026BB2A0, void, System_Collections_Generic_ICollection_TValue__Clear, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_NearbySceneData_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04728FD0, Dictionary_2_TKey_TValue_ValueCollection_System_Object_NearbySceneData__System_Collections_Generic_ICollection_TValue__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A7BE90, bool, System_Collections_Generic_ICollection_TValue__Contains, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_NearbySceneData_ * this_ptr, app::NearbySceneData item))
    IL2CPP_REGISTER_METHOD(0x01A7BF40, app::IEnumerator_1_NearbySceneData_*, System_Collections_Generic_IEnumerable_TValue__GetEnumerator, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_NearbySceneData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A7BF40, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_NearbySceneData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026BB300, void, ICollection_CopyTo, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_NearbySceneData_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047987F0, Dictionary_2_TKey_TValue_ValueCollection_System_Object_NearbySceneData__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_NearbySceneData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026BB750, app::Object*, ICollection_get_SyncRoot, (app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_NearbySceneData_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_TKey_TValue__ValueCollection_System_Object_NearbySceneData_
