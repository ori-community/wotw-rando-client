#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationMeshingSettings {
        inline app::AnimationMeshingSettings__Class** type_info = (app::AnimationMeshingSettings__Class**)(modloader::win::memory::resolve_rva(0x04724EC0));
        inline app::AnimationMeshingSettings__Class* get_class() {
            return il2cpp::get_class<app::AnimationMeshingSettings__Class>(type_info, "", "AnimationMeshingSettings");
        }
        inline app::AnimationMeshingSettings* create() {
            return il2cpp::create_object<app::AnimationMeshingSettings>(get_class());
        }
    } // namespace AnimationMeshingSettings
} // namespace app::classes::types
