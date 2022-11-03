#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnergyPlantVisuals {
        inline app::EnergyPlantVisuals__Class** type_info = (app::EnergyPlantVisuals__Class**)(modloader::win::memory::resolve_rva(0x04791128));
        inline app::EnergyPlantVisuals__Class* get_class() {
            return il2cpp::get_class<app::EnergyPlantVisuals__Class>(type_info, "", "EnergyPlantVisuals");
        }
        inline app::EnergyPlantVisuals* create() {
            return il2cpp::create_object<app::EnergyPlantVisuals>(get_class());
        }
    } // namespace EnergyPlantVisuals
} // namespace app::classes::types
