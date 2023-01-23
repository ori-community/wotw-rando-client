#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EnergyPlantVisuals.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>

namespace app::classes::EnergyPlantVisuals {
    IL2CPP_REGISTER_METHOD(0x00C8B510, void, GetManagedEarlyZDynamicGraphicTargets, (app::EnergyPlantVisuals * this_ptr, app::List_1_UnityEngine_GameObject_* targets))
    IL2CPP_REGISTER_METHOD(0x00C8B5C0, void, HideVisuals, (app::EnergyPlantVisuals * this_ptr, bool hide))
    IL2CPP_REGISTER_METHOD(0x00C8B740, void, ctor, (app::EnergyPlantVisuals * this_ptr))
} // namespace app::classes::EnergyPlantVisuals
