#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::BuilderInfo {
    IL2CPP_REGISTER_METHOD(0x00817790, bool, get_IsBuilding, ())
    IL2CPP_REGISTER_METHOD(0x00817860, void, set_IsBuilding, (bool value))
    IL2CPP_REGISTER_METHOD(0x00817910, bool, get_IsCookingBuild, ())
    IL2CPP_REGISTER_METHOD(0x008179E0, void, set_IsCookingBuild, (bool value))
    IL2CPP_REGISTER_METHOD(0x00817A90, app::IDisposable*, BuildSimulationScope, ())
    IL2CPP_REGISTER_METHOD(0x00817D40, bool, get_IsExperimentalBuild, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::BuilderInfo
