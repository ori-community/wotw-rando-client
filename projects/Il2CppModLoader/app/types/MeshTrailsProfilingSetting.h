#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeshTrailsProfilingSetting {
        namespace {
            inline app::MeshTrailsProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::MeshTrailsProfilingSetting__Class** type_info = &type_info_ref;
        inline app::MeshTrailsProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::MeshTrailsProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "MeshTrailsProfilingSetting");
        }
        inline app::MeshTrailsProfilingSetting* create() {
            return il2cpp::create_object<app::MeshTrailsProfilingSetting>(get_class());
        }
    } // namespace MeshTrailsProfilingSetting
} // namespace app::classes::types
