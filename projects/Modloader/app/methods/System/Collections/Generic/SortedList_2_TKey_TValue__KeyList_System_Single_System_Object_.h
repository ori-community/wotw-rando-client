#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SortedList_2_TKey_TValue_KeyList_System_Single_System_Object_.h>
#include <Modloader/app/structs/SortedList_2_System_Single_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator_1_System_Single_.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::System::Collections::Generic::SortedList_2_TKey_TValue__KeyList_System_Single_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x019D6B90, void, ctor, (app::SortedList_2_TKey_TValue_KeyList_System_Single_System_Object_ * this_ptr, app::SortedList_2_System_Single_System_Object_* dictionary))
    IL2CPP_REGISTER_METHOD(0x004F0AC0, int32_t, get_Count, (app::SortedList_2_TKey_TValue_KeyList_System_Single_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::SortedList_2_TKey_TValue_KeyList_System_Single_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::SortedList_2_TKey_TValue_KeyList_System_Single_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CAB2F0, app::Object*, ICollection_get_SyncRoot, (app::SortedList_2_TKey_TValue_KeyList_System_Single_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CAB380, void, Add, (app::SortedList_2_TKey_TValue_KeyList_System_Single_System_Object_ * this_ptr, float key))
    IL2CPP_REGISTER_METHODINFO(0x0473E938, SortedList_2_TKey_TValue_KeyList_System_Single_System_Object__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CAB3E0, void, Clear, (app::SortedList_2_TKey_TValue_KeyList_System_Single_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04762DD8, SortedList_2_TKey_TValue_KeyList_System_Single_System_Object__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CAB440, bool, Contains, (app::SortedList_2_TKey_TValue_KeyList_System_Single_System_Object_ * this_ptr, float key))
    IL2CPP_REGISTER_METHOD(0x02CAA260, void, CopyTo, (app::SortedList_2_TKey_TValue_KeyList_System_Single_System_Object_ * this_ptr, app::Single__Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x02CAB470, void, ICollection_CopyTo, (app::SortedList_2_TKey_TValue_KeyList_System_Single_System_Object_ * this_ptr, app::Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHODINFO(0x0478DCA0, SortedList_2_TKey_TValue_KeyList_System_Single_System_Object__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CAB5F0, void, Insert, (app::SortedList_2_TKey_TValue_KeyList_System_Single_System_Object_ * this_ptr, int32_t index, float value))
    IL2CPP_REGISTER_METHODINFO(0x04720320, SortedList_2_TKey_TValue_KeyList_System_Single_System_Object__Insert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CAA4B0, float, get_Item, (app::SortedList_2_TKey_TValue_KeyList_System_Single_System_Object_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02CAB650, void, set_Item, (app::SortedList_2_TKey_TValue_KeyList_System_Single_System_Object_ * this_ptr, int32_t index, float value))
    IL2CPP_REGISTER_METHODINFO(0x04740320, SortedList_2_TKey_TValue_KeyList_System_Single_System_Object__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CAA540, app::IEnumerator_1_System_Single_*, GetEnumerator, (app::SortedList_2_TKey_TValue_KeyList_System_Single_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CAA540, app::IEnumerator*, IEnumerable_GetEnumerator, (app::SortedList_2_TKey_TValue_KeyList_System_Single_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CAB6B0, int32_t, IndexOf, (app::SortedList_2_TKey_TValue_KeyList_System_Single_System_Object_ * this_ptr, float key))
    IL2CPP_REGISTER_METHODINFO(0x047773B0, SortedList_2_TKey_TValue_KeyList_System_Single_System_Object__IndexOf__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CAB7B0, bool, Remove, (app::SortedList_2_TKey_TValue_KeyList_System_Single_System_Object_ * this_ptr, float key))
    IL2CPP_REGISTER_METHODINFO(0x0474AB18, SortedList_2_TKey_TValue_KeyList_System_Single_System_Object__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CAB810, void, RemoveAt, (app::SortedList_2_TKey_TValue_KeyList_System_Single_System_Object_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0477C528, SortedList_2_TKey_TValue_KeyList_System_Single_System_Object__RemoveAt__MethodInfo)
} // namespace app::classes::System::Collections::Generic::SortedList_2_TKey_TValue__KeyList_System_Single_System_Object_
