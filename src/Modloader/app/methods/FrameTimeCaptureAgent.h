#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FrameCaptureTester_AgentOutput.h>
#include <Modloader/app/structs/FrameTimeCaptureAgent.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::FrameTimeCaptureAgent {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, app::FrameTimeCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, app::FrameTimeCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, app::FrameTimeCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01643440, app::String__Array*, GetDataHeaderNames, app::FrameTimeCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016438C0, app::String__Array*, GetFrameData_1, app::FrameTimeCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01643910, void, GetFrameData_2, app::FrameTimeCaptureAgent* this_ptr, app::FrameCaptureTester_AgentOutput* output)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::FrameTimeCaptureAgent* this_ptr)
} // namespace app::classes::FrameTimeCaptureAgent
