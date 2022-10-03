#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MemoryLabelCaptureAgent {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (app::MemoryLabelCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D7EE0, app::String__Array*, GetDataHeaderNames, (app::MemoryLabelCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D8480, void, OnInitialize, (app::MemoryLabelCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (app::MemoryLabelCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D8600, app::String__Array*, GetFrameData_1, (app::MemoryLabelCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478B7C0, MemoryLabelCaptureAgent_GetFrameData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009D8650, void, GetFrameData_2, (app::MemoryLabelCaptureAgent * this_ptr, app::FrameCaptureTester_AgentOutput* output))
    IL2CPP_REGISTER_METHOD(0x009D89D0, void, ctor, (app::MemoryLabelCaptureAgent * this_ptr))
} // namespace app::classes::MemoryLabelCaptureAgent
