#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/SortedList_2_System_Single_System_Object_.h>
#include <Modloader/app/structs/SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_.h>

namespace app::classes::System::Collections::Generic::SortedList_2_TKey_TValue__ValueList_System_Single_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x019D6B90,
        void,
        ctor,
        app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_* this_ptr,
        app::SortedList_2_System_Single_System_Object_* dictionary
    )
    IL2CPP_REGISTER_METHOD(0x004F0AC0, int32_t, get_Count, app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CAE1A0, app::Object*, ICollection_get_SyncRoot, app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CAE230, void, Add, app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x02CAE290, void, Clear, app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AD0810, bool, Contains, app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02CAD520,
        void,
        CopyTo,
        app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_* this_ptr,
        app::Object__Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(
        0x02CAE2F0,
        void,
        ICollection_CopyTo,
        app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02CAE470,
        void,
        Insert,
        app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02CAA4B0, app::Object*, get_Item, app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x02CAE4D0,
        void,
        set_Item,
        app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02CAA540,
        app::IEnumerator_1_System_Object_*,
        GetEnumerator,
        app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02CAA540,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02CAD7D0, int32_t, IndexOf, app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02CAE530, bool, Remove, app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02CAE590, void, RemoveAt, app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_* this_ptr, int32_t index)
} // namespace app::classes::System::Collections::Generic::SortedList_2_TKey_TValue__ValueList_System_Single_System_Object_
