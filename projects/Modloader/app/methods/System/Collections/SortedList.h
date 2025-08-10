#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IList.h>
#include <Modloader/app/structs/KeyValuePairs__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SortedList.h>

namespace app::classes::System::Collections::SortedList {
    IL2CPP_REGISTER_METHOD(0x0202CBF0, void, ctor_1, app::SortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202CC00, void, Init, app::SortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202CDE0, void, ctor_2, app::SortedList* this_ptr, int32_t initial_capacity)
    IL2CPP_REGISTER_METHOD(0x0202CFF0, void, ctor_3, app::SortedList* this_ptr, app::IComparer* comparer)
    IL2CPP_REGISTER_METHOD(0x0202D020, void, ctor_4, app::SortedList* this_ptr, app::IComparer* comparer, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x0202D070, void, Add, app::SortedList* this_ptr, app::Object* key, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, app::SortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202D250, void, set_Capacity, app::SortedList* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, app::SortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7ADD0, app::ICollection*, get_Keys, app::SortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CCDBF0, app::ICollection*, get_Values, app::SortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, app::SortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsFixedSize, app::SortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, app::SortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202D420, app::Object*, get_SyncRoot, app::SortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202D580, void, Clear, app::SortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202D5C0, app::Object*, Clone, app::SortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202D780, bool, Contains, app::SortedList* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x0202D780, bool, ContainsKey, app::SortedList* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x0202D7A0, bool, ContainsValue, app::SortedList* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0202D7C0, void, CopyTo, app::SortedList* this_ptr, app::Array* array, int32_t array_index)
    IL2CPP_REGISTER_METHOD(0x0202DA90, app::KeyValuePairs__Array*, ToKeyValuePairsArray, app::SortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202DDA0, void, EnsureCapacity, app::SortedList* this_ptr, int32_t min)
    IL2CPP_REGISTER_METHOD(0x0202DE00, app::Object*, GetByIndex, app::SortedList* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0202DF10, app::IEnumerator*, IEnumerable_GetEnumerator, app::SortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202E080, app::IDictionaryEnumerator*, GetEnumerator, app::SortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202E1F0, app::Object*, GetKey, app::SortedList* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0202E300, app::IList*, GetKeyList, app::SortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202E450, app::IList*, GetValueList, app::SortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202E5A0, app::Object*, get_Item, app::SortedList* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x0202E600, void, set_Item, app::SortedList* this_ptr, app::Object* key, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0202E790, int32_t, IndexOfKey, app::SortedList* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x0202E890, int32_t, IndexOfValue, app::SortedList* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0202E930, void, Insert, app::SortedList* this_ptr, int32_t index, app::Object* key, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0202EAE0, void, RemoveAt, app::SortedList* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0202EC90, void, Remove, app::SortedList* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x0202ECD0, app::SortedList*, Synchronized, app::SortedList* list)
    IL2CPP_REGISTER_METHOD(0x0202EEE0, void, cctor, )
} // namespace app::classes::System::Collections::SortedList
