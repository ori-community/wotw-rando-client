#pragma once
#include <Modloader/app/structs/EnergyPlantLogic.h>
#include <Modloader/app/structs/EnergyPlantLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnergyPlantLogic {
        inline app::EnergyPlantLogic__Class** type_info() {
            static app::EnergyPlantLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnergyPlantLogic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnergyPlantLogic__Class* get_class() {
            return il2cpp::get_class<app::EnergyPlantLogic__Class>(type_info(), "", "EnergyPlantLogic");
        }
        inline app::EnergyPlantLogic* create() {
            return il2cpp::create_object<app::EnergyPlantLogic>(get_class());
        }
    } // namespace EnergyPlantLogic
} // namespace app::classes::types
