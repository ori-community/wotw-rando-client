#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkinnedMeshRenderingProfilingSetting {
        namespace {
            app::SkinnedMeshRenderingProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::SkinnedMeshRenderingProfilingSetting__Class** type_info = &type_info_ref;
        inline app::SkinnedMeshRenderingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::SkinnedMeshRenderingProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "SkinnedMeshRenderingProfilingSetting");
        }
        inline app::SkinnedMeshRenderingProfilingSetting* create() {
            return il2cpp::create_object<app::SkinnedMeshRenderingProfilingSetting>(get_class());
        }
    } // namespace SkinnedMeshRenderingProfilingSetting
} // namespace app::classes::types
