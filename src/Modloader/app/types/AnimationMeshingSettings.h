#pragma once
#include <Modloader/app/structs/AnimationMeshingSettings.h>
#include <Modloader/app/structs/AnimationMeshingSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationMeshingSettings {
        inline app::AnimationMeshingSettings__Class** type_info() {
            static app::AnimationMeshingSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationMeshingSettings__Class**)(modloader::win::memory::resolve_rva(0x04724EC0));
            }
            return cache;
        }
        inline app::AnimationMeshingSettings__Class* get_class() {
            return il2cpp::get_class<app::AnimationMeshingSettings__Class>(type_info(), "", "AnimationMeshingSettings");
        }
        inline app::AnimationMeshingSettings* create() {
            return il2cpp::create_object<app::AnimationMeshingSettings>(get_class());
        }
    } // namespace AnimationMeshingSettings
} // namespace app::classes::types
