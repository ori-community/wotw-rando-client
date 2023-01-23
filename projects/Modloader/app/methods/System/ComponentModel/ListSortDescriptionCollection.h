#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ListSortDescriptionCollection.h>
#include <Modloader/app/structs/ListSortDescription__Array.h>
#include <Modloader/app/structs/ListSortDescription.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::System::ComponentModel::ListSortDescriptionCollection {
    IL2CPP_REGISTER_METHOD(0x01FF4BC0, void, ctor_1, (app::ListSortDescriptionCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FF4D10, void, ctor_2, (app::ListSortDescriptionCollection * this_ptr, app::ListSortDescription__Array* sorts))
    IL2CPP_REGISTER_METHOD(0x01FF4EB0, app::ListSortDescription*, get_Item, (app::ListSortDescriptionCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01FF4FB0, void, set_Item, (app::ListSortDescriptionCollection * this_ptr, int32_t index, app::ListSortDescription* value))
    IL2CPP_REGISTER_METHODINFO(0x04730848, ListSortDescriptionCollection_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsFixedSize, (app::ListSortDescriptionCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsReadOnly, (app::ListSortDescriptionCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FF4EB0, app::Object*, IList_get_Item, (app::ListSortDescriptionCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01FF5020, void, IList_set_Item, (app::ListSortDescriptionCollection * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x0473C988, ListSortDescriptionCollection_System_Collections_IList_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FF5090, int32_t, IList_Add, (app::ListSortDescriptionCollection * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04704708, ListSortDescriptionCollection_System_Collections_IList_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FF5100, void, IList_Clear, (app::ListSortDescriptionCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047881E8, ListSortDescriptionCollection_System_Collections_IList_Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FF5170, bool, Contains, (app::ListSortDescriptionCollection * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01FF5220, int32_t, IndexOf, (app::ListSortDescriptionCollection * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01FF52D0, void, IList_Insert, (app::ListSortDescriptionCollection * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04779BB8, ListSortDescriptionCollection_System_Collections_IList_Insert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FF5340, void, IList_Remove, (app::ListSortDescriptionCollection * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04795A90, ListSortDescriptionCollection_System_Collections_IList_Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FF53B0, void, IList_RemoveAt, (app::ListSortDescriptionCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0476FBA8, ListSortDescriptionCollection_System_Collections_IList_RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016D95F0, int32_t, get_Count, (app::ListSortDescriptionCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ICollection_get_IsSynchronized, (app::ListSortDescriptionCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object*, ICollection_get_SyncRoot, (app::ListSortDescriptionCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FF5420, void, CopyTo, (app::ListSortDescriptionCollection * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01BDD500, app::IEnumerator*, IEnumerable_GetEnumerator, (app::ListSortDescriptionCollection * this_ptr))
} // namespace app::classes::System::ComponentModel::ListSortDescriptionCollection
