#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayerDataCaptureAgent {
    IL2CPP_REGISTER_METHOD(0x0140DC40, bool, get_IsCaptureAgentValid, (app::PlayerDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (app::PlayerDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (app::PlayerDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0140DCE0, app::String__Array *, GetDataHeaderNames, (app::PlayerDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0140DDD0, app::String__Array *, GetFrameData_1, (app::PlayerDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04746618, PlayerDataCaptureAgent_GetFrameData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0140DE20, void, GetFrameData_2, (app::PlayerDataCaptureAgent * this_ptr, app::FrameCaptureTester_AgentOutput * output))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerDataCaptureAgent * this_ptr))
}
