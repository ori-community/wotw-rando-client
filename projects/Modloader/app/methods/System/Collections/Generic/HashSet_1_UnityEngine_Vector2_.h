#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_T_Enumerator_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/HashSet_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/IEqualityComparer_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Predicate_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector2__Array.h>

namespace app::classes::System::Collections::Generic::HashSet_1_UnityEngine_Vector2_ {
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor_1, app::HashSet_1_UnityEngine_Vector2_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03014B70, bool, Contains, app::HashSet_1_UnityEngine_Vector2_* this_ptr, app::Vector2 item)
    IL2CPP_REGISTER_METHOD(0x03014B30, bool, Add, app::HashSet_1_UnityEngine_Vector2_* this_ptr, app::Vector2 item)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, app::HashSet_1_UnityEngine_Vector2_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, app::HashSet_1_UnityEngine_Vector2_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AB43D0, void, ctor_2, app::HashSet_1_UnityEngine_Vector2_* this_ptr, app::IEqualityComparer_1_UnityEngine_Vector2_* comparer)
    IL2CPP_REGISTER_METHOD(0x02AB4420, void, ctor_3, app::HashSet_1_UnityEngine_Vector2_* this_ptr, app::IEnumerable_1_UnityEngine_Vector2_* collection)
    IL2CPP_REGISTER_METHOD(
        0x03014570,
        void,
        ctor_4,
        app::HashSet_1_UnityEngine_Vector2_* this_ptr,
        app::IEnumerable_1_UnityEngine_Vector2_* collection,
        app::IEqualityComparer_1_UnityEngine_Vector2_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02AB46E0, void, ctor_5, app::HashSet_1_UnityEngine_Vector2_* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x030147C0, void, CopyFrom, app::HashSet_1_UnityEngine_Vector2_* this_ptr, app::HashSet_1_UnityEngine_Vector2_* source)
    IL2CPP_REGISTER_METHOD(0x03014B30, void, System_Collections_Generic_ICollection_T__Add, app::HashSet_1_UnityEngine_Vector2_* this_ptr, app::Vector2 item)
    IL2CPP_REGISTER_METHOD(0x02AB4C70, void, CopyTo_1, app::HashSet_1_UnityEngine_Vector2_* this_ptr, app::Vector2__Array* array, int32_t array_index)
    IL2CPP_REGISTER_METHOD(0x03014D10, bool, Remove, app::HashSet_1_UnityEngine_Vector2_* this_ptr, app::Vector2 item)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, app::HashSet_1_UnityEngine_Vector2_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02ABCD80, app::HashSet_1_T_Enumerator_UnityEngine_Vector2_, GetEnumerator, app::HashSet_1_UnityEngine_Vector2_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02ABCDC0,
        app::IEnumerator_1_UnityEngine_Vector2_*,
        System_Collections_Generic_IEnumerable_T__GetEnumerator,
        app::HashSet_1_UnityEngine_Vector2_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02ABCDC0, app::IEnumerator*, IEnumerable_GetEnumerator, app::HashSet_1_UnityEngine_Vector2_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x03015040,
        void,
        GetObjectData,
        app::HashSet_1_UnityEngine_Vector2_* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(0x03015260, void, OnDeserialization, app::HashSet_1_UnityEngine_Vector2_* this_ptr, app::Object* sender)
    IL2CPP_REGISTER_METHOD(0x03015590, void, UnionWith, app::HashSet_1_UnityEngine_Vector2_* this_ptr, app::IEnumerable_1_UnityEngine_Vector2_* other)
    IL2CPP_REGISTER_METHOD(0x02AB5840, void, CopyTo_2, app::HashSet_1_UnityEngine_Vector2_* this_ptr, app::Vector2__Array* array)
    IL2CPP_REGISTER_METHOD(
        0x03015800,
        void,
        CopyTo_3,
        app::HashSet_1_UnityEngine_Vector2_* this_ptr,
        app::Vector2__Array* array,
        int32_t array_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x03015A70, int32_t, RemoveWhere, app::HashSet_1_UnityEngine_Vector2_* this_ptr, app::Predicate_1_UnityEngine_Vector2_* match)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_UnityEngine_Vector2_*, get_Comparer, app::HashSet_1_UnityEngine_Vector2_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03015C20, void, TrimExcess, app::HashSet_1_UnityEngine_Vector2_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03015E70, void, Initialize, app::HashSet_1_UnityEngine_Vector2_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x03015F70, void, IncreaseCapacity, app::HashSet_1_UnityEngine_Vector2_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03016070, void, SetCapacity, app::HashSet_1_UnityEngine_Vector2_* this_ptr, int32_t new_size)
    IL2CPP_REGISTER_METHOD(0x03016220, bool, AddIfNotPresent, app::HashSet_1_UnityEngine_Vector2_* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x030165E0, void, AddValue, app::HashSet_1_UnityEngine_Vector2_* this_ptr, int32_t index, int32_t hash_code, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x02AB6720, bool, AreEqualityComparersEqual, app::HashSet_1_UnityEngine_Vector2_* set1, app::HashSet_1_UnityEngine_Vector2_* set2)
    IL2CPP_REGISTER_METHOD(0x03016730, int32_t, InternalGetHashCode, app::HashSet_1_UnityEngine_Vector2_* this_ptr, app::Vector2 item)
} // namespace app::classes::System::Collections::Generic::HashSet_1_UnityEngine_Vector2_
