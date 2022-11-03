#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::HierarchyPerfTest::PerfTestTimer_TestData {
    IL2CPP_REGISTER_METHOD(0x01974EF0, void, ctor, (app::PerfTestTimer_TestData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01974FB0, app::String__Array*, ToCsvRow, (app::PerfTestTimer_TestData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01975280, app::String*, FormatBytes, (int64_t bytes))
    IL2CPP_REGISTER_METHOD(0x019752B0, app::String*, FormatTimeSpan, (app::TimeSpan time_span))
    IL2CPP_REGISTER_METHOD(0x01975310, void, cctor, ())
} // namespace app::classes::HierarchyPerfTest::PerfTestTimer_TestData
