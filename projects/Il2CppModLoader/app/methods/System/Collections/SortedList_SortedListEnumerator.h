#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::SortedList_SortedListEnumerator {
    IL2CPP_REGISTER_METHOD(0x0202F720, void, ctor, (app::SortedList_SortedListEnumerator * this_ptr, app::SortedList* sorted_list, int32_t index, int32_t count, int32_t get_obj_ret_type))
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object*, Clone, (app::SortedList_SortedListEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0202F760, app::Object*, get_Key, (app::SortedList_SortedListEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04774B28, SortedList_SortedListEnumerator_get_Key__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0202F880, bool, MoveNext, (app::SortedList_SortedListEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04770240, SortedList_SortedListEnumerator_MoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0202FA10, app::DictionaryEntry, get_Entry, (app::SortedList_SortedListEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04724210, SortedList_SortedListEnumerator_get_Entry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0202FB40, app::Object*, get_Current, (app::SortedList_SortedListEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047536D8, SortedList_SortedListEnumerator_get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0202FC60, app::Object*, get_Value, (app::SortedList_SortedListEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477EF38, SortedList_SortedListEnumerator_get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0202FD80, void, Reset, (app::SortedList_SortedListEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04705A68, SortedList_SortedListEnumerator_Reset__MethodInfo)
} // namespace app::classes::System::Collections::SortedList_SortedListEnumerator
