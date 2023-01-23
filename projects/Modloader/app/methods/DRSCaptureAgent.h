#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DRSCaptureAgent.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/FrameCaptureTester_AgentOutput.h>

namespace app::classes::DRSCaptureAgent {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (app::DRSCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DBF870, app::String__Array*, GetDataHeaderNames, (app::DRSCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (app::DRSCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (app::DRSCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DBF9B0, app::String__Array*, GetFrameData_1, (app::DRSCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473CD98, DRSCaptureAgent_GetFrameData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DBFA00, void, GetFrameData_2, (app::DRSCaptureAgent * this_ptr, app::FrameCaptureTester_AgentOutput* output))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DRSCaptureAgent * this_ptr))
} // namespace app::classes::DRSCaptureAgent
