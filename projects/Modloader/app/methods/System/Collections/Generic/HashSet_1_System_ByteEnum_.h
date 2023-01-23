#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HashSet_1_System_ByteEnum_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_ByteEnum_.h>
#include <Modloader/app/structs/IEnumerable_1_System_ByteEnum_.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/ByteEnum__Enum.h>
#include <Modloader/app/structs/ByteEnum__Enum__Array.h>
#include <Modloader/app/structs/HashSet_1_T_Enumerator_System_ByteEnum_.h>
#include <Modloader/app/structs/IEnumerator_1_System_ByteEnum_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Predicate_1_ByteEnum_.h>

namespace app::classes::System::Collections::Generic::HashSet_1_System_ByteEnum_ {
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor_1, (app::HashSet_1_System_ByteEnum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB43D0, void, ctor_2, (app::HashSet_1_System_ByteEnum_ * this_ptr, app::IEqualityComparer_1_System_ByteEnum_* comparer))
    IL2CPP_REGISTER_METHOD(0x02AB4420, void, ctor_3, (app::HashSet_1_System_ByteEnum_ * this_ptr, app::IEnumerable_1_System_ByteEnum_* collection))
    IL2CPP_REGISTER_METHOD(0x02AB6910, void, ctor_4, (app::HashSet_1_System_ByteEnum_ * this_ptr, app::IEnumerable_1_System_ByteEnum_* collection, app::IEqualityComparer_1_System_ByteEnum_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04755BB0, HashSet_1_System_ByteEnum___ctor_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB46E0, void, ctor_5, (app::HashSet_1_System_ByteEnum_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x02AB6B60, void, CopyFrom, (app::HashSet_1_System_ByteEnum_ * this_ptr, app::HashSet_1_System_ByteEnum_* source))
    IL2CPP_REGISTER_METHOD(0x02AB4A60, void, System_Collections_Generic_ICollection_T__Add, (app::HashSet_1_System_ByteEnum_ * this_ptr, app::ByteEnum__Enum item))
    IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, (app::HashSet_1_System_ByteEnum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB6EC0, bool, Contains, (app::HashSet_1_System_ByteEnum_ * this_ptr, app::ByteEnum__Enum item))
    IL2CPP_REGISTER_METHOD(0x02AB4C70, void, CopyTo_1, (app::HashSet_1_System_ByteEnum_ * this_ptr, app::ByteEnum__Enum__Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x02AB7040, bool, Remove, (app::HashSet_1_System_ByteEnum_ * this_ptr, app::ByteEnum__Enum item))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::HashSet_1_System_ByteEnum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (app::HashSet_1_System_ByteEnum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB7360, app::HashSet_1_T_Enumerator_System_ByteEnum_, GetEnumerator, (app::HashSet_1_System_ByteEnum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB73A0, app::IEnumerator_1_System_ByteEnum_*, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::HashSet_1_System_ByteEnum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB73A0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::HashSet_1_System_ByteEnum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB7430, void, GetObjectData, (app::HashSet_1_System_ByteEnum_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x0474F068, HashSet_1_System_ByteEnum__GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB7650, void, OnDeserialization, (app::HashSet_1_System_ByteEnum_ * this_ptr, app::Object* sender))
    IL2CPP_REGISTER_METHODINFO(0x04738330, HashSet_1_System_ByteEnum__OnDeserialization__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, (app::HashSet_1_System_ByteEnum_ * this_ptr, app::ByteEnum__Enum item))
    IL2CPP_REGISTER_METHOD(0x02AB7970, void, UnionWith, (app::HashSet_1_System_ByteEnum_ * this_ptr, app::IEnumerable_1_System_ByteEnum_* other))
    IL2CPP_REGISTER_METHODINFO(0x047416F8, HashSet_1_System_ByteEnum__UnionWith__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB5840, void, CopyTo_2, (app::HashSet_1_System_ByteEnum_ * this_ptr, app::ByteEnum__Enum__Array* array))
    IL2CPP_REGISTER_METHOD(0x02AB7BD0, void, CopyTo_3, (app::HashSet_1_System_ByteEnum_ * this_ptr, app::ByteEnum__Enum__Array* array, int32_t array_index, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x04781C20, HashSet_1_System_ByteEnum__CopyTo_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB7E30, int32_t, RemoveWhere, (app::HashSet_1_System_ByteEnum_ * this_ptr, app::Predicate_1_ByteEnum_* match))
    IL2CPP_REGISTER_METHODINFO(0x0478A5F0, HashSet_1_System_ByteEnum__RemoveWhere__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_System_ByteEnum_*, get_Comparer, (app::HashSet_1_System_ByteEnum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB7FB0, void, TrimExcess, (app::HashSet_1_System_ByteEnum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB8210, void, Initialize, (app::HashSet_1_System_ByteEnum_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02AB8310, void, IncreaseCapacity, (app::HashSet_1_System_ByteEnum_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047657E8, HashSet_1_System_ByteEnum__IncreaseCapacity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB8410, void, SetCapacity, (app::HashSet_1_System_ByteEnum_ * this_ptr, int32_t new_size))
    IL2CPP_REGISTER_METHOD(0x02AB85C0, bool, AddIfNotPresent, (app::HashSet_1_System_ByteEnum_ * this_ptr, app::ByteEnum__Enum value))
    IL2CPP_REGISTER_METHOD(0x02AB8940, void, AddValue, (app::HashSet_1_System_ByteEnum_ * this_ptr, int32_t index, int32_t hash_code, app::ByteEnum__Enum value))
    IL2CPP_REGISTER_METHOD(0x02AB6720, bool, AreEqualityComparersEqual, (app::HashSet_1_System_ByteEnum_ * set1, app::HashSet_1_System_ByteEnum_* set2))
    IL2CPP_REGISTER_METHOD(0x02AB8A80, int32_t, InternalGetHashCode, (app::HashSet_1_System_ByteEnum_ * this_ptr, app::ByteEnum__Enum item))
} // namespace app::classes::System::Collections::Generic::HashSet_1_System_ByteEnum_
