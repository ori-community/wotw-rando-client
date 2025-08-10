#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_Moon_WaterFall_WaterLine_.h>
#include <Modloader/app/structs/List_1_Moon_WaterFall_WaterLine_.h>
#include <Modloader/app/structs/WaterFall_WaterLine.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_WaterFall_WaterLine_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_Moon_WaterFall_WaterLine_* this_ptr, app::WaterFall_WaterLine* item)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::WaterFall_WaterLine*, get_Item, app::List_1_Moon_WaterFall_WaterLine_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_Moon_WaterFall_WaterLine_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E9020,
        void,
        AddRange,
        app::List_1_Moon_WaterFall_WaterLine_* this_ptr,
        app::IEnumerable_1_Moon_WaterFall_WaterLine_* collection
    )
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_Moon_WaterFall_WaterLine_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, app::List_1_Moon_WaterFall_WaterLine_* this_ptr, app::WaterFall_WaterLine* item)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_Moon_WaterFall_WaterLine_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_WaterFall_WaterLine_
