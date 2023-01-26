#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SortedList_2_TKey_TValue_ValueList_System_Int32_System_Object_.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/SortedList_2_System_Int32_System_Object_.h>

namespace app::classes::System::Collections::Generic::SortedList_2_TKey_TValue__ValueList_System_Int32_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x019D6B90, void, ctor, (app::SortedList_2_TKey_TValue_ValueList_System_Int32_System_Object_ * this_ptr, app::SortedList_2_System_Int32_System_Object_* dictionary))
    IL2CPP_REGISTER_METHOD(0x004F0AC0, int32_t, get_Count, (app::SortedList_2_TKey_TValue_ValueList_System_Int32_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::SortedList_2_TKey_TValue_ValueList_System_Int32_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::SortedList_2_TKey_TValue_ValueList_System_Int32_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CAD3D0, app::Object*, ICollection_get_SyncRoot, (app::SortedList_2_TKey_TValue_ValueList_System_Int32_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CAD460, void, Add, (app::SortedList_2_TKey_TValue_ValueList_System_Int32_System_Object_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02CAD4C0, void, Clear, (app::SortedList_2_TKey_TValue_ValueList_System_Int32_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AD0810, bool, Contains, (app::SortedList_2_TKey_TValue_ValueList_System_Int32_System_Object_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02CAD520, void, CopyTo, (app::SortedList_2_TKey_TValue_ValueList_System_Int32_System_Object_ * this_ptr, app::Object__Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x02CAD590, void, ICollection_CopyTo, (app::SortedList_2_TKey_TValue_ValueList_System_Int32_System_Object_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02CAD710, void, Insert, (app::SortedList_2_TKey_TValue_ValueList_System_Int32_System_Object_ * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02CAA4B0, app::Object*, get_Item, (app::SortedList_2_TKey_TValue_ValueList_System_Int32_System_Object_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02CAD770, void, set_Item, (app::SortedList_2_TKey_TValue_ValueList_System_Int32_System_Object_ * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02CAA540, app::IEnumerator_1_System_Object_*, GetEnumerator, (app::SortedList_2_TKey_TValue_ValueList_System_Int32_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CAA540, app::IEnumerator*, IEnumerable_GetEnumerator, (app::SortedList_2_TKey_TValue_ValueList_System_Int32_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CAD7D0, int32_t, IndexOf, (app::SortedList_2_TKey_TValue_ValueList_System_Int32_System_Object_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02CAD840, bool, Remove, (app::SortedList_2_TKey_TValue_ValueList_System_Int32_System_Object_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02CAD8A0, void, RemoveAt, (app::SortedList_2_TKey_TValue_ValueList_System_Int32_System_Object_ * this_ptr, int32_t index))
} // namespace app::classes::System::Collections::Generic::SortedList_2_TKey_TValue__ValueList_System_Int32_System_Object_
