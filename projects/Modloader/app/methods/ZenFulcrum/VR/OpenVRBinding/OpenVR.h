#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CVRApplications.h>
#include <Modloader/app/structs/CVRChaperone.h>
#include <Modloader/app/structs/CVRChaperoneSetup.h>
#include <Modloader/app/structs/CVRCompositor.h>
#include <Modloader/app/structs/CVRExtendedDisplay.h>
#include <Modloader/app/structs/CVROverlay.h>
#include <Modloader/app/structs/CVRRenderModels.h>
#include <Modloader/app/structs/CVRScreenshots.h>
#include <Modloader/app/structs/CVRSettings.h>
#include <Modloader/app/structs/CVRSystem.h>
#include <Modloader/app/structs/CVRTrackedCamera.h>
#include <Modloader/app/structs/EVRApplicationType__Enum.h>
#include <Modloader/app/structs/EVRInitError__Enum.h>
#include <Modloader/app/structs/OpenVR.h>
#include <Modloader/app/structs/OpenVR_COpenVRContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::OpenVR {
    IL2CPP_REGISTER_METHOD(0x00F55520, uint32_t, InitInternal, app::EVRInitError__Enum* pe_error, app::EVRApplicationType__Enum e_application_type)
    IL2CPP_REGISTER_METHOD(0x00F555D0, void, ShutdownInternal, )
    IL2CPP_REGISTER_METHOD(0x00F55660, bool, IsHmdPresent, )
    IL2CPP_REGISTER_METHOD(0x00F556F0, bool, IsRuntimeInstalled, )
    IL2CPP_REGISTER_METHOD(0x00F55780, app::String*, GetStringForHmdError, app::EVRInitError__Enum error)
    IL2CPP_REGISTER_METHOD(0x00F558D0, void*, GetGenericInterface, app::String* pch_interface_version, app::EVRInitError__Enum* pe_error)
    IL2CPP_REGISTER_METHOD(0x00F558E0, bool, IsInterfaceVersionValid, app::String* pch_interface_version)
    IL2CPP_REGISTER_METHOD(0x00F55A60, uint32_t, GetInitToken, )
    IL2CPP_REGISTER_METHOD(0x00F55AF0, uint32_t, get_VRToken, )
    IL2CPP_REGISTER_METHOD(0x00F55B90, void, set_VRToken, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x00F55C40, app::OpenVR_COpenVRContext*, get_OpenVRInternal_ModuleContext, )
    IL2CPP_REGISTER_METHOD(0x00F55E50, app::CVRSystem*, get_System, )
    IL2CPP_REGISTER_METHOD(0x00F55F00, app::CVRChaperone*, get_Chaperone, )
    IL2CPP_REGISTER_METHOD(0x00F55FB0, app::CVRChaperoneSetup*, get_ChaperoneSetup, )
    IL2CPP_REGISTER_METHOD(0x00F56060, app::CVRCompositor*, get_Compositor, )
    IL2CPP_REGISTER_METHOD(0x00F56110, app::CVROverlay*, get_Overlay, )
    IL2CPP_REGISTER_METHOD(0x00F561C0, app::CVRRenderModels*, get_RenderModels, )
    IL2CPP_REGISTER_METHOD(0x00F56270, app::CVRExtendedDisplay*, get_ExtendedDisplay, )
    IL2CPP_REGISTER_METHOD(0x00F56320, app::CVRSettings*, get_Settings, )
    IL2CPP_REGISTER_METHOD(0x00F563D0, app::CVRApplications*, get_Applications, )
    IL2CPP_REGISTER_METHOD(0x00F56480, app::CVRScreenshots*, get_Screenshots, )
    IL2CPP_REGISTER_METHOD(0x00F56530, app::CVRTrackedCamera*, get_TrackedCamera, )
    IL2CPP_REGISTER_METHOD(0x00F565E0, app::CVRSystem*, Init, app::EVRInitError__Enum* pe_error, app::EVRApplicationType__Enum e_application_type)
    IL2CPP_REGISTER_METHOD(0x00F56A20, void, Shutdown, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::OpenVR* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::OpenVR
