#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_GenericCastManager_1_NativeArrays_.h>
#include <Modloader/app/structs/Action_1_GenericCastManager_1_NativeArrays__1.h>
#include <Modloader/app/structs/Action_1_GenericCastManager_1_NativeArrays__2.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Comparison_1_GenericCastManager_1_NativeArrays_.h>
#include <Modloader/app/structs/Comparison_1_GenericCastManager_1_NativeArrays__1.h>
#include <Modloader/app/structs/Comparison_1_GenericCastManager_1_NativeArrays__2.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_.h>
#include <Modloader/app/structs/GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array.h>
#include <Modloader/app/structs/IComparer_1_GenericCastManager_1_NativeArrays_.h>
#include <Modloader/app/structs/IComparer_1_GenericCastManager_1_NativeArrays__1.h>
#include <Modloader/app/structs/IComparer_1_GenericCastManager_1_NativeArrays__2.h>
#include <Modloader/app/structs/IEnumerable_1_GenericCastManager_1_NativeArrays_.h>
#include <Modloader/app/structs/IEnumerable_1_GenericCastManager_1_NativeArrays__1.h>
#include <Modloader/app/structs/IEnumerable_1_GenericCastManager_1_NativeArrays__2.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_GenericCastManager_1_NativeArrays_.h>
#include <Modloader/app/structs/IEnumerator_1_GenericCastManager_1_NativeArrays__1.h>
#include <Modloader/app/structs/IEnumerator_1_GenericCastManager_1_NativeArrays__2.h>
#include <Modloader/app/structs/List_1_GenericCastManager_1_NativeArrays_.h>
#include <Modloader/app/structs/List_1_GenericCastManager_1_NativeArrays__1.h>
#include <Modloader/app/structs/List_1_GenericCastManager_1_NativeArrays__2.h>
#include <Modloader/app/structs/List_1_T_Enumerator_GenericCastManager_1_NativeArrays_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_GenericCastManager_1_NativeArrays__1.h>
#include <Modloader/app/structs/List_1_T_Enumerator_GenericCastManager_1_NativeArrays__2.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Predicate_1_GenericCastManager_1_NativeArrays_.h>
#include <Modloader/app/structs/Predicate_1_GenericCastManager_1_NativeArrays__1.h>
#include <Modloader/app/structs/Predicate_1_GenericCastManager_1_NativeArrays__2.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2.h>

