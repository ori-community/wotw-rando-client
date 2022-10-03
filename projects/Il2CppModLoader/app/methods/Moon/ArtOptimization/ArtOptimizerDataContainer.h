#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::ArtOptimization::ArtOptimizerDataContainer {
    IL2CPP_REGISTER_METHOD(0x01345040, float, get_ObjectEnergyLimit, (app::ArtOptimizerDataContainer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724010, void, set_ObjectEnergyLimit, (app::ArtOptimizerDataContainer * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01345120, float, get_ModifiersEnergyLimit, (app::ArtOptimizerDataContainer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447350, void, set_ModifiersEnergyLimit, (app::ArtOptimizerDataContainer * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01345200, void, CalculateEnergyLimitsByStripPercentage, (app::ArtOptimizerDataContainer * this_ptr, float objects_strip_percentage, float modifiers_strip_percentage))
    IL2CPP_REGISTER_METHOD(0x01346590, void, Clear, (app::ArtOptimizerDataContainer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01346660, bool, ShouldStripByEnergyLimit_1, (app::ArtOptimizerDataContainer * this_ptr, app::SerializableUberShaderWrapper* uber_shader))
    IL2CPP_REGISTER_METHOD(0x013468F0, bool, ShouldStripByEnergyLimit_2, (app::ArtOptimizerDataContainer * this_ptr, app::SerializableUberSaderModifierWrapper* modifier))
    IL2CPP_REGISTER_METHOD(0x01346BA0, bool, IsInCenterLayer, (app::ArtOptimizerDataContainer * this_ptr, app::GameObject* go))
    IL2CPP_REGISTER_METHOD(0x01346D10, bool, IsObjectIgnored, (app::ArtOptimizerDataContainer * this_ptr, app::GameObject* go))
    IL2CPP_REGISTER_METHOD(0x01346DB0, bool, IsModifierIgnored, (app::ArtOptimizerDataContainer * this_ptr, app::UberShaderModifier* modifier))
    IL2CPP_REGISTER_METHOD(0x01346EA0, int32_t, GetIdInFile, (app::ArtOptimizerDataContainer * this_ptr, app::GameObject* go))
    IL2CPP_REGISTER_METHOD(0x01346FB0, void, OnBeforeSerialize, (app::ArtOptimizerDataContainer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01346FB0, void, OnAfterDeserialize, (app::ArtOptimizerDataContainer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01346FC0, void, ctor, (app::ArtOptimizerDataContainer * this_ptr))
} // namespace app::classes::Moon::ArtOptimization::ArtOptimizerDataContainer
