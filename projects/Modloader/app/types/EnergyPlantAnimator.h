#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnergyPlantAnimator {
        inline app::EnergyPlantAnimator__Class** type_info = (app::EnergyPlantAnimator__Class**)(modloader::win::memory::resolve_rva(0x04704438));
        inline app::EnergyPlantAnimator__Class* get_class() {
            return il2cpp::get_class<app::EnergyPlantAnimator__Class>(type_info, "", "EnergyPlantAnimator");
        }
        inline app::EnergyPlantAnimator* create() {
            return il2cpp::create_object<app::EnergyPlantAnimator>(get_class());
        }
    } // namespace EnergyPlantAnimator
} // namespace app::classes::types
