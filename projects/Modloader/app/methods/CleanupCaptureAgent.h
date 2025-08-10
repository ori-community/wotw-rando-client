#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CleanupCaptureAgent.h>
#include <Modloader/app/structs/FrameCaptureTester_AgentOutput.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::CleanupCaptureAgent {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, app::CleanupCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, app::CleanupCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, app::CleanupCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01324170, app::String__Array*, GetDataHeaderNames, app::CleanupCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01324540, app::String__Array*, GetFrameData_1, app::CleanupCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01324590, void, GetFrameData_2, app::CleanupCaptureAgent* this_ptr, app::FrameCaptureTester_AgentOutput* output)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CleanupCaptureAgent* this_ptr)
} // namespace app::classes::CleanupCaptureAgent
