#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::OpenVR_COpenVRContext {
    IL2CPP_REGISTER_METHOD(0x00F56B30, void, ctor, (app::OpenVR_COpenVRContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F56B30, void, Clear, (app::OpenVR_COpenVRContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F56B60, void, CheckClear, (app::OpenVR_COpenVRContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F56DE0, app::CVRSystem *, VRSystem, (app::OpenVR_COpenVRContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F570F0, app::CVRChaperone *, VRChaperone, (app::OpenVR_COpenVRContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F57380, app::CVRChaperoneSetup *, VRChaperoneSetup, (app::OpenVR_COpenVRContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F57660, app::CVRCompositor *, VRCompositor, (app::OpenVR_COpenVRContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F57970, app::CVROverlay *, VROverlay, (app::OpenVR_COpenVRContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F57C50, app::CVRRenderModels *, VRRenderModels, (app::OpenVR_COpenVRContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F57F20, app::CVRExtendedDisplay *, VRExtendedDisplay, (app::OpenVR_COpenVRContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F581A0, app::CVRSettings *, VRSettings, (app::OpenVR_COpenVRContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F58440, app::CVRApplications *, VRApplications, (app::OpenVR_COpenVRContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F58750, app::CVRScreenshots *, VRScreenshots, (app::OpenVR_COpenVRContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F589E0, app::CVRTrackedCamera *, VRTrackedCamera, (app::OpenVR_COpenVRContext * this_ptr))
}
