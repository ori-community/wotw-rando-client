#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FastHashSet_1_System_UInt32_.h>
#include <Modloader/app/structs/FastHashSet_1_T_FoundType_System_UInt32_.h>
#include <Modloader/app/structs/FastHashSet_1_T_TNode_System_UInt32___Array.h>
#include <Modloader/app/structs/IEnumerable_1_System_UInt32_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_UInt32_.h>
#include <Modloader/app/structs/IEqualityComparer_1_Motvin_Collections_FastHashSet_1__1.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_UInt32_.h>
#include <Modloader/app/structs/List_1_Motvin_Collections_ChainLevelAndCount_.h>
#include <Modloader/app/structs/Predicate_1_UInt32_.h>
#include <Modloader/app/structs/UInt32__Array.h>

namespace app::classes::Motvin::Collections::FastHashSet_1_System_UInt32_ {
    IL2CPP_REGISTER_METHOD(0x02AF8B00, void, ctor_1, app::FastHashSet_1_System_UInt32_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02B06F10, bool, Add_1, app::FastHashSet_1_System_UInt32_* this_ptr, uint32_t item)
    IL2CPP_REGISTER_METHOD(0x02B07E00, bool, Remove, app::FastHashSet_1_System_UInt32_* this_ptr, uint32_t item)
    IL2CPP_REGISTER_METHOD(0x02AF89C0, void, ctor_2, app::FastHashSet_1_System_UInt32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AF8A20, void, ctor_3, app::FastHashSet_1_System_UInt32_* this_ptr, app::IEnumerable_1_System_UInt32_* collection)
    IL2CPP_REGISTER_METHOD(0x02AF8A90, void, ctor_4, app::FastHashSet_1_System_UInt32_* this_ptr, app::IEqualityComparer_1_System_UInt32_* comparer)
    IL2CPP_REGISTER_METHOD(
        0x02AF8B70,
        void,
        ctor_5,
        app::FastHashSet_1_System_UInt32_* this_ptr,
        app::IEnumerable_1_System_UInt32_* collection,
        app::IEqualityComparer_1_System_UInt32_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02AF8BE0,
        void,
        ctor_6,
        app::FastHashSet_1_System_UInt32_* this_ptr,
        int32_t capacity,
        app::IEqualityComparer_1_System_UInt32_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02B040D0,
        void,
        AddInitialUniqueValuesEnumerable,
        app::FastHashSet_1_System_UInt32_* this_ptr,
        app::IEnumerable_1_System_UInt32_* collection
    )
    IL2CPP_REGISTER_METHOD(
        0x02B046F0,
        void,
        AddInitialEnumerableWithEnoughCapacity,
        app::FastHashSet_1_System_UInt32_* this_ptr,
        app::IEnumerable_1_System_UInt32_* collection
    )
    IL2CPP_REGISTER_METHOD(0x02B04B10, void, AddInitialEnumerable, app::FastHashSet_1_System_UInt32_* this_ptr, app::IEnumerable_1_System_UInt32_* collection)
    IL2CPP_REGISTER_METHOD(0x02AFA050, void, SetInitialCapacity, app::FastHashSet_1_System_UInt32_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02B054A0, void, SwitchToHashing, app::FastHashSet_1_System_UInt32_* this_ptr, int32_t capacity_increase)
    IL2CPP_REGISTER_METHOD(0x02B056F0, void, InitHashing, app::FastHashSet_1_System_UInt32_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02AFA950, void, CreateNoHashArray, app::FastHashSet_1_System_UInt32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AFA9A0, void, CalcUsedItemsLoadFactorThreshold, app::FastHashSet_1_System_UInt32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, app::FastHashSet_1_System_UInt32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AFA9F0, void, CopyTo_1, app::FastHashSet_1_System_UInt32_* this_ptr, app::UInt32__Array* array, int32_t array_index)
    IL2CPP_REGISTER_METHOD(0x02AFAA30, void, CopyTo_2, app::FastHashSet_1_System_UInt32_* this_ptr, app::UInt32__Array* array)
    IL2CPP_REGISTER_METHOD(
        0x02B05D30,
        void,
        CopyTo_3,
        app::FastHashSet_1_System_UInt32_* this_ptr,
        app::UInt32__Array* array,
        int32_t array_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::IEqualityComparer_1_System_UInt32_*, get_Comparer, app::FastHashSet_1_System_UInt32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_Count, app::FastHashSet_1_System_UInt32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AFAD80, double, get_LoadFactor, app::FastHashSet_1_System_UInt32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AFAD90, int32_t, get_ExcessCapacity, app::FastHashSet_1_System_UInt32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AFAE00, int32_t, get_Capacity, app::FastHashSet_1_System_UInt32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AFAE60, int32_t, get_NextCapacityIncreaseSize, app::FastHashSet_1_System_UInt32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_NextCapacityIncreaseAtCount, app::FastHashSet_1_System_UInt32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AFAEA0, bool, get_IsHashing, app::FastHashSet_1_System_UInt32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AFAEB0, int32_t, EnsureCapacity, app::FastHashSet_1_System_UInt32_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02AFAFE0, bool, CheckForModSizeIncrease, app::FastHashSet_1_System_UInt32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AFB2E0, int32_t, GetNewSlotsArraySizeIncrease, app::FastHashSet_1_System_UInt32_* this_ptr, int32_t* old_array_size)
    IL2CPP_REGISTER_METHOD(0x02AFB320, int32_t, GetNewBucketsArraySize, app::FastHashSet_1_System_UInt32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B06050, void, IncreaseCapacity, app::FastHashSet_1_System_UInt32_* this_ptr, int32_t capacity_increase)
    IL2CPP_REGISTER_METHOD(
        0x02B06210,
        app::FastHashSet_1_T_TNode_System_UInt32___Array*,
        IncreaseCapacityNoCopy,
        app::FastHashSet_1_System_UInt32_* this_ptr,
        int32_t capacity_increase
    )
    IL2CPP_REGISTER_METHOD(0x02B063A0, void, ResizeBucketsArrayForward, app::FastHashSet_1_System_UInt32_* this_ptr, int32_t new_buckets_array_size)
    IL2CPP_REGISTER_METHOD(0x02B06690, void, ResizeBucketsArrayForwardKeepMarks, app::FastHashSet_1_System_UInt32_* this_ptr, int32_t new_buckets_array_size)
    IL2CPP_REGISTER_METHOD(0x02AFBEA0, void, Clear, app::FastHashSet_1_System_UInt32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AFBF10, void, TrimExcess, app::FastHashSet_1_System_UInt32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B06990, void, System_Collections_Generic_ICollection_T__Add, app::FastHashSet_1_System_UInt32_* this_ptr, uint32_t item)
    IL2CPP_REGISTER_METHOD(0x02B069D0, bool, Add_2, app::FastHashSet_1_System_UInt32_* this_ptr, uint32_t* item)
    IL2CPP_REGISTER_METHOD(
        0x02B07430,
        int32_t,
        AddToHashSetIfNotFound,
        app::FastHashSet_1_System_UInt32_* this_ptr,
        uint32_t* item,
        int32_t hash,
        bool* is_found
    )
    IL2CPP_REGISTER_METHOD(0x02B076D0, int32_t, AddToHashSetIfNotFoundAndMark, app::FastHashSet_1_System_UInt32_* this_ptr, uint32_t* item, int32_t hash)
    IL2CPP_REGISTER_METHOD(0x02B07950, bool, Contains_1, app::FastHashSet_1_System_UInt32_* this_ptr, uint32_t* item)
    IL2CPP_REGISTER_METHOD(0x02B07BB0, bool, Contains_2, app::FastHashSet_1_System_UInt32_* this_ptr, uint32_t item)
    IL2CPP_REGISTER_METHOD(
        0x02B081E0,
        bool,
        RemoveIf,
        app::FastHashSet_1_System_UInt32_* this_ptr,
        uint32_t* item,
        app::Predicate_1_UInt32_* remove_if_pred_is_true
    )
    IL2CPP_REGISTER_METHOD(0x02B086C0, uint32_t*, FindOrAdd, app::FastHashSet_1_System_UInt32_* this_ptr, uint32_t* item, bool* is_found)
    IL2CPP_REGISTER_METHOD(0x02B089C0, uint32_t*, Find, app::FastHashSet_1_System_UInt32_* this_ptr, uint32_t* item, bool* is_found)
    IL2CPP_REGISTER_METHOD(
        0x02B08BF0,
        uint32_t*,
        FindAndRemoveIf,
        app::FastHashSet_1_System_UInt32_* this_ptr,
        uint32_t* item,
        app::Predicate_1_UInt32_* remove_if_pred_is_true,
        bool* is_found,
        bool* is_removed
    )
    IL2CPP_REGISTER_METHOD(
        0x02B09100,
        void,
        FindInSlotsArray_1,
        app::FastHashSet_1_System_UInt32_* this_ptr,
        uint32_t* item,
        int32_t* found_node_index,
        int32_t* prior_node_index,
        int32_t* buckets_index
    )
    IL2CPP_REGISTER_METHOD(0x02B092E0, bool, FindInSlotsArray_2, app::FastHashSet_1_System_UInt32_* this_ptr, uint32_t* item, int32_t hash)
    IL2CPP_REGISTER_METHOD(0x02B09420, bool, FindInNoHashArray, app::FastHashSet_1_System_UInt32_* this_ptr, uint32_t* item)
    IL2CPP_REGISTER_METHOD(0x02B09500, void, UnmarkAllNextIndexValues, app::FastHashSet_1_System_UInt32_* this_ptr, int32_t max_node_index)
    IL2CPP_REGISTER_METHOD(
        0x02B09560,
        void,
        UnmarkAllNextIndexValuesAndRemoveAnyMarkedOrUnmarked,
        app::FastHashSet_1_System_UInt32_* this_ptr,
        bool remove_marked
    )
    IL2CPP_REGISTER_METHOD(
        0x02B09720,
        app::FastHashSet_1_T_FoundType_System_UInt32_*,
        FindInSlotsArrayAndMark,
        app::FastHashSet_1_System_UInt32_* this_ptr,
        uint32_t* item,
        int32_t* found_node_index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B09970,
        app::List_1_Motvin_Collections_ChainLevelAndCount_*,
        GetChainLevelsCounts,
        app::FastHashSet_1_System_UInt32_* this_ptr,
        double* avg_node_visits_per_chain
    )
    IL2CPP_REGISTER_METHOD(0x02B0A0E0, void, ReorderChainedNodesToBeAdjacent, app::FastHashSet_1_System_UInt32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B0A260, bool, TryGetValue, app::FastHashSet_1_System_UInt32_* this_ptr, uint32_t equal_value, uint32_t* actual_value)
    IL2CPP_REGISTER_METHOD(0x02B0A470, void, UnionWith, app::FastHashSet_1_System_UInt32_* this_ptr, app::IEnumerable_1_System_UInt32_* other)
    IL2CPP_REGISTER_METHOD(0x02B0A9F0, void, ExceptWith, app::FastHashSet_1_System_UInt32_* this_ptr, app::IEnumerable_1_System_UInt32_* other)
    IL2CPP_REGISTER_METHOD(0x02B0ACA0, void, IntersectWith, app::FastHashSet_1_System_UInt32_* this_ptr, app::IEnumerable_1_System_UInt32_* other)
    IL2CPP_REGISTER_METHOD(0x02B0B270, bool, IsProperSubsetOf, app::FastHashSet_1_System_UInt32_* this_ptr, app::IEnumerable_1_System_UInt32_* other)
    IL2CPP_REGISTER_METHOD(0x02B0B990, bool, IsSubsetOf, app::FastHashSet_1_System_UInt32_* this_ptr, app::IEnumerable_1_System_UInt32_* other)
    IL2CPP_REGISTER_METHOD(0x02B0BED0, bool, IsProperSupersetOf, app::FastHashSet_1_System_UInt32_* this_ptr, app::IEnumerable_1_System_UInt32_* other)
    IL2CPP_REGISTER_METHOD(0x02B0C620, bool, IsSupersetOf, app::FastHashSet_1_System_UInt32_* this_ptr, app::IEnumerable_1_System_UInt32_* other)
    IL2CPP_REGISTER_METHOD(0x02B0CC80, bool, Overlaps, app::FastHashSet_1_System_UInt32_* this_ptr, app::IEnumerable_1_System_UInt32_* other)
    IL2CPP_REGISTER_METHOD(0x02B0CEE0, bool, SetEquals, app::FastHashSet_1_System_UInt32_* this_ptr, app::IEnumerable_1_System_UInt32_* other)
    IL2CPP_REGISTER_METHOD(0x02B0D9F0, void, SymmetricExceptWith, app::FastHashSet_1_System_UInt32_* this_ptr, app::IEnumerable_1_System_UInt32_* other)
    IL2CPP_REGISTER_METHOD(0x02B0E000, void, RemoveIfNotMarked, app::FastHashSet_1_System_UInt32_* this_ptr, uint32_t* item)
    IL2CPP_REGISTER_METHOD(0x02B0E290, int32_t, RemoveWhere, app::FastHashSet_1_System_UInt32_* this_ptr, app::Predicate_1_UInt32_* match)
    IL2CPP_REGISTER_METHOD(0x02B03D00, app::IEqualityComparer_1_Motvin_Collections_FastHashSet_1__1*, CreateSetComparer, )
    IL2CPP_REGISTER_METHOD(0x02B03E60, app::IEnumerator_1_System_UInt32_*, GetEnumerator, app::FastHashSet_1_System_UInt32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B03E60, app::IEnumerator*, IEnumerable_GetEnumerator, app::FastHashSet_1_System_UInt32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B0E660, void, cctor, )
} // namespace app::classes::Motvin::Collections::FastHashSet_1_System_UInt32_
