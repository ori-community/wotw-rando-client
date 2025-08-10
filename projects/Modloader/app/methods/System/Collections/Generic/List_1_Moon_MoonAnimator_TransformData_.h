#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Moon_MoonAnimator_TransformData_.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Comparison_1_Moon_MoonAnimator_TransformData_.h>
#include <Modloader/app/structs/IComparer_1_Moon_MoonAnimator_TransformData_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_MoonAnimator_TransformData_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_Moon_MoonAnimator_TransformData_.h>
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_TransformData_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_MoonAnimator_TransformData_.h>
#include <Modloader/app/structs/MoonAnimator_TransformData.h>
#include <Modloader/app/structs/MoonAnimator_TransformData__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Predicate_1_Moon_MoonAnimator_TransformData_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_Moon_MoonAnimator_TransformData_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_MoonAnimator_TransformData_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D846E0, void, Add, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr, app::MoonAnimator_TransformData item)
    IL2CPP_REGISTER_METHOD(0x02D842B0, app::MoonAnimator_TransformData, get_Item, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_1, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_2, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02DE26B0,
        void,
        ctor_3,
        app::List_1_Moon_MoonAnimator_TransformData_* this_ptr,
        app::IEnumerable_1_Moon_MoonAnimator_TransformData_* collection
    )
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02DE2B50, app::Object*, ICollection_get_SyncRoot, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02D84300,
        void,
        set_Item,
        app::List_1_Moon_MoonAnimator_TransformData_* this_ptr,
        int32_t index,
        app::MoonAnimator_TransformData value
    )
    IL2CPP_REGISTER_METHOD(0x02D84380, bool, IsCompatibleObject, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02D844A0, app::Object*, IList_get_Item, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02DE2CB0, void, IList_set_Item, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02DE2E60, int32_t, IList_Add, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x025E9020,
        void,
        AddRange,
        app::List_1_Moon_MoonAnimator_TransformData_* this_ptr,
        app::IEnumerable_1_Moon_MoonAnimator_TransformData_* collection
    )
    IL2CPP_REGISTER_METHOD(
        0x025E9050,
        app::ReadOnlyCollection_1_Moon_MoonAnimator_TransformData_*,
        AsReadOnly,
        app::List_1_Moon_MoonAnimator_TransformData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02D84970,
        int32_t,
        BinarySearch_1,
        app::List_1_Moon_MoonAnimator_TransformData_* this_ptr,
        int32_t index,
        int32_t count,
        app::MoonAnimator_TransformData item,
        app::IComparer_1_Moon_MoonAnimator_TransformData_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02D84A20,
        int32_t,
        BinarySearch_2,
        app::List_1_Moon_MoonAnimator_TransformData_* this_ptr,
        app::MoonAnimator_TransformData item,
        app::IComparer_1_Moon_MoonAnimator_TransformData_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02D84AD0, bool, Contains, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr, app::MoonAnimator_TransformData item)
    IL2CPP_REGISTER_METHOD(0x02D84C00, bool, IList_Contains, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x025E9490, void, CopyTo_1, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr, app::MoonAnimator_TransformData__Array* array)
    IL2CPP_REGISTER_METHOD(0x02DE3030, void, ICollection_CopyTo, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr, app::Array* array, int32_t array_index)
    IL2CPP_REGISTER_METHOD(
        0x025E95B0,
        void,
        CopyTo_2,
        app::List_1_Moon_MoonAnimator_TransformData_* this_ptr,
        int32_t index,
        app::MoonAnimator_TransformData__Array* array,
        int32_t array_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x025E95F0,
        void,
        CopyTo_3,
        app::List_1_Moon_MoonAnimator_TransformData_* this_ptr,
        app::MoonAnimator_TransformData__Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr, int32_t min)
    IL2CPP_REGISTER_METHOD(
        0x025E96A0,
        bool,
        Exists,
        app::List_1_Moon_MoonAnimator_TransformData_* this_ptr,
        app::Predicate_1_Moon_MoonAnimator_TransformData_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02D84E60,
        app::MoonAnimator_TransformData,
        Find,
        app::List_1_Moon_MoonAnimator_TransformData_* this_ptr,
        app::Predicate_1_Moon_MoonAnimator_TransformData_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02D84FF0,
        app::List_1_Moon_MoonAnimator_TransformData_*,
        FindAll,
        app::List_1_Moon_MoonAnimator_TransformData_* this_ptr,
        app::Predicate_1_Moon_MoonAnimator_TransformData_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x025E9A20,
        int32_t,
        FindIndex_1,
        app::List_1_Moon_MoonAnimator_TransformData_* this_ptr,
        app::Predicate_1_Moon_MoonAnimator_TransformData_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02D85270,
        int32_t,
        FindIndex_2,
        app::List_1_Moon_MoonAnimator_TransformData_* this_ptr,
        int32_t start_index,
        int32_t count,
        app::Predicate_1_Moon_MoonAnimator_TransformData_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02DE3120,
        void,
        ForEach,
        app::List_1_Moon_MoonAnimator_TransformData_* this_ptr,
        app::Action_1_Moon_MoonAnimator_TransformData_* action
    )
    IL2CPP_REGISTER_METHOD(
        0x02D85580,
        app::List_1_T_Enumerator_Moon_MoonAnimator_TransformData_,
        GetEnumerator,
        app::List_1_Moon_MoonAnimator_TransformData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02D855F0,
        app::IEnumerator_1_Moon_MoonAnimator_TransformData_*,
        System_Collections_Generic_IEnumerable_T__GetEnumerator,
        app::List_1_Moon_MoonAnimator_TransformData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02D855F0, app::IEnumerator*, IEnumerable_GetEnumerator, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E9DF0,
        app::List_1_Moon_MoonAnimator_TransformData_*,
        GetRange,
        app::List_1_Moon_MoonAnimator_TransformData_* this_ptr,
        int32_t index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x02D856D0, int32_t, IndexOf, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr, app::MoonAnimator_TransformData item)
    IL2CPP_REGISTER_METHOD(0x02D85730, int32_t, IList_IndexOf, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02D858A0,
        void,
        Insert,
        app::List_1_Moon_MoonAnimator_TransformData_* this_ptr,
        int32_t index,
        app::MoonAnimator_TransformData item
    )
    IL2CPP_REGISTER_METHOD(0x02DE32F0, void, IList_Insert, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr, int32_t index, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02DE34A0,
        void,
        InsertRange,
        app::List_1_Moon_MoonAnimator_TransformData_* this_ptr,
        int32_t index,
        app::IEnumerable_1_Moon_MoonAnimator_TransformData_* collection
    )
    IL2CPP_REGISTER_METHOD(0x02D85EC0, bool, Remove, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr, app::MoonAnimator_TransformData item)
    IL2CPP_REGISTER_METHOD(0x02D85F60, void, IList_Remove, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02D860C0,
        int32_t,
        RemoveAll,
        app::List_1_Moon_MoonAnimator_TransformData_* this_ptr,
        app::Predicate_1_Moon_MoonAnimator_TransformData_* match
    )
    IL2CPP_REGISTER_METHOD(0x02D86340, void, RemoveAt, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse_1, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse_2, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort_1, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025EADB0,
        void,
        Sort_2,
        app::List_1_Moon_MoonAnimator_TransformData_* this_ptr,
        app::IComparer_1_Moon_MoonAnimator_TransformData_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAE20,
        void,
        Sort_3,
        app::List_1_Moon_MoonAnimator_TransformData_* this_ptr,
        int32_t index,
        int32_t count,
        app::IComparer_1_Moon_MoonAnimator_TransformData_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAEA0,
        void,
        Sort_4,
        app::List_1_Moon_MoonAnimator_TransformData_* this_ptr,
        app::Comparison_1_Moon_MoonAnimator_TransformData_* comparison
    )
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::MoonAnimator_TransformData__Array*, ToArray, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess, app::List_1_Moon_MoonAnimator_TransformData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EAFD0, void, cctor, )
} // namespace app::classes::System::Collections::Generic::List_1_Moon_MoonAnimator_TransformData_
