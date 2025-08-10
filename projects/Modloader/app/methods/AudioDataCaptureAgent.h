#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AudioDataCaptureAgent.h>
#include <Modloader/app/structs/FrameCaptureTester_AgentOutput.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::AudioDataCaptureAgent {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, app::AudioDataCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, app::AudioDataCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, app::AudioDataCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00857900, app::String__Array*, GetDataHeaderNames, app::AudioDataCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00857E90, app::String__Array*, GetFrameData_1, app::AudioDataCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00857EE0, void, GetFrameData_2, app::AudioDataCaptureAgent* this_ptr, app::FrameCaptureTester_AgentOutput* output)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AudioDataCaptureAgent* this_ptr)
} // namespace app::classes::AudioDataCaptureAgent
