#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationMeshingSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationMeshingSettings__Class** type_info;
        inline app::AnimationMeshingSettings__Class* get_class() {
            return il2cpp::get_class<app::AnimationMeshingSettings__Class>(type_info, "", "AnimationMeshingSettings");
        }
        inline app::AnimationMeshingSettings* create() {
            return il2cpp::create_object<app::AnimationMeshingSettings>(get_class());
        }
    } // namespace AnimationMeshingSettings
} // namespace app::classes::types
