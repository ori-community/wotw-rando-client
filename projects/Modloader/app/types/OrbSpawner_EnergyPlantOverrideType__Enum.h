#pragma once
#include <Modloader/app/structs/OrbSpawner_EnergyPlantOverrideType__Enum.h>
#include <Modloader/app/structs/OrbSpawner_EnergyPlantOverrideType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OrbSpawner_EnergyPlantOverrideType__Enum {
        inline app::OrbSpawner_EnergyPlantOverrideType__Enum__Class** type_info() {
            static app::OrbSpawner_EnergyPlantOverrideType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OrbSpawner_EnergyPlantOverrideType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OrbSpawner_EnergyPlantOverrideType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::OrbSpawner_EnergyPlantOverrideType__Enum__Class>(type_info(), "", "OrbSpawner", "EnergyPlantOverrideType");
        }
        inline app::OrbSpawner_EnergyPlantOverrideType__Enum* create() {
            return il2cpp::create_object<app::OrbSpawner_EnergyPlantOverrideType__Enum>(get_class());
        }
    } // namespace OrbSpawner_EnergyPlantOverrideType__Enum
} // namespace app::classes::types
