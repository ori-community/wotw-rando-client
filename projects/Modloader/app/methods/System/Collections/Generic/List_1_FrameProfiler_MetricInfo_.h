#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FrameProfiler_MetricInfo.h>
#include <Modloader/app/structs/List_1_FrameProfiler_MetricInfo_.h>

namespace app::classes::System::Collections::Generic::List_1_FrameProfiler_MetricInfo_ {
    IL2CPP_REGISTER_METHOD(0x025F0BE0, int32_t, IndexOf, app::List_1_FrameProfiler_MetricInfo_* this_ptr, app::FrameProfiler_MetricInfo* item)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_FrameProfiler_MetricInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_FrameProfiler_MetricInfo_* this_ptr, app::FrameProfiler_MetricInfo* item)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_FrameProfiler_MetricInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::FrameProfiler_MetricInfo*, get_Item, app::List_1_FrameProfiler_MetricInfo_* this_ptr, int32_t index)
} // namespace app::classes::System::Collections::Generic::List_1_FrameProfiler_MetricInfo_
