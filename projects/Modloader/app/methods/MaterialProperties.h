#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MaterialProperties.h>

namespace app::classes::MaterialProperties {
    IL2CPP_REGISTER_METHOD(0x01381450, void, ApplyMaterialProperties, (app::MaterialProperties * this_ptr, app::MaterialProperties* material_properties))
    IL2CPP_REGISTER_METHOD(0x013814E0, void, RemovePropertiesThatArntOverwridden, (app::MaterialProperties * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013820F0, void, OverrideAll, (app::MaterialProperties * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013824B0, void, ctor, (app::MaterialProperties * this_ptr))
} // namespace app::classes::MaterialProperties
