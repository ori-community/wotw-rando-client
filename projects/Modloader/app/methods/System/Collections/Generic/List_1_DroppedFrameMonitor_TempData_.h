#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DroppedFrameMonitor_TempData.h>
#include <Modloader/app/structs/List_1_DroppedFrameMonitor_TempData_.h>

namespace app::classes::System::Collections::Generic::List_1_DroppedFrameMonitor_TempData_ {
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, app::List_1_DroppedFrameMonitor_TempData_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_DroppedFrameMonitor_TempData_* this_ptr, app::DroppedFrameMonitor_TempData* item)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::DroppedFrameMonitor_TempData*, get_Item, app::List_1_DroppedFrameMonitor_TempData_* this_ptr, int32_t index)
} // namespace app::classes::System::Collections::Generic::List_1_DroppedFrameMonitor_TempData_
