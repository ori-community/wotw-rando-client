#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_WaterFallMask_.h>
#include <Modloader/app/structs/WaterFallMask.h>
#include <Modloader/app/structs/WaterFallMask__Array.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_WaterFallMask_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_Moon_WaterFallMask_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E9490, void, CopyTo, app::List_1_Moon_WaterFallMask_* this_ptr, app::WaterFallMask__Array* array)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_Moon_WaterFallMask_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, app::List_1_Moon_WaterFallMask_* this_ptr, app::WaterFallMask* item)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::WaterFallMask*, get_Item, app::List_1_Moon_WaterFallMask_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_Moon_WaterFallMask_* this_ptr, app::WaterFallMask* item)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_WaterFallMask_
