#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFrustumDataCaptureAgent {
    IL2CPP_REGISTER_METHOD(0x01689D10, bool, get_IsCaptureAgentValid, (app::CameraFrustumDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (app::CameraFrustumDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (app::CameraFrustumDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01689DC0, app::String__Array *, GetDataHeaderNames, (app::CameraFrustumDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01689EB0, app::String__Array *, GetFrameData_1, (app::CameraFrustumDataCaptureAgent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470BBD0, CameraFrustumDataCaptureAgent_GetFrameData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01689F00, void, GetFrameData_2, (app::CameraFrustumDataCaptureAgent * this_ptr, app::FrameCaptureTester_AgentOutput * output))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CameraFrustumDataCaptureAgent * this_ptr))
}
