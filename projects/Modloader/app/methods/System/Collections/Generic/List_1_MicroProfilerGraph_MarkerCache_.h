#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_MicroProfilerGraph_MarkerCache_.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Comparison_1_MicroProfilerGraph_MarkerCache_.h>
#include <Modloader/app/structs/IComparer_1_MicroProfilerGraph_MarkerCache_.h>
#include <Modloader/app/structs/IEnumerable_1_MicroProfilerGraph_MarkerCache_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_MicroProfilerGraph_MarkerCache_.h>
#include <Modloader/app/structs/List_1_MicroProfilerGraph_MarkerCache_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_MicroProfilerGraph_MarkerCache_.h>
#include <Modloader/app/structs/MicroProfilerGraph_MarkerCache.h>
#include <Modloader/app/structs/MicroProfilerGraph_MarkerCache__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Predicate_1_MicroProfilerGraph_MarkerCache_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_MicroProfilerGraph_MarkerCache_.h>

namespace app::classes::System::Collections::Generic::List_1_MicroProfilerGraph_MarkerCache_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D49F20, void, Add, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr, app::MicroProfilerGraph_MarkerCache item)
    IL2CPP_REGISTER_METHOD(
        0x02D49BC0,
        void,
        set_Item,
        app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr,
        int32_t index,
        app::MicroProfilerGraph_MarkerCache value
    )
    IL2CPP_REGISTER_METHOD(0x02D49B80, app::MicroProfilerGraph_MarkerCache, get_Item, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(
        0x02D49590,
        void,
        ctor_3,
        app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr,
        app::IEnumerable_1_MicroProfilerGraph_MarkerCache_* collection
    )
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D49A20, app::Object*, ICollection_get_SyncRoot, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D49C20, bool, IsCompatibleObject, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02D49D10, app::Object*, IList_get_Item, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02D49D90, void, IList_set_Item, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02D49FC0, int32_t, IList_Add, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x025E9020,
        void,
        AddRange,
        app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr,
        app::IEnumerable_1_MicroProfilerGraph_MarkerCache_* collection
    )
    IL2CPP_REGISTER_METHOD(
        0x025E9050,
        app::ReadOnlyCollection_1_MicroProfilerGraph_MarkerCache_*,
        AsReadOnly,
        app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02D4A170,
        int32_t,
        BinarySearch_1,
        app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr,
        int32_t index,
        int32_t count,
        app::MicroProfilerGraph_MarkerCache item,
        app::IComparer_1_MicroProfilerGraph_MarkerCache_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02D4A210,
        int32_t,
        BinarySearch_2,
        app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr,
        app::MicroProfilerGraph_MarkerCache item,
        app::IComparer_1_MicroProfilerGraph_MarkerCache_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02D4A2B0, bool, Contains, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr, app::MicroProfilerGraph_MarkerCache item)
    IL2CPP_REGISTER_METHOD(0x02D4A3A0, bool, IList_Contains, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x025E9490, void, CopyTo_1, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr, app::MicroProfilerGraph_MarkerCache__Array* array)
    IL2CPP_REGISTER_METHOD(0x02D4A4F0, void, ICollection_CopyTo, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr, app::Array* array, int32_t array_index)
    IL2CPP_REGISTER_METHOD(
        0x025E95B0,
        void,
        CopyTo_2,
        app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr,
        int32_t index,
        app::MicroProfilerGraph_MarkerCache__Array* array,
        int32_t array_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x025E95F0,
        void,
        CopyTo_3,
        app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr,
        app::MicroProfilerGraph_MarkerCache__Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr, int32_t min)
    IL2CPP_REGISTER_METHOD(
        0x025E96A0,
        bool,
        Exists,
        app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr,
        app::Predicate_1_MicroProfilerGraph_MarkerCache_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02D4A5E0,
        app::MicroProfilerGraph_MarkerCache,
        Find,
        app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr,
        app::Predicate_1_MicroProfilerGraph_MarkerCache_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02D4A710,
        app::List_1_MicroProfilerGraph_MarkerCache_*,
        FindAll,
        app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr,
        app::Predicate_1_MicroProfilerGraph_MarkerCache_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x025E9A20,
        int32_t,
        FindIndex_1,
        app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr,
        app::Predicate_1_MicroProfilerGraph_MarkerCache_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02D4A950,
        int32_t,
        FindIndex_2,
        app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr,
        int32_t start_index,
        int32_t count,
        app::Predicate_1_MicroProfilerGraph_MarkerCache_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02D4AA70,
        void,
        ForEach,
        app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr,
        app::Action_1_MicroProfilerGraph_MarkerCache_* action
    )
    IL2CPP_REGISTER_METHOD(
        0x02D4AC20,
        app::List_1_T_Enumerator_MicroProfilerGraph_MarkerCache_,
        GetEnumerator,
        app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02D4AC60,
        app::IEnumerator_1_MicroProfilerGraph_MarkerCache_*,
        System_Collections_Generic_IEnumerable_T__GetEnumerator,
        app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02D4AC60, app::IEnumerator*, IEnumerable_GetEnumerator, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E9DF0,
        app::List_1_MicroProfilerGraph_MarkerCache_*,
        GetRange,
        app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr,
        int32_t index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x02D4ACF0, int32_t, IndexOf, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr, app::MicroProfilerGraph_MarkerCache item)
    IL2CPP_REGISTER_METHOD(0x02D4AD40, int32_t, IList_IndexOf, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02D4AE90,
        void,
        Insert,
        app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr,
        int32_t index,
        app::MicroProfilerGraph_MarkerCache item
    )
    IL2CPP_REGISTER_METHOD(0x02D4AF70, void, IList_Insert, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr, int32_t index, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02D4B110,
        void,
        InsertRange,
        app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr,
        int32_t index,
        app::IEnumerable_1_MicroProfilerGraph_MarkerCache_* collection
    )
    IL2CPP_REGISTER_METHOD(0x02D4B470, bool, Remove, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr, app::MicroProfilerGraph_MarkerCache item)
    IL2CPP_REGISTER_METHOD(0x02D4B500, void, IList_Remove, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02D4B650,
        int32_t,
        RemoveAll,
        app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr,
        app::Predicate_1_MicroProfilerGraph_MarkerCache_* match
    )
    IL2CPP_REGISTER_METHOD(0x02D4B890, void, RemoveAt, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse_1, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse_2, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort_1, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025EADB0,
        void,
        Sort_2,
        app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr,
        app::IComparer_1_MicroProfilerGraph_MarkerCache_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAE20,
        void,
        Sort_3,
        app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr,
        int32_t index,
        int32_t count,
        app::IComparer_1_MicroProfilerGraph_MarkerCache_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAEA0,
        void,
        Sort_4,
        app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr,
        app::Comparison_1_MicroProfilerGraph_MarkerCache_* comparison
    )
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::MicroProfilerGraph_MarkerCache__Array*, ToArray, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess, app::List_1_MicroProfilerGraph_MarkerCache_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EAFD0, void, cctor, )
} // namespace app::classes::System::Collections::Generic::List_1_MicroProfilerGraph_MarkerCache_
