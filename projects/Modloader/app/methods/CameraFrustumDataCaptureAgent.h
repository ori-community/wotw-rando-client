#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFrustumDataCaptureAgent.h>
#include <Modloader/app/structs/FrameCaptureTester_AgentOutput.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::CameraFrustumDataCaptureAgent {
    IL2CPP_REGISTER_METHOD(0x01689D10, bool, get_IsCaptureAgentValid, (app::CameraFrustumDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (app::CameraFrustumDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (app::CameraFrustumDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01689DC0, app::String__Array*, GetDataHeaderNames, (app::CameraFrustumDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01689EB0, app::String__Array*, GetFrameData_1, (app::CameraFrustumDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01689F00, void, GetFrameData_2, (app::CameraFrustumDataCaptureAgent * this_ptr, app::FrameCaptureTester_AgentOutput* output))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CameraFrustumDataCaptureAgent * this_ptr))
} // namespace app::classes::CameraFrustumDataCaptureAgent
