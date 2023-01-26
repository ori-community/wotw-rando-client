#pragma once
#include <Modloader/app/structs/SkinnedMeshRenderingProfilingSetting.h>
#include <Modloader/app/structs/SkinnedMeshRenderingProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkinnedMeshRenderingProfilingSetting {
        inline app::SkinnedMeshRenderingProfilingSetting__Class** type_info() {
            static app::SkinnedMeshRenderingProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkinnedMeshRenderingProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkinnedMeshRenderingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::SkinnedMeshRenderingProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "SkinnedMeshRenderingProfilingSetting");
        }
        inline app::SkinnedMeshRenderingProfilingSetting* create() {
            return il2cpp::create_object<app::SkinnedMeshRenderingProfilingSetting>(get_class());
        }
    } // namespace SkinnedMeshRenderingProfilingSetting
} // namespace app::classes::types
