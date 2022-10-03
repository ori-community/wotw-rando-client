#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LightCaptureAgent {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (app::LightCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (app::LightCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (app::LightCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0114A570, app::String__Array*, GetDataHeaderNames, (app::LightCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0114A660, app::String__Array*, GetFrameData_1, (app::LightCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04706258, LightCaptureAgent_GetFrameData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0114A6B0, void, GetFrameData_2, (app::LightCaptureAgent * this_ptr, app::FrameCaptureTester_AgentOutput* output))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LightCaptureAgent * this_ptr))
} // namespace app::classes::LightCaptureAgent
