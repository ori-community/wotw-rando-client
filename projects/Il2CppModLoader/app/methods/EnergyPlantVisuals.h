#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::EnergyPlantVisuals {
    IL2CPP_REGISTER_METHOD(0x00C8B510, void, GetManagedEarlyZDynamicGraphicTargets, (app::EnergyPlantVisuals * this_ptr, app::List_1_UnityEngine_GameObject_ * targets))
    IL2CPP_REGISTER_METHOD(0x00C8B5C0, void, HideVisuals, (app::EnergyPlantVisuals * this_ptr, bool hide))
    IL2CPP_REGISTER_METHOD(0x00C8B740, void, ctor, (app::EnergyPlantVisuals * this_ptr))
}
