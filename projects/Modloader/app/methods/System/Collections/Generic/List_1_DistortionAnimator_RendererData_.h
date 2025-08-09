#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_DistortionAnimator_RendererData_.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Comparison_1_DistortionAnimator_RendererData_.h>
#include <Modloader/app/structs/DistortionAnimator_RendererData.h>
#include <Modloader/app/structs/DistortionAnimator_RendererData__Array.h>
#include <Modloader/app/structs/IComparer_1_DistortionAnimator_RendererData_.h>
#include <Modloader/app/structs/IEnumerable_1_DistortionAnimator_RendererData_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_DistortionAnimator_RendererData_.h>
#include <Modloader/app/structs/List_1_DistortionAnimator_RendererData_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_DistortionAnimator_RendererData_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Predicate_1_DistortionAnimator_RendererData_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_DistortionAnimator_RendererData_.h>

namespace app::classes::System::Collections::Generic::List_1_DistortionAnimator_RendererData_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_DistortionAnimator_RendererData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025ECB30, void, Add, app::List_1_DistortionAnimator_RendererData_* this_ptr, app::DistortionAnimator_RendererData item)
    IL2CPP_REGISTER_METHOD(0x025EC760, app::DistortionAnimator_RendererData, get_Item, app::List_1_DistortionAnimator_RendererData_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_DistortionAnimator_RendererData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, app::List_1_DistortionAnimator_RendererData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, app::List_1_DistortionAnimator_RendererData_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(
        0x02E5CA20,
        void,
        ctor_3,
        app::List_1_DistortionAnimator_RendererData_* this_ptr,
        app::IEnumerable_1_DistortionAnimator_RendererData_* collection
    )
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, app::List_1_DistortionAnimator_RendererData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, app::List_1_DistortionAnimator_RendererData_* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, app::List_1_DistortionAnimator_RendererData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, app::List_1_DistortionAnimator_RendererData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, app::List_1_DistortionAnimator_RendererData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::List_1_DistortionAnimator_RendererData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02E5CEB0, app::Object*, ICollection_get_SyncRoot, app::List_1_DistortionAnimator_RendererData_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025EC7A0,
        void,
        set_Item,
        app::List_1_DistortionAnimator_RendererData_* this_ptr,
        int32_t index,
        app::DistortionAnimator_RendererData value
    )
    IL2CPP_REGISTER_METHOD(0x025EC810, bool, IsCompatibleObject, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x025EC910, app::Object*, IList_get_Item, app::List_1_DistortionAnimator_RendererData_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02E5D010, void, IList_set_Item, app::List_1_DistortionAnimator_RendererData_* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02E5D1B0, int32_t, IList_Add, app::List_1_DistortionAnimator_RendererData_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x025E9020,
        void,
        AddRange,
        app::List_1_DistortionAnimator_RendererData_* this_ptr,
        app::IEnumerable_1_DistortionAnimator_RendererData_* collection
    )
    IL2CPP_REGISTER_METHOD(
        0x025E9050,
        app::ReadOnlyCollection_1_DistortionAnimator_RendererData_*,
        AsReadOnly,
        app::List_1_DistortionAnimator_RendererData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x025ECD80,
        int32_t,
        BinarySearch_1,
        app::List_1_DistortionAnimator_RendererData_* this_ptr,
        int32_t index,
        int32_t count,
        app::DistortionAnimator_RendererData item,
        app::IComparer_1_DistortionAnimator_RendererData_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x025ECE20,
        int32_t,
        BinarySearch_2,
        app::List_1_DistortionAnimator_RendererData_* this_ptr,
        app::DistortionAnimator_RendererData item,
        app::IComparer_1_DistortionAnimator_RendererData_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x025ECEC0, bool, Contains, app::List_1_DistortionAnimator_RendererData_* this_ptr, app::DistortionAnimator_RendererData item)
    IL2CPP_REGISTER_METHOD(0x025ECFB0, bool, IList_Contains, app::List_1_DistortionAnimator_RendererData_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x025E9490,
        void,
        CopyTo_1,
        app::List_1_DistortionAnimator_RendererData_* this_ptr,
        app::DistortionAnimator_RendererData__Array* array
    )
    IL2CPP_REGISTER_METHOD(0x02E5D360, void, ICollection_CopyTo, app::List_1_DistortionAnimator_RendererData_* this_ptr, app::Array* array, int32_t array_index)
    IL2CPP_REGISTER_METHOD(
        0x025E95B0,
        void,
        CopyTo_2,
        app::List_1_DistortionAnimator_RendererData_* this_ptr,
        int32_t index,
        app::DistortionAnimator_RendererData__Array* array,
        int32_t array_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x025E95F0,
        void,
        CopyTo_3,
        app::List_1_DistortionAnimator_RendererData_* this_ptr,
        app::DistortionAnimator_RendererData__Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity, app::List_1_DistortionAnimator_RendererData_* this_ptr, int32_t min)
    IL2CPP_REGISTER_METHOD(
        0x025E96A0,
        bool,
        Exists,
        app::List_1_DistortionAnimator_RendererData_* this_ptr,
        app::Predicate_1_DistortionAnimator_RendererData_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x025ED1F0,
        app::DistortionAnimator_RendererData,
        Find,
        app::List_1_DistortionAnimator_RendererData_* this_ptr,
        app::Predicate_1_DistortionAnimator_RendererData_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x025ED330,
        app::List_1_DistortionAnimator_RendererData_*,
        FindAll,
        app::List_1_DistortionAnimator_RendererData_* this_ptr,
        app::Predicate_1_DistortionAnimator_RendererData_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x025E9A20,
        int32_t,
        FindIndex_1,
        app::List_1_DistortionAnimator_RendererData_* this_ptr,
        app::Predicate_1_DistortionAnimator_RendererData_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x025ED580,
        int32_t,
        FindIndex_2,
        app::List_1_DistortionAnimator_RendererData_* this_ptr,
        int32_t start_index,
        int32_t count,
        app::Predicate_1_DistortionAnimator_RendererData_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02E5D450,
        void,
        ForEach,
        app::List_1_DistortionAnimator_RendererData_* this_ptr,
        app::Action_1_DistortionAnimator_RendererData_* action
    )
    IL2CPP_REGISTER_METHOD(
        0x025ED850,
        app::List_1_T_Enumerator_DistortionAnimator_RendererData_,
        GetEnumerator,
        app::List_1_DistortionAnimator_RendererData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x025ED8A0,
        app::IEnumerator_1_DistortionAnimator_RendererData_*,
        System_Collections_Generic_IEnumerable_T__GetEnumerator,
        app::List_1_DistortionAnimator_RendererData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x025ED8A0, app::IEnumerator*, IEnumerable_GetEnumerator, app::List_1_DistortionAnimator_RendererData_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E9DF0,
        app::List_1_DistortionAnimator_RendererData_*,
        GetRange,
        app::List_1_DistortionAnimator_RendererData_* this_ptr,
        int32_t index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x025ED940, int32_t, IndexOf, app::List_1_DistortionAnimator_RendererData_* this_ptr, app::DistortionAnimator_RendererData item)
    IL2CPP_REGISTER_METHOD(0x025ED990, int32_t, IList_IndexOf, app::List_1_DistortionAnimator_RendererData_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x025EDAF0,
        void,
        Insert,
        app::List_1_DistortionAnimator_RendererData_* this_ptr,
        int32_t index,
        app::DistortionAnimator_RendererData item
    )
    IL2CPP_REGISTER_METHOD(0x02E5D600, void, IList_Insert, app::List_1_DistortionAnimator_RendererData_* this_ptr, int32_t index, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02E5D7A0,
        void,
        InsertRange,
        app::List_1_DistortionAnimator_RendererData_* this_ptr,
        int32_t index,
        app::IEnumerable_1_DistortionAnimator_RendererData_* collection
    )
    IL2CPP_REGISTER_METHOD(0x025EE0D0, bool, Remove, app::List_1_DistortionAnimator_RendererData_* this_ptr, app::DistortionAnimator_RendererData item)
    IL2CPP_REGISTER_METHOD(0x025EE160, void, IList_Remove, app::List_1_DistortionAnimator_RendererData_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x025EE2B0,
        int32_t,
        RemoveAll,
        app::List_1_DistortionAnimator_RendererData_* this_ptr,
        app::Predicate_1_DistortionAnimator_RendererData_* match
    )
    IL2CPP_REGISTER_METHOD(0x025EE4F0, void, RemoveAt, app::List_1_DistortionAnimator_RendererData_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange, app::List_1_DistortionAnimator_RendererData_* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse_1, app::List_1_DistortionAnimator_RendererData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse_2, app::List_1_DistortionAnimator_RendererData_* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort_1, app::List_1_DistortionAnimator_RendererData_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025EADB0,
        void,
        Sort_2,
        app::List_1_DistortionAnimator_RendererData_* this_ptr,
        app::IComparer_1_DistortionAnimator_RendererData_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAE20,
        void,
        Sort_3,
        app::List_1_DistortionAnimator_RendererData_* this_ptr,
        int32_t index,
        int32_t count,
        app::IComparer_1_DistortionAnimator_RendererData_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAEA0,
        void,
        Sort_4,
        app::List_1_DistortionAnimator_RendererData_* this_ptr,
        app::Comparison_1_DistortionAnimator_RendererData_* comparison
    )
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::DistortionAnimator_RendererData__Array*, ToArray, app::List_1_DistortionAnimator_RendererData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess, app::List_1_DistortionAnimator_RendererData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EAFD0, void, cctor, )
} // namespace app::classes::System::Collections::Generic::List_1_DistortionAnimator_RendererData_
