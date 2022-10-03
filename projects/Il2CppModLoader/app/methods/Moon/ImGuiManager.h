#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::ImGuiManager {
    IL2CPP_REGISTER_METHOD(0x01989CA0, void, Awake, (app::ImGuiManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01989D30, void, RegisterClient, ())
    IL2CPP_REGISTER_METHOD(0x01989DE0, void, UnregisterClient, ())
    IL2CPP_REGISTER_METHOD(0x01989E90, void, Sync, ())
    IL2CPP_REGISTER_METHOD(0x01989FC0, void, OutputRegistrations, ())
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ImGuiManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0198A960, void, cctor, ())
} // namespace app::classes::Moon::ImGuiManager
