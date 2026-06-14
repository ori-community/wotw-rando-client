#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FrameCaptureTester_AgentOutput.h>
#include <Modloader/app/structs/SceneLoadingCaptureAgent.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::SceneLoadingCaptureAgent {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, app::SceneLoadingCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, app::SceneLoadingCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, app::SceneLoadingCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BA6D00, app::String__Array*, GetDataHeaderNames, app::SceneLoadingCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BA6E40, app::String__Array*, GetFrameData_1, app::SceneLoadingCaptureAgent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BA6E90, void, GetFrameData_2, app::SceneLoadingCaptureAgent* this_ptr, app::FrameCaptureTester_AgentOutput* output)
    IL2CPP_REGISTER_METHOD(0x00BA72A0, void, ctor, app::SceneLoadingCaptureAgent* this_ptr)
} // namespace app::classes::SceneLoadingCaptureAgent
