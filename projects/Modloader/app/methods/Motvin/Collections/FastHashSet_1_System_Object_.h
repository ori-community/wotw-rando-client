#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FastHashSet_1_System_Object_.h>
#include <Modloader/app/structs/FastHashSet_1_T_FoundType_System_Object_.h>
#include <Modloader/app/structs/FastHashSet_1_T_TNode_System_Object___Array.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Object_.h>
#include <Modloader/app/structs/IEqualityComparer_1_Motvin_Collections_FastHashSet_1_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_Object_.h>
#include <Modloader/app/structs/List_1_Motvin_Collections_ChainLevelAndCount_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Predicate_1_Object_.h>

namespace app::classes::Motvin::Collections::FastHashSet_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, app::FastHashSet_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::IEqualityComparer_1_System_Object_*, get_Comparer, app::FastHashSet_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_Count, app::FastHashSet_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AFAD80, double, get_LoadFactor, app::FastHashSet_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AFAD90, int32_t, get_ExcessCapacity, app::FastHashSet_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AFAE00, int32_t, get_Capacity, app::FastHashSet_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AFAE60, int32_t, get_NextCapacityIncreaseSize, app::FastHashSet_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_NextCapacityIncreaseAtCount, app::FastHashSet_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AFAEA0, bool, get_IsHashing, app::FastHashSet_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AF89C0, void, ctor_1, app::FastHashSet_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AF8A20, void, ctor_2, app::FastHashSet_1_System_Object_* this_ptr, app::IEnumerable_1_System_Object_* collection)
    IL2CPP_REGISTER_METHOD(0x02AF8A90, void, ctor_3, app::FastHashSet_1_System_Object_* this_ptr, app::IEqualityComparer_1_System_Object_* comparer)
    IL2CPP_REGISTER_METHOD(0x02AF8B00, void, ctor_4, app::FastHashSet_1_System_Object_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(
        0x02AF8B70,
        void,
        ctor_5,
        app::FastHashSet_1_System_Object_* this_ptr,
        app::IEnumerable_1_System_Object_* collection,
        app::IEqualityComparer_1_System_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02AF8BE0,
        void,
        ctor_6,
        app::FastHashSet_1_System_Object_* this_ptr,
        int32_t capacity,
        app::IEqualityComparer_1_System_Object_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02AF8C50,
        void,
        AddInitialUniqueValuesEnumerable,
        app::FastHashSet_1_System_Object_* this_ptr,
        app::IEnumerable_1_System_Object_* collection
    )
    IL2CPP_REGISTER_METHOD(
        0x02AF9280,
        void,
        AddInitialEnumerableWithEnoughCapacity,
        app::FastHashSet_1_System_Object_* this_ptr,
        app::IEnumerable_1_System_Object_* collection
    )
    IL2CPP_REGISTER_METHOD(0x02AF96B0, void, AddInitialEnumerable, app::FastHashSet_1_System_Object_* this_ptr, app::IEnumerable_1_System_Object_* collection)
    IL2CPP_REGISTER_METHOD(0x02AFA050, void, SetInitialCapacity, app::FastHashSet_1_System_Object_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02AFA0B0, void, SwitchToHashing, app::FastHashSet_1_System_Object_* this_ptr, int32_t capacity_increase)
    IL2CPP_REGISTER_METHOD(0x02AFA310, void, InitHashing, app::FastHashSet_1_System_Object_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02AFA950, void, CreateNoHashArray, app::FastHashSet_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AFA9A0, void, CalcUsedItemsLoadFactorThreshold, app::FastHashSet_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AFA9F0, void, CopyTo_1, app::FastHashSet_1_System_Object_* this_ptr, app::Object__Array* array, int32_t array_index)
    IL2CPP_REGISTER_METHOD(0x02AFAA30, void, CopyTo_2, app::FastHashSet_1_System_Object_* this_ptr, app::Object__Array* array)
    IL2CPP_REGISTER_METHOD(
        0x02AFAA70,
        void,
        CopyTo_3,
        app::FastHashSet_1_System_Object_* this_ptr,
        app::Object__Array* array,
        int32_t array_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x02AFAEB0, int32_t, EnsureCapacity, app::FastHashSet_1_System_Object_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02AFAFE0, bool, CheckForModSizeIncrease, app::FastHashSet_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AFB2E0, int32_t, GetNewSlotsArraySizeIncrease, app::FastHashSet_1_System_Object_* this_ptr, int32_t* old_array_size)
    IL2CPP_REGISTER_METHOD(0x02AFB320, int32_t, GetNewBucketsArraySize, app::FastHashSet_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AFB560, void, IncreaseCapacity, app::FastHashSet_1_System_Object_* this_ptr, int32_t capacity_increase)
    IL2CPP_REGISTER_METHOD(
        0x02AFB720,
        app::FastHashSet_1_T_TNode_System_Object___Array*,
        IncreaseCapacityNoCopy,
        app::FastHashSet_1_System_Object_* this_ptr,
        int32_t capacity_increase
    )
    IL2CPP_REGISTER_METHOD(0x02AFB8B0, void, ResizeBucketsArrayForward, app::FastHashSet_1_System_Object_* this_ptr, int32_t new_buckets_array_size)
    IL2CPP_REGISTER_METHOD(0x02AFBBA0, void, ResizeBucketsArrayForwardKeepMarks, app::FastHashSet_1_System_Object_* this_ptr, int32_t new_buckets_array_size)
    IL2CPP_REGISTER_METHOD(0x02AFBEA0, void, Clear, app::FastHashSet_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AFBF10, void, TrimExcess, app::FastHashSet_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AFBFD0, void, System_Collections_Generic_ICollection_T__Add, app::FastHashSet_1_System_Object_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x02AFC010, bool, Add_1, app::FastHashSet_1_System_Object_* this_ptr, app::Object** item)
    IL2CPP_REGISTER_METHOD(0x02AFC560, bool, Add_2, app::FastHashSet_1_System_Object_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02AFCA80,
        int32_t,
        AddToHashSetIfNotFound,
        app::FastHashSet_1_System_Object_* this_ptr,
        app::Object** item,
        int32_t hash,
        bool* is_found
    )
    IL2CPP_REGISTER_METHOD(0x02AFCD30, int32_t, AddToHashSetIfNotFoundAndMark, app::FastHashSet_1_System_Object_* this_ptr, app::Object** item, int32_t hash)
    IL2CPP_REGISTER_METHOD(0x02AFCFC0, bool, Contains_1, app::FastHashSet_1_System_Object_* this_ptr, app::Object** item)
    IL2CPP_REGISTER_METHOD(0x02AFD220, bool, Contains_2, app::FastHashSet_1_System_Object_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x02AFD480, bool, Remove, app::FastHashSet_1_System_Object_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02AFD860,
        bool,
        RemoveIf,
        app::FastHashSet_1_System_Object_* this_ptr,
        app::Object** item,
        app::Predicate_1_Object_* remove_if_pred_is_true
    )
    IL2CPP_REGISTER_METHOD(0x02AFDD40, app::Object**, FindOrAdd, app::FastHashSet_1_System_Object_* this_ptr, app::Object** item, bool* is_found)
    IL2CPP_REGISTER_METHOD(0x02AFE040, app::Object**, Find, app::FastHashSet_1_System_Object_* this_ptr, app::Object** item, bool* is_found)
    IL2CPP_REGISTER_METHOD(
        0x02AFE270,
        app::Object**,
        FindAndRemoveIf,
        app::FastHashSet_1_System_Object_* this_ptr,
        app::Object** item,
        app::Predicate_1_Object_* remove_if_pred_is_true,
        bool* is_found,
        bool* is_removed
    )
    IL2CPP_REGISTER_METHOD(
        0x02AFE790,
        void,
        FindInSlotsArray_1,
        app::FastHashSet_1_System_Object_* this_ptr,
        app::Object** item,
        int32_t* found_node_index,
        int32_t* prior_node_index,
        int32_t* buckets_index
    )
    IL2CPP_REGISTER_METHOD(0x02AFE970, bool, FindInSlotsArray_2, app::FastHashSet_1_System_Object_* this_ptr, app::Object** item, int32_t hash)
    IL2CPP_REGISTER_METHOD(0x02AFEAC0, bool, FindInNoHashArray, app::FastHashSet_1_System_Object_* this_ptr, app::Object** item)
    IL2CPP_REGISTER_METHOD(0x02AFEBA0, void, UnmarkAllNextIndexValues, app::FastHashSet_1_System_Object_* this_ptr, int32_t max_node_index)
    IL2CPP_REGISTER_METHOD(
        0x02AFEC00,
        void,
        UnmarkAllNextIndexValuesAndRemoveAnyMarkedOrUnmarked,
        app::FastHashSet_1_System_Object_* this_ptr,
        bool remove_marked
    )
    IL2CPP_REGISTER_METHOD(
        0x02AFEDC0,
        app::FastHashSet_1_T_FoundType_System_Object_*,
        FindInSlotsArrayAndMark,
        app::FastHashSet_1_System_Object_* this_ptr,
        app::Object** item,
        int32_t* found_node_index
    )
    IL2CPP_REGISTER_METHOD(
        0x02AFF000,
        app::List_1_Motvin_Collections_ChainLevelAndCount_*,
        GetChainLevelsCounts,
        app::FastHashSet_1_System_Object_* this_ptr,
        double* avg_node_visits_per_chain
    )
    IL2CPP_REGISTER_METHOD(0x02AFF760, void, ReorderChainedNodesToBeAdjacent, app::FastHashSet_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AFF8F0, bool, TryGetValue, app::FastHashSet_1_System_Object_* this_ptr, app::Object* equal_value, app::Object** actual_value)
    IL2CPP_REGISTER_METHOD(0x02AFFB00, void, UnionWith, app::FastHashSet_1_System_Object_* this_ptr, app::IEnumerable_1_System_Object_* other)
    IL2CPP_REGISTER_METHOD(0x02B00080, void, ExceptWith, app::FastHashSet_1_System_Object_* this_ptr, app::IEnumerable_1_System_Object_* other)
    IL2CPP_REGISTER_METHOD(0x02B00330, void, IntersectWith, app::FastHashSet_1_System_Object_* this_ptr, app::IEnumerable_1_System_Object_* other)
    IL2CPP_REGISTER_METHOD(0x02B00900, bool, IsProperSubsetOf, app::FastHashSet_1_System_Object_* this_ptr, app::IEnumerable_1_System_Object_* other)
    IL2CPP_REGISTER_METHOD(0x02B01020, bool, IsSubsetOf, app::FastHashSet_1_System_Object_* this_ptr, app::IEnumerable_1_System_Object_* other)
    IL2CPP_REGISTER_METHOD(0x02B01570, bool, IsProperSupersetOf, app::FastHashSet_1_System_Object_* this_ptr, app::IEnumerable_1_System_Object_* other)
    IL2CPP_REGISTER_METHOD(0x02B01CC0, bool, IsSupersetOf, app::FastHashSet_1_System_Object_* this_ptr, app::IEnumerable_1_System_Object_* other)
    IL2CPP_REGISTER_METHOD(0x02B02320, bool, Overlaps, app::FastHashSet_1_System_Object_* this_ptr, app::IEnumerable_1_System_Object_* other)
    IL2CPP_REGISTER_METHOD(0x02B02590, bool, SetEquals, app::FastHashSet_1_System_Object_* this_ptr, app::IEnumerable_1_System_Object_* other)
    IL2CPP_REGISTER_METHOD(0x02B03080, void, SymmetricExceptWith, app::FastHashSet_1_System_Object_* this_ptr, app::IEnumerable_1_System_Object_* other)
    IL2CPP_REGISTER_METHOD(0x02B036A0, void, RemoveIfNotMarked, app::FastHashSet_1_System_Object_* this_ptr, app::Object** item)
    IL2CPP_REGISTER_METHOD(0x02B03930, int32_t, RemoveWhere, app::FastHashSet_1_System_Object_* this_ptr, app::Predicate_1_Object_* match)
    IL2CPP_REGISTER_METHOD(0x02B03D00, app::IEqualityComparer_1_Motvin_Collections_FastHashSet_1_*, CreateSetComparer, )
    IL2CPP_REGISTER_METHOD(0x02B03E60, app::IEnumerator_1_System_Object_*, GetEnumerator, app::FastHashSet_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B03E60, app::IEnumerator*, IEnumerable_GetEnumerator, app::FastHashSet_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B03F80, void, cctor, )
} // namespace app::classes::Motvin::Collections::FastHashSet_1_System_Object_
