#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FrameCaptureTester_AgentOutput.h>
#include <Modloader/app/structs/StressTestDataCaptureAgent.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::StressTestDataCaptureAgent {
    IL2CPP_REGISTER_METHOD(0x0065DBB0, bool, get_IsCaptureAgentValid, app::StressTestDataCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, app::StressTestDataCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, app::StressTestDataCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065DC80, app::String__Array*, GetDataHeaderNames, app::StressTestDataCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065DDC0, app::String__Array*, GetFrameData_1, app::StressTestDataCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065DE10, void, GetFrameData_2, app::StressTestDataCaptureAgent* this_ptr, app::FrameCaptureTester_AgentOutput* output)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::StressTestDataCaptureAgent* this_ptr)
} // namespace app::classes::StressTestDataCaptureAgent
