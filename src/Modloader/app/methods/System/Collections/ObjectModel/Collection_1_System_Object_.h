#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Collection_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Object_.h>
#include <Modloader/app/structs/IList_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Collections::ObjectModel::Collection_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02B7DF30, int32_t, get_Count, app::Collection_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IList_1_System_Object_*, get_Items, app::Collection_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CFA3A0, app::Object*, get_Item, app::Collection_1_System_Object_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02CFA400, void, set_Item, app::Collection_1_System_Object_* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02CFACA0, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, app::Collection_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::Collection_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CFAD90, app::Object*, ICollection_get_SyncRoot, app::Collection_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CFA3A0, app::Object*, IList_get_Item, app::Collection_1_System_Object_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02CFB2F0, void, IList_set_Item, app::Collection_1_System_Object_* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02CFACA0, bool, IList_get_IsReadOnly, app::Collection_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CFB470, bool, IList_get_IsFixedSize, app::Collection_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02776BF0, void, ctor_1, app::Collection_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B7DCF0, void, ctor_2, app::Collection_1_System_Object_* this_ptr, app::IList_1_System_Object_* list)
    IL2CPP_REGISTER_METHOD(0x02CFA500, void, Add, app::Collection_1_System_Object_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x02CFA5F0, void, Clear, app::Collection_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CFA680, void, CopyTo, app::Collection_1_System_Object_* this_ptr, app::Object__Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02CFA6F0, bool, Contains, app::Collection_1_System_Object_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x02B833F0, app::IEnumerator_1_System_Object_*, GetEnumerator, app::Collection_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CFA760, int32_t, IndexOf, app::Collection_1_System_Object_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x02CFA7D0, void, Insert, app::Collection_1_System_Object_* this_ptr, int32_t index, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x02CFA8D0, bool, Remove, app::Collection_1_System_Object_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x02CFA9D0, void, RemoveAt, app::Collection_1_System_Object_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02CFAAD0, void, ClearItems, app::Collection_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CFAB30, void, InsertItem, app::Collection_1_System_Object_* this_ptr, int32_t index, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x02CFABB0, void, RemoveItem, app::Collection_1_System_Object_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02CFAC20, void, SetItem, app::Collection_1_System_Object_* this_ptr, int32_t index, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x02CFAD00, app::IEnumerator*, IEnumerable_GetEnumerator, app::Collection_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CFAF20, void, ICollection_CopyTo, app::Collection_1_System_Object_* this_ptr, app::Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02CFB560, int32_t, IList_Add, app::Collection_1_System_Object_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02CFB740, bool, IList_Contains, app::Collection_1_System_Object_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02CFB810, int32_t, IList_IndexOf, app::Collection_1_System_Object_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02CFB8F0, void, IList_Insert, app::Collection_1_System_Object_* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02CFBAD0, void, IList_Remove, app::Collection_1_System_Object_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02CFBBF0, bool, IsCompatibleObject, app::Object* value)
} // namespace app::classes::System::Collections::ObjectModel::Collection_1_System_Object_
