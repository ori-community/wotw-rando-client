#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SortedList_KeyList.h>
#include <Modloader/app/structs/SortedList.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::System::Collections::SortedList_KeyList {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::SortedList_KeyList * this_ptr, app::SortedList* sorted_list))
    IL2CPP_REGISTER_METHOD(0x004F0AC0, int32_t, get_Count, (app::SortedList_KeyList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::SortedList_KeyList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsFixedSize, (app::SortedList_KeyList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017173C0, bool, get_IsSynchronized, (app::SortedList_KeyList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017173F0, app::Object*, get_SyncRoot, (app::SortedList_KeyList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0202EF90, int32_t, Add, (app::SortedList_KeyList * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHODINFO(0x04756338, SortedList_KeyList_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0202F000, void, Clear, (app::SortedList_KeyList * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04764C18, SortedList_KeyList_Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DFFCE0, bool, Contains, (app::SortedList_KeyList * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x0202F070, void, CopyTo, (app::SortedList_KeyList * this_ptr, app::Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHODINFO(0x047811A8, SortedList_KeyList_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0202F190, void, Insert, (app::SortedList_KeyList * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x047785D8, SortedList_KeyList_Insert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0202F200, app::Object*, get_Item, (app::SortedList_KeyList * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0202F230, void, set_Item, (app::SortedList_KeyList * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x047053B8, SortedList_KeyList_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0202F2A0, app::IEnumerator*, GetEnumerator, (app::SortedList_KeyList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0202F440, int32_t, IndexOf, (app::SortedList_KeyList * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHODINFO(0x04754DA8, SortedList_KeyList_IndexOf__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0202F580, void, Remove, (app::SortedList_KeyList * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHODINFO(0x0478B7F8, SortedList_KeyList_Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0202F5F0, void, RemoveAt, (app::SortedList_KeyList * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047371D0, SortedList_KeyList_RemoveAt__MethodInfo)
} // namespace app::classes::System::Collections::SortedList_KeyList