namespace app::classes::System::Collections::Generic::List_1_GenericCastManager_1_NativeArrays_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(
        0x02E00290,
        void,
        ctor_3,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        app::IEnumerable_1_GenericCastManager_1_NativeArrays_* collection
    )
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity_1, app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity_1, app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_1, app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize_1, app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        System_Collections_Generic_ICollection_T__get_IsReadOnly_1,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly_1, app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized_1, app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02E00730, app::Object*, ICollection_get_SyncRoot_1, app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02D24DA0,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_,
        get_Item_1,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02D24DF0,
        void,
        set_Item_1,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        int32_t index,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ value
    )
    IL2CPP_REGISTER_METHOD(0x02D24E60, bool, IsCompatibleObject_1, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02D24F80, app::Object*, IList_get_Item_1, app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02E00890, void, IList_set_Item_1, app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02D251B0,
        void,
        Add_1,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ item
    )
    IL2CPP_REGISTER_METHOD(0x02E00A30, int32_t, IList_Add_1, app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x025E9020,
        void,
        AddRange_1,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        app::IEnumerable_1_GenericCastManager_1_NativeArrays_* collection
    )
    IL2CPP_REGISTER_METHOD(
        0x025E9050,
        app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays_*,
        AsReadOnly_1,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02D25420,
        int32_t,
        BinarySearch_1,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        int32_t index,
        int32_t count,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ item,
        app::IComparer_1_GenericCastManager_1_NativeArrays_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02D254D0,
        int32_t,
        BinarySearch_2,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ item,
        app::IComparer_1_GenericCastManager_1_NativeArrays_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear_1, app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02D25570,
        bool,
        Contains_1,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ item
    )
    IL2CPP_REGISTER_METHOD(0x02D25680, bool, IList_Contains_1, app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x025E9490,
        void,
        CopyTo_1,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array* array
    )
    IL2CPP_REGISTER_METHOD(
        0x02E00BF0,
        void,
        ICollection_CopyTo_1,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        app::Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(
        0x025E95B0,
        void,
        CopyTo_2,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        int32_t index,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array* array,
        int32_t array_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x025E95F0,
        void,
        CopyTo_3,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity_1, app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr, int32_t min)
    IL2CPP_REGISTER_METHOD(
        0x025E96A0,
        bool,
        Exists_1,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        app::Predicate_1_GenericCastManager_1_NativeArrays_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02D258D0,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_,
        Find_1,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        app::Predicate_1_GenericCastManager_1_NativeArrays_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02D25A30,
        app::List_1_GenericCastManager_1_NativeArrays__2*,
        FindAll_1,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        app::Predicate_1_GenericCastManager_1_NativeArrays_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x025E9A20,
        int32_t,
        FindIndex_1,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        app::Predicate_1_GenericCastManager_1_NativeArrays_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02D25CA0,
        int32_t,
        FindIndex_2,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        int32_t start_index,
        int32_t count,
        app::Predicate_1_GenericCastManager_1_NativeArrays_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02E00CE0,
        void,
        ForEach_1,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        app::Action_1_GenericCastManager_1_NativeArrays_* action
    )
    IL2CPP_REGISTER_METHOD(
        0x02D25F90,
        app::List_1_T_Enumerator_GenericCastManager_1_NativeArrays_,
        GetEnumerator_1,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02D25FF0,
        app::IEnumerator_1_GenericCastManager_1_NativeArrays__2*,
        System_Collections_Generic_IEnumerable_T__GetEnumerator_1,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02D25FF0, app::IEnumerator*, IEnumerable_GetEnumerator_1, app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E9DF0,
        app::List_1_GenericCastManager_1_NativeArrays__2*,
        GetRange_1,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        int32_t index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02D260C0,
        int32_t,
        IndexOf_1,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ item
    )
    IL2CPP_REGISTER_METHOD(0x02D26110, int32_t, IList_IndexOf_1, app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02D26270,
        void,
        Insert_1,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        int32_t index,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ item
    )
    IL2CPP_REGISTER_METHOD(0x02E00EA0, void, IList_Insert_1, app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr, int32_t index, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02E01050,
        void,
        InsertRange_1,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        int32_t index,
        app::IEnumerable_1_GenericCastManager_1_NativeArrays_* collection
    )
    IL2CPP_REGISTER_METHOD(
        0x02D26870,
        bool,
        Remove_1,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand_ item
    )
    IL2CPP_REGISTER_METHOD(0x02D26900, void, IList_Remove_1, app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02D26A60,
        int32_t,
        RemoveAll_1,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        app::Predicate_1_GenericCastManager_1_NativeArrays_* match
    )
    IL2CPP_REGISTER_METHOD(0x02D26CD0, void, RemoveAt_1, app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange_1, app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse_1, app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse_2, app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort_1, app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025EADB0,
        void,
        Sort_2,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        app::IComparer_1_GenericCastManager_1_NativeArrays_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAE20,
        void,
        Sort_3,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        int32_t index,
        int32_t count,
        app::IComparer_1_GenericCastManager_1_NativeArrays_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAEA0,
        void,
        Sort_4,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr,
        app::Comparison_1_GenericCastManager_1_NativeArrays_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAEF0,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array*,
        ToArray_1,
        app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess_1, app::List_1_GenericCastManager_1_NativeArrays__2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EAFD0, void, cctor_1, )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_4, app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_5, app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(
        0x02E013B0,
        void,
        ctor_6,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        app::IEnumerable_1_GenericCastManager_1_NativeArrays__1* collection
    )
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity_2, app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity_2, app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_2, app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize_2, app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        System_Collections_Generic_ICollection_T__get_IsReadOnly_2,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly_2, app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized_2, app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02E01850, app::Object*, ICollection_get_SyncRoot_2, app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02D24DA0,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_,
        get_Item_2,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02D24DF0,
        void,
        set_Item_2,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        int32_t index,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ value
    )
    IL2CPP_REGISTER_METHOD(0x02D24E60, bool, IsCompatibleObject_2, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02D24F80, app::Object*, IList_get_Item_2, app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02E019B0, void, IList_set_Item_2, app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02D251B0,
        void,
        Add_2,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ item
    )
    IL2CPP_REGISTER_METHOD(0x02E01B50, int32_t, IList_Add_2, app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x025E9020,
        void,
        AddRange_2,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        app::IEnumerable_1_GenericCastManager_1_NativeArrays__1* collection
    )
    IL2CPP_REGISTER_METHOD(
        0x025E9050,
        app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__1*,
        AsReadOnly_2,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02D25420,
        int32_t,
        BinarySearch_3,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        int32_t index,
        int32_t count,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ item,
        app::IComparer_1_GenericCastManager_1_NativeArrays__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02D254D0,
        int32_t,
        BinarySearch_4,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ item,
        app::IComparer_1_GenericCastManager_1_NativeArrays__1* comparer
    )
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear_2, app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02D25570,
        bool,
        Contains_2,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ item
    )
    IL2CPP_REGISTER_METHOD(0x02D25680, bool, IList_Contains_2, app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x025E9490,
        void,
        CopyTo_4,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array* array
    )
    IL2CPP_REGISTER_METHOD(
        0x02E01D10,
        void,
        ICollection_CopyTo_2,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        app::Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(
        0x025E95B0,
        void,
        CopyTo_5,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        int32_t index,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array* array,
        int32_t array_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x025E95F0,
        void,
        CopyTo_6,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity_2, app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr, int32_t min)
    IL2CPP_REGISTER_METHOD(
        0x025E96A0,
        bool,
        Exists_2,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        app::Predicate_1_GenericCastManager_1_NativeArrays__1* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02D258D0,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_,
        Find_2,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        app::Predicate_1_GenericCastManager_1_NativeArrays__1* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02D25A30,
        app::List_1_GenericCastManager_1_NativeArrays__1*,
        FindAll_2,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        app::Predicate_1_GenericCastManager_1_NativeArrays__1* match
    )
    IL2CPP_REGISTER_METHOD(
        0x025E9A20,
        int32_t,
        FindIndex_3,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        app::Predicate_1_GenericCastManager_1_NativeArrays__1* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02D25CA0,
        int32_t,
        FindIndex_4,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        int32_t start_index,
        int32_t count,
        app::Predicate_1_GenericCastManager_1_NativeArrays__1* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02E01E00,
        void,
        ForEach_2,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        app::Action_1_GenericCastManager_1_NativeArrays__1* action
    )
    IL2CPP_REGISTER_METHOD(
        0x02D25F90,
        app::List_1_T_Enumerator_GenericCastManager_1_NativeArrays__1,
        GetEnumerator_2,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02D25FF0,
        app::IEnumerator_1_GenericCastManager_1_NativeArrays__1*,
        System_Collections_Generic_IEnumerable_T__GetEnumerator_2,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02D25FF0, app::IEnumerator*, IEnumerable_GetEnumerator_2, app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E9DF0,
        app::List_1_GenericCastManager_1_NativeArrays__1*,
        GetRange_2,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        int32_t index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02D260C0,
        int32_t,
        IndexOf_2,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ item
    )
    IL2CPP_REGISTER_METHOD(0x02D26110, int32_t, IList_IndexOf_2, app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02D26270,
        void,
        Insert_2,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        int32_t index,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ item
    )
    IL2CPP_REGISTER_METHOD(0x02E01FC0, void, IList_Insert_2, app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr, int32_t index, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02E02170,
        void,
        InsertRange_2,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        int32_t index,
        app::IEnumerable_1_GenericCastManager_1_NativeArrays__1* collection
    )
    IL2CPP_REGISTER_METHOD(
        0x02D26870,
        bool,
        Remove_2,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand_ item
    )
    IL2CPP_REGISTER_METHOD(0x02D26900, void, IList_Remove_2, app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02D26A60,
        int32_t,
        RemoveAll_2,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        app::Predicate_1_GenericCastManager_1_NativeArrays__1* match
    )
    IL2CPP_REGISTER_METHOD(0x02D26CD0, void, RemoveAt_2, app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange_2, app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse_3, app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse_4, app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort_5, app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025EADB0,
        void,
        Sort_6,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        app::IComparer_1_GenericCastManager_1_NativeArrays__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAE20,
        void,
        Sort_7,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        int32_t index,
        int32_t count,
        app::IComparer_1_GenericCastManager_1_NativeArrays__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAEA0,
        void,
        Sort_8,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr,
        app::Comparison_1_GenericCastManager_1_NativeArrays__1* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAEF0,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_RaycastCommand___Array*,
        ToArray_2,
        app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess_2, app::List_1_GenericCastManager_1_NativeArrays__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EAFD0, void, cctor_2, )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_7, app::List_1_GenericCastManager_1_NativeArrays_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_8, app::List_1_GenericCastManager_1_NativeArrays_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(
        0x02E024D0,
        void,
        ctor_9,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        app::IEnumerable_1_GenericCastManager_1_NativeArrays__2* collection
    )
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity_3, app::List_1_GenericCastManager_1_NativeArrays_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity_3, app::List_1_GenericCastManager_1_NativeArrays_* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_3, app::List_1_GenericCastManager_1_NativeArrays_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize_3, app::List_1_GenericCastManager_1_NativeArrays_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        System_Collections_Generic_ICollection_T__get_IsReadOnly_3,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly_3, app::List_1_GenericCastManager_1_NativeArrays_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized_3, app::List_1_GenericCastManager_1_NativeArrays_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02E02970, app::Object*, ICollection_get_SyncRoot_3, app::List_1_GenericCastManager_1_NativeArrays_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02D24DA0,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_,
        get_Item_3,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02D24DF0,
        void,
        set_Item_3,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        int32_t index,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ value
    )
    IL2CPP_REGISTER_METHOD(0x02D24E60, bool, IsCompatibleObject_3, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02D24F80, app::Object*, IList_get_Item_3, app::List_1_GenericCastManager_1_NativeArrays_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02E02AD0, void, IList_set_Item_3, app::List_1_GenericCastManager_1_NativeArrays_* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02D251B0,
        void,
        Add_3,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ item
    )
    IL2CPP_REGISTER_METHOD(0x02E02C70, int32_t, IList_Add_3, app::List_1_GenericCastManager_1_NativeArrays_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x025E9020,
        void,
        AddRange_3,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        app::IEnumerable_1_GenericCastManager_1_NativeArrays__2* collection
    )
    IL2CPP_REGISTER_METHOD(
        0x025E9050,
        app::ReadOnlyCollection_1_GenericCastManager_1_NativeArrays__2*,
        AsReadOnly_3,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02D25420,
        int32_t,
        BinarySearch_5,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        int32_t index,
        int32_t count,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ item,
        app::IComparer_1_GenericCastManager_1_NativeArrays__2* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02D254D0,
        int32_t,
        BinarySearch_6,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ item,
        app::IComparer_1_GenericCastManager_1_NativeArrays__2* comparer
    )
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear_3, app::List_1_GenericCastManager_1_NativeArrays_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02D25570,
        bool,
        Contains_3,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ item
    )
    IL2CPP_REGISTER_METHOD(0x02D25680, bool, IList_Contains_3, app::List_1_GenericCastManager_1_NativeArrays_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x025E9490,
        void,
        CopyTo_7,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array* array
    )
    IL2CPP_REGISTER_METHOD(
        0x02E02E30,
        void,
        ICollection_CopyTo_3,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        app::Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(
        0x025E95B0,
        void,
        CopyTo_8,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        int32_t index,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array* array,
        int32_t array_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x025E95F0,
        void,
        CopyTo_9,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity_3, app::List_1_GenericCastManager_1_NativeArrays_* this_ptr, int32_t min)
    IL2CPP_REGISTER_METHOD(
        0x025E96A0,
        bool,
        Exists_3,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        app::Predicate_1_GenericCastManager_1_NativeArrays__2* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02D258D0,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_,
        Find_3,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        app::Predicate_1_GenericCastManager_1_NativeArrays__2* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02D25A30,
        app::List_1_GenericCastManager_1_NativeArrays_*,
        FindAll_3,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        app::Predicate_1_GenericCastManager_1_NativeArrays__2* match
    )
    IL2CPP_REGISTER_METHOD(
        0x025E9A20,
        int32_t,
        FindIndex_5,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        app::Predicate_1_GenericCastManager_1_NativeArrays__2* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02D25CA0,
        int32_t,
        FindIndex_6,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        int32_t start_index,
        int32_t count,
        app::Predicate_1_GenericCastManager_1_NativeArrays__2* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02E02F20,
        void,
        ForEach_3,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        app::Action_1_GenericCastManager_1_NativeArrays__2* action
    )
    IL2CPP_REGISTER_METHOD(
        0x02D25F90,
        app::List_1_T_Enumerator_GenericCastManager_1_NativeArrays__2,
        GetEnumerator_3,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02D25FF0,
        app::IEnumerator_1_GenericCastManager_1_NativeArrays_*,
        System_Collections_Generic_IEnumerable_T__GetEnumerator_3,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02D25FF0, app::IEnumerator*, IEnumerable_GetEnumerator_3, app::List_1_GenericCastManager_1_NativeArrays_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E9DF0,
        app::List_1_GenericCastManager_1_NativeArrays_*,
        GetRange_3,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        int32_t index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02D260C0,
        int32_t,
        IndexOf_3,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ item
    )
    IL2CPP_REGISTER_METHOD(0x02D26110, int32_t, IList_IndexOf_3, app::List_1_GenericCastManager_1_NativeArrays_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02D26270,
        void,
        Insert_3,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        int32_t index,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ item
    )
    IL2CPP_REGISTER_METHOD(0x02E030E0, void, IList_Insert_3, app::List_1_GenericCastManager_1_NativeArrays_* this_ptr, int32_t index, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02E03290,
        void,
        InsertRange_3,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        int32_t index,
        app::IEnumerable_1_GenericCastManager_1_NativeArrays__2* collection
    )
    IL2CPP_REGISTER_METHOD(
        0x02D26870,
        bool,
        Remove_3,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand_ item
    )
    IL2CPP_REGISTER_METHOD(0x02D26900, void, IList_Remove_3, app::List_1_GenericCastManager_1_NativeArrays_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02D26A60,
        int32_t,
        RemoveAll_3,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        app::Predicate_1_GenericCastManager_1_NativeArrays__2* match
    )
    IL2CPP_REGISTER_METHOD(0x02D26CD0, void, RemoveAt_3, app::List_1_GenericCastManager_1_NativeArrays_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange_3, app::List_1_GenericCastManager_1_NativeArrays_* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse_5, app::List_1_GenericCastManager_1_NativeArrays_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse_6, app::List_1_GenericCastManager_1_NativeArrays_* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort_9, app::List_1_GenericCastManager_1_NativeArrays_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025EADB0,
        void,
        Sort_10,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        app::IComparer_1_GenericCastManager_1_NativeArrays__2* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAE20,
        void,
        Sort_11,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        int32_t index,
        int32_t count,
        app::IComparer_1_GenericCastManager_1_NativeArrays__2* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAEA0,
        void,
        Sort_12,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr,
        app::Comparison_1_GenericCastManager_1_NativeArrays__2* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAEF0,
        app::GenericCastManager_1_Command_NativeArrays_UnityEngine_SpherecastCommand___Array*,
        ToArray_3,
        app::List_1_GenericCastManager_1_NativeArrays_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess_3, app::List_1_GenericCastManager_1_NativeArrays_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EAFD0, void, cctor_3, )
} // namespace app::classes::System::Collections::Generic::List_1_GenericCastManager_1_NativeArrays_
