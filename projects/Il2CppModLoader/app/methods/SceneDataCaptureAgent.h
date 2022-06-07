#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SceneDataCaptureAgent {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (app::SceneDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00937960, void, OnInitialize, (app::SceneDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (app::SceneDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00937A90, app::String__Array *, GetDataHeaderNames, (app::SceneDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00937CE0, app::ValueTuple_2_String_String_, GetCurrentScene, (app::SceneDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00938350, app::String__Array *, GetFrameData_1, (app::SceneDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478ED58, SceneDataCaptureAgent_GetFrameData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009383A0, void, GetFrameData_2, (app::SceneDataCaptureAgent * this_ptr, app::FrameCaptureTester_AgentOutput * output))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SceneDataCaptureAgent * this_ptr))
}
