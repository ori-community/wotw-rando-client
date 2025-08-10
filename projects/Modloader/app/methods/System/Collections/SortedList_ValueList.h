#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SortedList.h>
#include <Modloader/app/structs/SortedList_ValueList.h>

namespace app::classes::System::Collections::SortedList_ValueList {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::SortedList_ValueList* this_ptr, app::SortedList* sorted_list)
    IL2CPP_REGISTER_METHOD(0x004F0AC0, int32_t, get_Count, app::SortedList_ValueList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, app::SortedList_ValueList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsFixedSize, app::SortedList_ValueList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017173C0, bool, get_IsSynchronized, app::SortedList_ValueList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017173F0, app::Object*, get_SyncRoot, app::SortedList_ValueList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02031590, int32_t, Add, app::SortedList_ValueList* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x02031600, void, Clear, app::SortedList_ValueList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02031670, bool, Contains, app::SortedList_ValueList* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x020316A0, void, CopyTo, app::SortedList_ValueList* this_ptr, app::Array* array, int32_t array_index)
    IL2CPP_REGISTER_METHOD(0x020317C0, void, Insert, app::SortedList_ValueList* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02031830, app::Object*, get_Item, app::SortedList_ValueList* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02031860, void, set_Item, app::SortedList_ValueList* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x020318D0, app::IEnumerator*, GetEnumerator, app::SortedList_ValueList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02031A70, int32_t, IndexOf, app::SortedList_ValueList* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02031B30, void, Remove, app::SortedList_ValueList* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02031BA0, void, RemoveAt, app::SortedList_ValueList* this_ptr, int32_t index)
} // namespace app::classes::System::Collections::SortedList_ValueList
