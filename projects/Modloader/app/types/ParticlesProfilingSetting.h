#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ParticlesProfilingSetting__Class.h>
#include <Modloader/app/structs/ParticlesProfilingSetting.h>

namespace app::classes::types {
    namespace ParticlesProfilingSetting {
        namespace {
            inline app::ParticlesProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::ParticlesProfilingSetting__Class** type_info = &type_info_ref;
        inline app::ParticlesProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ParticlesProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "ParticlesProfilingSetting");
        }
        inline app::ParticlesProfilingSetting* create() {
            return il2cpp::create_object<app::ParticlesProfilingSetting>(get_class());
        }
    } // namespace ParticlesProfilingSetting
} // namespace app::classes::types
