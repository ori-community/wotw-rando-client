#pragma once
#include <Modloader/app/structs/ParticleSimulationProfilingSetting.h>
#include <Modloader/app/structs/ParticleSimulationProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticleSimulationProfilingSetting {
        inline app::ParticleSimulationProfilingSetting__Class** type_info() {
            static app::ParticleSimulationProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParticleSimulationProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParticleSimulationProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ParticleSimulationProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "ParticleSimulationProfilingSetting");
        }
        inline app::ParticleSimulationProfilingSetting* create() {
            return il2cpp::create_object<app::ParticleSimulationProfilingSetting>(get_class());
        }
    } // namespace ParticleSimulationProfilingSetting
} // namespace app::classes::types
