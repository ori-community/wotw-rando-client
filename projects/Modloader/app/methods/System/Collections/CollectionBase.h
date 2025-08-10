#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/CollectionBase.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IList.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::CollectionBase {
    IL2CPP_REGISTER_METHOD(0x0201F3C0, void, ctor, app::CollectionBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201F510, app::ArrayList*, get_InnerList, app::CollectionBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::IList*, get_List, app::CollectionBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201F670, int32_t, get_Count, app::CollectionBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201F690, void, Clear, app::CollectionBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201F6F0, void, RemoveAt, app::CollectionBase* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0201F8E0, bool, IList_get_IsReadOnly, app::CollectionBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201F910, bool, IList_get_IsFixedSize, app::CollectionBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201F940, bool, ICollection_get_IsSynchronized, app::CollectionBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201F970, app::Object*, ICollection_get_SyncRoot, app::CollectionBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201F9A0, void, ICollection_CopyTo, app::CollectionBase* this_ptr, app::Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0201F9F0, app::Object*, IList_get_Item, app::CollectionBase* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0201FB10, void, IList_set_Item, app::CollectionBase* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0201FD20, bool, IList_Contains, app::CollectionBase* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0201FD60, int32_t, IList_Add, app::CollectionBase* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0201FEE0, void, IList_Remove, app::CollectionBase* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x020200A0, int32_t, IList_IndexOf, app::CollectionBase* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x020200E0, void, IList_Insert, app::CollectionBase* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x020202A0, app::IEnumerator*, GetEnumerator, app::CollectionBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSet, app::CollectionBase* this_ptr, int32_t index, app::Object* old_value, app::Object* new_value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInsert, app::CollectionBase* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnClear, app::CollectionBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRemove, app::CollectionBase* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x020202D0, void, OnValidate, app::CollectionBase* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSetComplete, app::CollectionBase* this_ptr, int32_t index, app::Object* old_value, app::Object* new_value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInsertComplete, app::CollectionBase* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnClearComplete, app::CollectionBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRemoveComplete, app::CollectionBase* this_ptr, int32_t index, app::Object* value)
} // namespace app::classes::System::Collections::CollectionBase
