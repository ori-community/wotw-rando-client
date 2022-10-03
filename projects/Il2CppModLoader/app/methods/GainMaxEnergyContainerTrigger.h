#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::GainMaxEnergyContainerTrigger {
    IL2CPP_REGISTER_METHOD(0x0151E570, void, OnTriggerEnable, (app::GainMaxEnergyContainerTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0151E740, void, OnTriggerDisable, (app::GainMaxEnergyContainerTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B26430, void, OnCollectMaxEnergyContainer, (app::GainMaxEnergyContainerTrigger * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04731E58, GainMaxEnergyContainerTrigger_OnCollectMaxEnergyContainer__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611C70, void, ctor, (app::GainMaxEnergyContainerTrigger * this_ptr))
} // namespace app::classes::GainMaxEnergyContainerTrigger
