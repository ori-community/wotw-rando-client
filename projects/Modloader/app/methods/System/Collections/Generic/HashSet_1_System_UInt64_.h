#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HashSet_1_System_UInt64_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_UInt64_.h>
#include <Modloader/app/structs/IEnumerable_1_System_UInt64_.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/UInt64__Array.h>
#include <Modloader/app/structs/HashSet_1_T_Enumerator_System_UInt64_.h>
#include <Modloader/app/structs/IEnumerator_1_System_UInt64_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Predicate_1_UInt64_.h>

namespace app::classes::System::Collections::Generic::HashSet_1_System_UInt64_ {
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, (app::HashSet_1_System_UInt64_ * this_ptr, uint64_t item))
    IL2CPP_REGISTER_METHODINFO(0x0478E720, HashSet_1_System_UInt64__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ABCA70, bool, Remove, (app::HashSet_1_System_UInt64_ * this_ptr, uint64_t item))
    IL2CPP_REGISTER_METHODINFO(0x04771E00, HashSet_1_System_UInt64__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ABC8E0, bool, Contains, (app::HashSet_1_System_UInt64_ * this_ptr, uint64_t item))
    IL2CPP_REGISTER_METHODINFO(0x04796110, HashSet_1_System_UInt64__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor_1, (app::HashSet_1_System_UInt64_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04797400, HashSet_1_System_UInt64___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB43D0, void, ctor_2, (app::HashSet_1_System_UInt64_ * this_ptr, app::IEqualityComparer_1_System_UInt64_* comparer))
    IL2CPP_REGISTER_METHOD(0x02AB4420, void, ctor_3, (app::HashSet_1_System_UInt64_ * this_ptr, app::IEnumerable_1_System_UInt64_* collection))
    IL2CPP_REGISTER_METHOD(0x02AC1C70, void, ctor_4, (app::HashSet_1_System_UInt64_ * this_ptr, app::IEnumerable_1_System_UInt64_* collection, app::IEqualityComparer_1_System_UInt64_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0476D950, HashSet_1_System_UInt64___ctor_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB46E0, void, ctor_5, (app::HashSet_1_System_UInt64_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x02AC1EC0, void, CopyFrom, (app::HashSet_1_System_UInt64_ * this_ptr, app::HashSet_1_System_UInt64_* source))
    IL2CPP_REGISTER_METHOD(0x02AB4A60, void, System_Collections_Generic_ICollection_T__Add, (app::HashSet_1_System_UInt64_ * this_ptr, uint64_t item))
    IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, (app::HashSet_1_System_UInt64_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB4C70, void, CopyTo_1, (app::HashSet_1_System_UInt64_ * this_ptr, app::UInt64__Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::HashSet_1_System_UInt64_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (app::HashSet_1_System_UInt64_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ABCD80, app::HashSet_1_T_Enumerator_System_UInt64_, GetEnumerator, (app::HashSet_1_System_UInt64_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ABCDC0, app::IEnumerator_1_System_UInt64_*, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::HashSet_1_System_UInt64_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ABCDC0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::HashSet_1_System_UInt64_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AC2220, void, GetObjectData, (app::HashSet_1_System_UInt64_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x0472DBB8, HashSet_1_System_UInt64__GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AC2440, void, OnDeserialization, (app::HashSet_1_System_UInt64_ * this_ptr, app::Object* sender))
    IL2CPP_REGISTER_METHODINFO(0x04732C30, HashSet_1_System_UInt64__OnDeserialization__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AC2760, void, UnionWith, (app::HashSet_1_System_UInt64_ * this_ptr, app::IEnumerable_1_System_UInt64_* other))
    IL2CPP_REGISTER_METHODINFO(0x04795F80, HashSet_1_System_UInt64__UnionWith__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB5840, void, CopyTo_2, (app::HashSet_1_System_UInt64_ * this_ptr, app::UInt64__Array* array))
    IL2CPP_REGISTER_METHOD(0x02AC29C0, void, CopyTo_3, (app::HashSet_1_System_UInt64_ * this_ptr, app::UInt64__Array* array, int32_t array_index, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x0473FB60, HashSet_1_System_UInt64__CopyTo_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AC2C30, int32_t, RemoveWhere, (app::HashSet_1_System_UInt64_ * this_ptr, app::Predicate_1_UInt64_* match))
    IL2CPP_REGISTER_METHODINFO(0x0477E448, HashSet_1_System_UInt64__RemoveWhere__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_System_UInt64_*, get_Comparer, (app::HashSet_1_System_UInt64_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AC2DC0, void, TrimExcess, (app::HashSet_1_System_UInt64_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AC3010, void, Initialize, (app::HashSet_1_System_UInt64_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02AC3110, void, IncreaseCapacity, (app::HashSet_1_System_UInt64_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04769358, HashSet_1_System_UInt64__IncreaseCapacity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AC3210, void, SetCapacity, (app::HashSet_1_System_UInt64_ * this_ptr, int32_t new_size))
    IL2CPP_REGISTER_METHOD(0x02ABDFF0, bool, AddIfNotPresent, (app::HashSet_1_System_UInt64_ * this_ptr, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x02ABE370, void, AddValue, (app::HashSet_1_System_UInt64_ * this_ptr, int32_t index, int32_t hash_code, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x02AB6720, bool, AreEqualityComparersEqual, (app::HashSet_1_System_UInt64_ * set1, app::HashSet_1_System_UInt64_* set2))
    IL2CPP_REGISTER_METHOD(0x02ABE4A0, int32_t, InternalGetHashCode, (app::HashSet_1_System_UInt64_ * this_ptr, uint64_t item))
} // namespace app::classes::System::Collections::Generic::HashSet_1_System_UInt64_
