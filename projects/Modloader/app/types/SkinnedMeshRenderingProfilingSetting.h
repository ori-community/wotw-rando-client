#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkinnedMeshRenderingProfilingSetting {
        namespace {
            inline app::SkinnedMeshRenderingProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::SkinnedMeshRenderingProfilingSetting__Class** type_info = &type_info_ref;
        inline app::SkinnedMeshRenderingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::SkinnedMeshRenderingProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "SkinnedMeshRenderingProfilingSetting");
        }
        inline app::SkinnedMeshRenderingProfilingSetting* create() {
            return il2cpp::create_object<app::SkinnedMeshRenderingProfilingSetting>(get_class());
        }
    } // namespace SkinnedMeshRenderingProfilingSetting
} // namespace app::classes::types
