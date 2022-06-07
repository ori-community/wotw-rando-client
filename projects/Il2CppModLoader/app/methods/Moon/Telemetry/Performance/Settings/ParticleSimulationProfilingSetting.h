#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::ParticleSimulationProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3E950, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::ParticleSimulationProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3E960, bool, GetState, (app::ParticleSimulationProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3E9B0, void, SetState, (app::ParticleSimulationProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ParticleSimulationProfilingSetting * this_ptr))
}
