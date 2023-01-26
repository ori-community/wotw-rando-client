#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_AxisAlignedBox_.h>
#include <Modloader/app/structs/AxisAlignedBox.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_AxisAlignedBox_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_AxisAlignedBox_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::AxisAlignedBox*, get_Item, (app::List_1_Moon_AxisAlignedBox_ * this_ptr, int32_t index))
} // namespace app::classes::System::Collections::Generic::List_1_Moon_AxisAlignedBox_
