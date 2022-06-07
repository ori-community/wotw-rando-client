#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Microsoft::Xbox::Services::Xal::InitArgs {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, uint32_t, get_TitleId, (app::InitArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_TitleId, (app::InitArgs * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_ClientId, (app::InitArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_ClientId, (app::InitArgs * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String *, get_Sandbox, (app::InitArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Sandbox, (app::InitArgs * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String *, get_RedirectUri, (app::InitArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_RedirectUri, (app::InitArgs * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String__Array *, get_ThirdPartyConsents, (app::InitArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_ThirdPartyConsents, (app::InitArgs * this_ptr, app::String__Array * value))
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_UseRemoteConnect, (app::InitArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_UseRemoteConnect, (app::InitArgs * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x004379C0, bool, get_DisableDiagnosticTelemetry, (app::InitArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004379D0, void, set_DisableDiagnosticTelemetry, (app::InitArgs * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FC830, uint32_t, get_Flags, (app::InitArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C5130, void, set_Flags, (app::InitArgs * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String *, get_CorrelationVector, (app::InitArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_CorrelationVector, (app::InitArgs * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::DeviceInfo *, get_DeviceInfo, (app::InitArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::TelemetryInfo *, get_TelemetryInfo, (app::InitArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01434070, void, ctor, (app::InitArgs * this_ptr))
}
