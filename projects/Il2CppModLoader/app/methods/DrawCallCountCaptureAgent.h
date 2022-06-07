#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DrawCallCountCaptureAgent {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (app::DrawCallCountCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (app::DrawCallCountCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (app::DrawCallCountCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BDBB50, app::String__Array *, GetDataHeaderNames, (app::DrawCallCountCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BDBC40, app::String__Array *, GetFrameData_1, (app::DrawCallCountCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047322C0, DrawCallCountCaptureAgent_GetFrameData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00BDBC90, void, GetFrameData_2, (app::DrawCallCountCaptureAgent * this_ptr, app::FrameCaptureTester_AgentOutput * output))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DrawCallCountCaptureAgent * this_ptr))
}
