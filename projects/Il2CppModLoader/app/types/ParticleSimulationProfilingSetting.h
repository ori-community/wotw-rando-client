#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParticleSimulationProfilingSetting {
        namespace {
            inline app::ParticleSimulationProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::ParticleSimulationProfilingSetting__Class** type_info = &type_info_ref;
        inline app::ParticleSimulationProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ParticleSimulationProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "ParticleSimulationProfilingSetting");
        }
        inline app::ParticleSimulationProfilingSetting* create() {
            return il2cpp::create_object<app::ParticleSimulationProfilingSetting>(get_class());
        }
    } // namespace ParticleSimulationProfilingSetting
} // namespace app::classes::types
