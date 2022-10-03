#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__ReloadFromDisk {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRChaperoneSetup_ReloadFromDisk * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (app::IVRChaperoneSetup_ReloadFromDisk * this_ptr, app::EChaperoneConfigFile__Enum config_file))
    IL2CPP_REGISTER_METHOD(0x02F40970, app::IAsyncResult*, BeginInvoke, (app::IVRChaperoneSetup_ReloadFromDisk * this_ptr, app::EChaperoneConfigFile__Enum config_file, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRChaperoneSetup_ReloadFromDisk * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__ReloadFromDisk
