#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_System_Int32_.h>
#include <Modloader/app/structs/HashSet_1_T_Enumerator_System_Int32_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Int32_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Int32_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_Int32_.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Predicate_1_Int32_.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Collections::Generic::HashSet_1_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor_1, (app::HashSet_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, (app::HashSet_1_System_Int32_ * this_ptr, int32_t item))
    IL2CPP_REGISTER_METHOD(0x02AB90A0, bool, Contains, (app::HashSet_1_System_Int32_ * this_ptr, int32_t item))
    IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, (app::HashSet_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB4420, void, ctor_2, (app::HashSet_1_System_Int32_ * this_ptr, app::IEnumerable_1_System_Int32_* collection))
    IL2CPP_REGISTER_METHOD(0x02AB9220, bool, Remove, (app::HashSet_1_System_Int32_ * this_ptr, int32_t item))
    IL2CPP_REGISTER_METHOD(0x02AB43D0, void, ctor_3, (app::HashSet_1_System_Int32_ * this_ptr, app::IEqualityComparer_1_System_Int32_* comparer))
    IL2CPP_REGISTER_METHOD(0x02AB8AF0, void, ctor_4, (app::HashSet_1_System_Int32_ * this_ptr, app::IEnumerable_1_System_Int32_* collection, app::IEqualityComparer_1_System_Int32_* comparer))
    IL2CPP_REGISTER_METHOD(0x02AB46E0, void, ctor_5, (app::HashSet_1_System_Int32_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x02AB8D40, void, CopyFrom, (app::HashSet_1_System_Int32_ * this_ptr, app::HashSet_1_System_Int32_* source))
    IL2CPP_REGISTER_METHOD(0x02AB4A60, void, System_Collections_Generic_ICollection_T__Add, (app::HashSet_1_System_Int32_ * this_ptr, int32_t item))
    IL2CPP_REGISTER_METHOD(0x02AB4C70, void, CopyTo_1, (app::HashSet_1_System_Int32_ * this_ptr, app::Int32__Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::HashSet_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (app::HashSet_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB4FD0, app::HashSet_1_T_Enumerator_System_Int32_, GetEnumerator, (app::HashSet_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB5010, app::IEnumerator_1_System_Int32_*, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::HashSet_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB5010, app::IEnumerator*, IEnumerable_GetEnumerator, (app::HashSet_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB9530, void, GetObjectData, (app::HashSet_1_System_Int32_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x02AB9750, void, OnDeserialization, (app::HashSet_1_System_Int32_ * this_ptr, app::Object* sender))
    IL2CPP_REGISTER_METHOD(0x02AB9A70, void, UnionWith, (app::HashSet_1_System_Int32_ * this_ptr, app::IEnumerable_1_System_Int32_* other))
    IL2CPP_REGISTER_METHOD(0x02AB5840, void, CopyTo_2, (app::HashSet_1_System_Int32_ * this_ptr, app::Int32__Array* array))
    IL2CPP_REGISTER_METHOD(0x02AB9CD0, void, CopyTo_3, (app::HashSet_1_System_Int32_ * this_ptr, app::Int32__Array* array, int32_t array_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02AB9F30, int32_t, RemoveWhere, (app::HashSet_1_System_Int32_ * this_ptr, app::Predicate_1_Int32_* match))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_System_Int32_*, get_Comparer, (app::HashSet_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ABA0B0, void, TrimExcess, (app::HashSet_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ABA310, void, Initialize, (app::HashSet_1_System_Int32_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02ABA410, void, IncreaseCapacity, (app::HashSet_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ABA510, void, SetCapacity, (app::HashSet_1_System_Int32_ * this_ptr, int32_t new_size))
    IL2CPP_REGISTER_METHOD(0x02ABA6C0, bool, AddIfNotPresent, (app::HashSet_1_System_Int32_ * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x02ABAA40, void, AddValue, (app::HashSet_1_System_Int32_ * this_ptr, int32_t index, int32_t hash_code, int32_t value))
    IL2CPP_REGISTER_METHOD(0x02AB6720, bool, AreEqualityComparersEqual, (app::HashSet_1_System_Int32_ * set1, app::HashSet_1_System_Int32_* set2))
    IL2CPP_REGISTER_METHOD(0x02ABAB80, int32_t, InternalGetHashCode, (app::HashSet_1_System_Int32_ * this_ptr, int32_t item))
} // namespace app::classes::System::Collections::Generic::HashSet_1_System_Int32_
