#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Moon_Timeline_Reaction_.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Comparison_1_Moon_Timeline_Reaction_.h>
#include <Modloader/app/structs/IComparer_1_Moon_Timeline_Reaction_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_Timeline_Reaction_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_Moon_Timeline_Reaction_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_Reaction_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_Timeline_Reaction_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Predicate_1_Moon_Timeline_Reaction_.h>
#include <Modloader/app/structs/Reaction.h>
#include <Modloader/app/structs/Reaction__Array.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_Moon_Timeline_Reaction_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_Timeline_Reaction_ {
    IL2CPP_REGISTER_METHOD(0x02C1F070, app::List_1_T_Enumerator_Moon_Timeline_Reaction_, GetEnumerator, app::List_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, app::List_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C1E360, void, Add, app::List_1_Moon_Timeline_Reaction_* this_ptr, app::Reaction item)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C1DFB0, app::Reaction, get_Item, app::List_1_Moon_Timeline_Reaction_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02C1FD10, void, RemoveAt, app::List_1_Moon_Timeline_Reaction_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, app::List_1_Moon_Timeline_Reaction_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02DED280, void, ctor_3, app::List_1_Moon_Timeline_Reaction_* this_ptr, app::IEnumerable_1_Moon_Timeline_Reaction_* collection)
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, app::List_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, app::List_1_Moon_Timeline_Reaction_* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, app::List_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, app::List_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, app::List_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::List_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02DED710, app::Object*, ICollection_get_SyncRoot, app::List_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C1DFF0, void, set_Item, app::List_1_Moon_Timeline_Reaction_* this_ptr, int32_t index, app::Reaction value)
    IL2CPP_REGISTER_METHOD(0x02C1E050, bool, IsCompatibleObject, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02C1E150, app::Object*, IList_get_Item, app::List_1_Moon_Timeline_Reaction_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02DED870, void, IList_set_Item, app::List_1_Moon_Timeline_Reaction_* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02DEDA00, int32_t, IList_Add, app::List_1_Moon_Timeline_Reaction_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, app::List_1_Moon_Timeline_Reaction_* this_ptr, app::IEnumerable_1_Moon_Timeline_Reaction_* collection)
    IL2CPP_REGISTER_METHOD(0x025E9050, app::ReadOnlyCollection_1_Moon_Timeline_Reaction_*, AsReadOnly, app::List_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02C1E5B0,
        int32_t,
        BinarySearch_1,
        app::List_1_Moon_Timeline_Reaction_* this_ptr,
        int32_t index,
        int32_t count,
        app::Reaction item,
        app::IComparer_1_Moon_Timeline_Reaction_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C1E650,
        int32_t,
        BinarySearch_2,
        app::List_1_Moon_Timeline_Reaction_* this_ptr,
        app::Reaction item,
        app::IComparer_1_Moon_Timeline_Reaction_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02C1E6F0, bool, Contains, app::List_1_Moon_Timeline_Reaction_* this_ptr, app::Reaction item)
    IL2CPP_REGISTER_METHOD(0x02C1E7E0, bool, IList_Contains, app::List_1_Moon_Timeline_Reaction_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x025E9490, void, CopyTo_1, app::List_1_Moon_Timeline_Reaction_* this_ptr, app::Reaction__Array* array)
    IL2CPP_REGISTER_METHOD(0x02DEDBB0, void, ICollection_CopyTo, app::List_1_Moon_Timeline_Reaction_* this_ptr, app::Array* array, int32_t array_index)
    IL2CPP_REGISTER_METHOD(
        0x025E95B0,
        void,
        CopyTo_2,
        app::List_1_Moon_Timeline_Reaction_* this_ptr,
        int32_t index,
        app::Reaction__Array* array,
        int32_t array_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x025E95F0, void, CopyTo_3, app::List_1_Moon_Timeline_Reaction_* this_ptr, app::Reaction__Array* array, int32_t array_index)
    IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity, app::List_1_Moon_Timeline_Reaction_* this_ptr, int32_t min)
    IL2CPP_REGISTER_METHOD(0x025E96A0, bool, Exists, app::List_1_Moon_Timeline_Reaction_* this_ptr, app::Predicate_1_Moon_Timeline_Reaction_* match)
    IL2CPP_REGISTER_METHOD(0x02C1EA20, app::Reaction, Find, app::List_1_Moon_Timeline_Reaction_* this_ptr, app::Predicate_1_Moon_Timeline_Reaction_* match)
    IL2CPP_REGISTER_METHOD(
        0x02C1EB60,
        app::List_1_Moon_Timeline_Reaction_*,
        FindAll,
        app::List_1_Moon_Timeline_Reaction_* this_ptr,
        app::Predicate_1_Moon_Timeline_Reaction_* match
    )
    IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex_1, app::List_1_Moon_Timeline_Reaction_* this_ptr, app::Predicate_1_Moon_Timeline_Reaction_* match)
    IL2CPP_REGISTER_METHOD(
        0x02C1EDA0,
        int32_t,
        FindIndex_2,
        app::List_1_Moon_Timeline_Reaction_* this_ptr,
        int32_t start_index,
        int32_t count,
        app::Predicate_1_Moon_Timeline_Reaction_* match
    )
    IL2CPP_REGISTER_METHOD(0x02DEDCA0, void, ForEach, app::List_1_Moon_Timeline_Reaction_* this_ptr, app::Action_1_Moon_Timeline_Reaction_* action)
    IL2CPP_REGISTER_METHOD(
        0x02C1F0C0,
        app::IEnumerator_1_Moon_Timeline_Reaction_*,
        System_Collections_Generic_IEnumerable_T__GetEnumerator,
        app::List_1_Moon_Timeline_Reaction_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02C1F0C0, app::IEnumerator*, IEnumerable_GetEnumerator, app::List_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E9DF0,
        app::List_1_Moon_Timeline_Reaction_*,
        GetRange,
        app::List_1_Moon_Timeline_Reaction_* this_ptr,
        int32_t index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x02C1F170, int32_t, IndexOf, app::List_1_Moon_Timeline_Reaction_* this_ptr, app::Reaction item)
    IL2CPP_REGISTER_METHOD(0x02C1F1C0, int32_t, IList_IndexOf, app::List_1_Moon_Timeline_Reaction_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x02C1F310, void, Insert, app::List_1_Moon_Timeline_Reaction_* this_ptr, int32_t index, app::Reaction item)
    IL2CPP_REGISTER_METHOD(0x02DEDE50, void, IList_Insert, app::List_1_Moon_Timeline_Reaction_* this_ptr, int32_t index, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02DEDFF0,
        void,
        InsertRange,
        app::List_1_Moon_Timeline_Reaction_* this_ptr,
        int32_t index,
        app::IEnumerable_1_Moon_Timeline_Reaction_* collection
    )
    IL2CPP_REGISTER_METHOD(0x02C1F8F0, bool, Remove, app::List_1_Moon_Timeline_Reaction_* this_ptr, app::Reaction item)
    IL2CPP_REGISTER_METHOD(0x02C1F980, void, IList_Remove, app::List_1_Moon_Timeline_Reaction_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x02C1FAD0, int32_t, RemoveAll, app::List_1_Moon_Timeline_Reaction_* this_ptr, app::Predicate_1_Moon_Timeline_Reaction_* match)
    IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange, app::List_1_Moon_Timeline_Reaction_* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse_1, app::List_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse_2, app::List_1_Moon_Timeline_Reaction_* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort_1, app::List_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EADB0, void, Sort_2, app::List_1_Moon_Timeline_Reaction_* this_ptr, app::IComparer_1_Moon_Timeline_Reaction_* comparer)
    IL2CPP_REGISTER_METHOD(
        0x025EAE20,
        void,
        Sort_3,
        app::List_1_Moon_Timeline_Reaction_* this_ptr,
        int32_t index,
        int32_t count,
        app::IComparer_1_Moon_Timeline_Reaction_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort_4, app::List_1_Moon_Timeline_Reaction_* this_ptr, app::Comparison_1_Moon_Timeline_Reaction_* comparison)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::Reaction__Array*, ToArray, app::List_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess, app::List_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EAFD0, void, cctor, )
} // namespace app::classes::System::Collections::Generic::List_1_Moon_Timeline_Reaction_
