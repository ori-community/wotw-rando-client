#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#include <Modloader/app/structs/IList.h>
#include <Modloader/app/structs/KeyValuePairs__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SortedList.h>
#include <Modloader/app/structs/SortedList_SyncSortedList.h>

namespace app::classes::System::Collections::SortedList_SyncSortedList {
    IL2CPP_REGISTER_METHOD(0x0202FE70, void, ctor, app::SortedList_SyncSortedList* this_ptr, app::SortedList* list)
    IL2CPP_REGISTER_METHOD(0x0202FF40, int32_t, get_Count, app::SortedList_SyncSortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Object*, get_SyncRoot, app::SortedList_SyncSortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02030050, bool, get_IsReadOnly, app::SortedList_SyncSortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02030080, bool, get_IsFixedSize, app::SortedList_SyncSortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsSynchronized, app::SortedList_SyncSortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020300B0, app::Object*, get_Item, app::SortedList_SyncSortedList* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x020301C0, void, set_Item, app::SortedList_SyncSortedList* this_ptr, app::Object* key, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x020302D0, void, Add, app::SortedList_SyncSortedList* this_ptr, app::Object* key, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x020303E0, int32_t, get_Capacity, app::SortedList_SyncSortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020304F0, void, Clear, app::SortedList_SyncSortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020305E0, app::Object*, Clone, app::SortedList_SyncSortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020306F0, bool, Contains, app::SortedList_SyncSortedList* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x02030800, bool, ContainsKey, app::SortedList_SyncSortedList* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x02030910, bool, ContainsValue, app::SortedList_SyncSortedList* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x02030A20, void, CopyTo, app::SortedList_SyncSortedList* this_ptr, app::Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02030B30, app::Object*, GetByIndex, app::SortedList_SyncSortedList* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02030C40, app::IDictionaryEnumerator*, GetEnumerator, app::SortedList_SyncSortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02030D50, app::Object*, GetKey, app::SortedList_SyncSortedList* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02030E60, app::IList*, GetKeyList, app::SortedList_SyncSortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02030F70, app::IList*, GetValueList, app::SortedList_SyncSortedList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02031080, int32_t, IndexOfKey, app::SortedList_SyncSortedList* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x02031250, int32_t, IndexOfValue, app::SortedList_SyncSortedList* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02031360, void, RemoveAt, app::SortedList_SyncSortedList* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02031460, void, Remove, app::SortedList_SyncSortedList* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x02031560, app::KeyValuePairs__Array*, ToKeyValuePairsArray, app::SortedList_SyncSortedList* this_ptr)
} // namespace app::classes::System::Collections::SortedList_SyncSortedList
