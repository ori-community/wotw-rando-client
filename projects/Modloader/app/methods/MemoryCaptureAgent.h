#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MemoryCaptureAgent.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/FrameCaptureTester_AgentOutput.h>

namespace app::classes::MemoryCaptureAgent {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (app::MemoryCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D6AB0, void, OnInitialize, (app::MemoryCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (app::MemoryCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D6C00, app::String__Array*, GetDataHeaderNames, (app::MemoryCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D6CD0, app::String__Array*, GetFrameData_1, (app::MemoryCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04711CA8, MemoryCaptureAgent_GetFrameData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009D6D20, void, GetFrameData_2, (app::MemoryCaptureAgent * this_ptr, app::FrameCaptureTester_AgentOutput* output))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MemoryCaptureAgent * this_ptr))
} // namespace app::classes::MemoryCaptureAgent
