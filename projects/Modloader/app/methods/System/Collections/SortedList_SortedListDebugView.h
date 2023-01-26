#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SortedList_SortedListDebugView.h>
#include <Modloader/app/structs/KeyValuePairs__Array.h>
#include <Modloader/app/structs/SortedList.h>

namespace app::classes::System::Collections::SortedList_SortedListDebugView {
    IL2CPP_REGISTER_METHOD(0x0202F660, void, ctor, (app::SortedList_SortedListDebugView * this_ptr, app::SortedList* sorted_list))
    IL2CPP_REGISTER_METHOD(0x01BDD500, app::KeyValuePairs__Array*, get_Items, (app::SortedList_SortedListDebugView * this_ptr))
} // namespace app::classes::System::Collections::SortedList_SortedListDebugView
