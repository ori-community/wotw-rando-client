#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SortedList.h>
#include <Modloader/app/structs/SortedList_SortedListEnumerator.h>

namespace app::classes::System::Collections::SortedList_SortedListEnumerator {
    IL2CPP_REGISTER_METHOD(
        0x0202F720,
        void,
        ctor,
        app::SortedList_SortedListEnumerator* this_ptr,
        app::SortedList* sorted_list,
        int32_t index,
        int32_t count,
        int32_t get_obj_ret_type
    )
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object*, Clone, app::SortedList_SortedListEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202F760, app::Object*, get_Key, app::SortedList_SortedListEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202F880, bool, MoveNext, app::SortedList_SortedListEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202FA10, app::DictionaryEntry, get_Entry, app::SortedList_SortedListEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202FB40, app::Object*, get_Current, app::SortedList_SortedListEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202FC60, app::Object*, get_Value, app::SortedList_SortedListEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0202FD80, void, Reset, app::SortedList_SortedListEnumerator* this_ptr)
} // namespace app::classes::System::Collections::SortedList_SortedListEnumerator
