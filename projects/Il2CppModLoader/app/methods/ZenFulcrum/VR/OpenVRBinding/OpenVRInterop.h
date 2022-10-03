#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::OpenVRInterop {
    IL2CPP_REGISTER_METHOD(0x00F55520, uint32_t, InitInternal, (app::EVRInitError__Enum * pe_error, app::EVRApplicationType__Enum e_application_type))
    IL2CPP_REGISTER_METHOD(0x00F555D0, void, ShutdownInternal, ())
    IL2CPP_REGISTER_METHOD(0x00F55660, bool, IsHmdPresent, ())
    IL2CPP_REGISTER_METHOD(0x00F556F0, bool, IsRuntimeInstalled, ())
    IL2CPP_REGISTER_METHOD(0x00F58C80, void*, GetStringForHmdError, (app::EVRInitError__Enum error))
    IL2CPP_REGISTER_METHOD(0x00F58D20, void*, GetGenericInterface, (app::String * pch_interface_version, app::EVRInitError__Enum* pe_error))
    IL2CPP_REGISTER_METHOD(0x00F558E0, bool, IsInterfaceVersionValid, (app::String * pch_interface_version))
    IL2CPP_REGISTER_METHOD(0x00F55A60, uint32_t, GetInitToken, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::OpenVRInterop * this_ptr))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::OpenVRInterop
