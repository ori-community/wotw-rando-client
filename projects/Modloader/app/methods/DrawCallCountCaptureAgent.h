#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DrawCallCountCaptureAgent.h>
#include <Modloader/app/structs/FrameCaptureTester_AgentOutput.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::DrawCallCountCaptureAgent {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, app::DrawCallCountCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, app::DrawCallCountCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, app::DrawCallCountCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BDBB50, app::String__Array*, GetDataHeaderNames, app::DrawCallCountCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BDBC40, app::String__Array*, GetFrameData_1, app::DrawCallCountCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BDBC90, void, GetFrameData_2, app::DrawCallCountCaptureAgent* this_ptr, app::FrameCaptureTester_AgentOutput* output)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DrawCallCountCaptureAgent* this_ptr)
} // namespace app::classes::DrawCallCountCaptureAgent
