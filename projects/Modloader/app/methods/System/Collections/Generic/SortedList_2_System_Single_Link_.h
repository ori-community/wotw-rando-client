#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Link.h>
#include <Modloader/app/structs/SortedList_2_System_Single_Link_.h>

namespace app::classes::System::Collections::Generic::SortedList_2_System_Single_Link_ {
    IL2CPP_REGISTER_METHOD(0x02CAF300, void, Clear, app::SortedList_2_System_Single_Link_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CF1DD0, void, Add, app::SortedList_2_System_Single_Link_* this_ptr, float key, app::Link* value)
    IL2CPP_REGISTER_METHOD(0x02CF32A0, app::Link*, get_Item, app::SortedList_2_System_Single_Link_* this_ptr, float key)
    IL2CPP_REGISTER_METHOD(0x02CF3AB0, void, RemoveAt, app::SortedList_2_System_Single_Link_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02CB0620, int32_t, IndexOfValue, app::SortedList_2_System_Single_Link_* this_ptr, app::Link* value)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, app::SortedList_2_System_Single_Link_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CAE5F0, void, ctor, app::SortedList_2_System_Single_Link_* this_ptr)
} // namespace app::classes::System::Collections::Generic::SortedList_2_System_Single_Link_
