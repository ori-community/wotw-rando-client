#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ProfilingDataCaptureAgent.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/FrameCaptureTester_AgentOutput.h>

namespace app::classes::ProfilingDataCaptureAgent {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (app::ProfilingDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (app::ProfilingDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (app::ProfilingDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C73A70, app::String__Array*, GetDataHeaderNames, (app::ProfilingDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C743B0, app::String__Array*, GetFrameData_1, (app::ProfilingDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470C828, ProfilingDataCaptureAgent_GetFrameData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C74400, void, GetFrameData_2, (app::ProfilingDataCaptureAgent * this_ptr, app::FrameCaptureTester_AgentOutput* output))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ProfilingDataCaptureAgent * this_ptr))
} // namespace app::classes::ProfilingDataCaptureAgent
