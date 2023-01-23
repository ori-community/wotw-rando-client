#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HashSet_1_Moon_Timeline_EntityId_.h>
#include <Modloader/app/structs/EntityId.h>
#include <Modloader/app/structs/IEqualityComparer_1_Moon_Timeline_EntityId_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_Timeline_EntityId_.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/EntityId__Array.h>
#include <Modloader/app/structs/HashSet_1_T_Enumerator_Moon_Timeline_EntityId_.h>
#include <Modloader/app/structs/IEnumerator_1_Moon_Timeline_EntityId_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Predicate_1_Moon_Timeline_EntityId_.h>

namespace app::classes::System::Collections::Generic::HashSet_1_Moon_Timeline_EntityId_ {
    IL2CPP_REGISTER_METHOD(0x02AB4AF0, bool, Contains, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr, app::EntityId item))
    IL2CPP_REGISTER_METHODINFO(0x04751510, HashSet_1_Moon_Timeline_EntityId__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor_1, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB43D0, void, ctor_2, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr, app::IEqualityComparer_1_Moon_Timeline_EntityId_* comparer))
    IL2CPP_REGISTER_METHOD(0x02AB4420, void, ctor_3, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr, app::IEnumerable_1_Moon_Timeline_EntityId_* collection))
    IL2CPP_REGISTER_METHOD(0x02AB4490, void, ctor_4, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr, app::IEnumerable_1_Moon_Timeline_EntityId_* collection, app::IEqualityComparer_1_Moon_Timeline_EntityId_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04781430, HashSet_1_Moon_Timeline_EntityId___ctor_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB46E0, void, ctor_5, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x02AB4700, void, CopyFrom, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr, app::HashSet_1_Moon_Timeline_EntityId_* source))
    IL2CPP_REGISTER_METHOD(0x02AB4A60, void, System_Collections_Generic_ICollection_T__Add, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr, app::EntityId item))
    IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB4C70, void, CopyTo_1, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr, app::EntityId__Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x02AB4CB0, bool, Remove, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr, app::EntityId item))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB4FD0, app::HashSet_1_T_Enumerator_Moon_Timeline_EntityId_, GetEnumerator, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB5010, app::IEnumerator_1_Moon_Timeline_EntityId_*, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB5010, app::IEnumerator*, IEnumerable_GetEnumerator, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB50A0, void, GetObjectData, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04739C50, HashSet_1_Moon_Timeline_EntityId__GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB52C0, void, OnDeserialization, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr, app::Object* sender))
    IL2CPP_REGISTER_METHODINFO(0x0472AA88, HashSet_1_Moon_Timeline_EntityId__OnDeserialization__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr, app::EntityId item))
    IL2CPP_REGISTER_METHOD(0x02AB55E0, void, UnionWith, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr, app::IEnumerable_1_Moon_Timeline_EntityId_* other))
    IL2CPP_REGISTER_METHODINFO(0x04759DC0, HashSet_1_Moon_Timeline_EntityId__UnionWith__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB5840, void, CopyTo_2, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr, app::EntityId__Array* array))
    IL2CPP_REGISTER_METHOD(0x02AB5880, void, CopyTo_3, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr, app::EntityId__Array* array, int32_t array_index, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x0472A8F0, HashSet_1_Moon_Timeline_EntityId__CopyTo_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB5AE0, int32_t, RemoveWhere, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr, app::Predicate_1_Moon_Timeline_EntityId_* match))
    IL2CPP_REGISTER_METHODINFO(0x04732438, HashSet_1_Moon_Timeline_EntityId__RemoveWhere__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_Moon_Timeline_EntityId_*, get_Comparer, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB5C60, void, TrimExcess, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB5EC0, void, Initialize, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02AB5FC0, void, IncreaseCapacity, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472F928, HashSet_1_Moon_Timeline_EntityId__IncreaseCapacity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB60C0, void, SetCapacity, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr, int32_t new_size))
    IL2CPP_REGISTER_METHOD(0x02AB6270, bool, AddIfNotPresent, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr, app::EntityId value))
    IL2CPP_REGISTER_METHOD(0x02AB65E0, void, AddValue, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr, int32_t index, int32_t hash_code, app::EntityId value))
    IL2CPP_REGISTER_METHOD(0x02AB6720, bool, AreEqualityComparersEqual, (app::HashSet_1_Moon_Timeline_EntityId_ * set1, app::HashSet_1_Moon_Timeline_EntityId_* set2))
    IL2CPP_REGISTER_METHOD(0x02AB6840, int32_t, InternalGetHashCode, (app::HashSet_1_Moon_Timeline_EntityId_ * this_ptr, app::EntityId item))
} // namespace app::classes::System::Collections::Generic::HashSet_1_Moon_Timeline_EntityId_
