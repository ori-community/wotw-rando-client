#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MemoryManagerCaptureAgent {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (app::MemoryManagerCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D8D50, app::String__Array*, GetDataHeaderNames, (app::MemoryManagerCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D9070, void, OnInitialize, (app::MemoryManagerCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (app::MemoryManagerCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D91F0, app::String__Array*, GetFrameData_1, (app::MemoryManagerCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04795780, MemoryManagerCaptureAgent_GetFrameData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009D9240, void, GetFrameData_2, (app::MemoryManagerCaptureAgent * this_ptr, app::FrameCaptureTester_AgentOutput* output))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MemoryManagerCaptureAgent * this_ptr))
} // namespace app::classes::MemoryManagerCaptureAgent
