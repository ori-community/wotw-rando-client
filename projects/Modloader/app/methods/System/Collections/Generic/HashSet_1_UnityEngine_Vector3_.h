#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HashSet_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/IEqualityComparer_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/Vector3__Array.h>
#include <Modloader/app/structs/HashSet_1_T_Enumerator_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/IEnumerator_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Predicate_1_UnityEngine_Vector3_.h>

namespace app::classes::System::Collections::Generic::HashSet_1_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor_1, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04794190, HashSet_1_UnityEngine_Vector3___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x03016DB0, bool, Contains, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr, app::Vector3 item))
    IL2CPP_REGISTER_METHODINFO(0x04791A78, HashSet_1_UnityEngine_Vector3__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x03016D70, bool, Add, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr, app::Vector3 item))
    IL2CPP_REGISTER_METHODINFO(0x0471ACE8, HashSet_1_UnityEngine_Vector3__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB43D0, void, ctor_2, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr, app::IEqualityComparer_1_UnityEngine_Vector3_* comparer))
    IL2CPP_REGISTER_METHOD(0x02AB4420, void, ctor_3, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr, app::IEnumerable_1_UnityEngine_Vector3_* collection))
    IL2CPP_REGISTER_METHOD(0x030167A0, void, ctor_4, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr, app::IEnumerable_1_UnityEngine_Vector3_* collection, app::IEqualityComparer_1_UnityEngine_Vector3_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0478BEA8, HashSet_1_UnityEngine_Vector3___ctor_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB46E0, void, ctor_5, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x030169F0, void, CopyFrom, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr, app::HashSet_1_UnityEngine_Vector3_* source))
    IL2CPP_REGISTER_METHOD(0x03016D70, void, System_Collections_Generic_ICollection_T__Add, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr, app::Vector3 item))
    IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB4C70, void, CopyTo_1, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr, app::Vector3__Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x03016F80, bool, Remove, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr, app::Vector3 item))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030172C0, app::HashSet_1_T_Enumerator_UnityEngine_Vector3_, GetEnumerator, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03017300, app::IEnumerator_1_UnityEngine_Vector3_*, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03017300, app::IEnumerator*, IEnumerable_GetEnumerator, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03017390, void, GetObjectData, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x0474FBB0, HashSet_1_UnityEngine_Vector3__GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030175B0, void, OnDeserialization, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr, app::Object* sender))
    IL2CPP_REGISTER_METHODINFO(0x04727808, HashSet_1_UnityEngine_Vector3__OnDeserialization__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030178E0, void, UnionWith, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr, app::IEnumerable_1_UnityEngine_Vector3_* other))
    IL2CPP_REGISTER_METHODINFO(0x0472B668, HashSet_1_UnityEngine_Vector3__UnionWith__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB5840, void, CopyTo_2, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr, app::Vector3__Array* array))
    IL2CPP_REGISTER_METHOD(0x03017B50, void, CopyTo_3, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr, app::Vector3__Array* array, int32_t array_index, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x0471A440, HashSet_1_UnityEngine_Vector3__CopyTo_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x03017DD0, int32_t, RemoveWhere, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr, app::Predicate_1_UnityEngine_Vector3_* match))
    IL2CPP_REGISTER_METHODINFO(0x047585F8, HashSet_1_UnityEngine_Vector3__RemoveWhere__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_UnityEngine_Vector3_*, get_Comparer, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03017F90, void, TrimExcess, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030181E0, void, Initialize, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x030182E0, void, IncreaseCapacity, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04741AD8, HashSet_1_UnityEngine_Vector3__IncreaseCapacity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030183E0, void, SetCapacity, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr, int32_t new_size))
    IL2CPP_REGISTER_METHOD(0x03018580, bool, AddIfNotPresent, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x03018960, void, AddValue, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr, int32_t index, int32_t hash_code, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x02AB6720, bool, AreEqualityComparersEqual, (app::HashSet_1_UnityEngine_Vector3_ * set1, app::HashSet_1_UnityEngine_Vector3_* set2))
    IL2CPP_REGISTER_METHOD(0x03018AC0, int32_t, InternalGetHashCode, (app::HashSet_1_UnityEngine_Vector3_ * this_ptr, app::Vector3 item))
} // namespace app::classes::System::Collections::Generic::HashSet_1_UnityEngine_Vector3_
