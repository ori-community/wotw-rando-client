#pragma once
#include <Modloader/app/structs/ParticlesProfilingSetting.h>
#include <Modloader/app/structs/ParticlesProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticlesProfilingSetting {
        inline app::ParticlesProfilingSetting__Class** type_info() {
            static app::ParticlesProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParticlesProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParticlesProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ParticlesProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "ParticlesProfilingSetting");
        }
        inline app::ParticlesProfilingSetting* create() {
            return il2cpp::create_object<app::ParticlesProfilingSetting>(get_class());
        }
    } // namespace ParticlesProfilingSetting
} // namespace app::classes::types
