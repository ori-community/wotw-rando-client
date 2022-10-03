#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DepthOfField_QualitySettings__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DepthOfField_QualitySettings__Array__Class** type_info;
        inline app::DepthOfField_QualitySettings__Array__Class* get_class() {
            return il2cpp::get_class<app::DepthOfField_QualitySettings__Array__Class>(type_info, "UnityStandardAssets.CinematicEffects", "DepthOfField+QualitySettings[]");
        }
        inline app::DepthOfField_QualitySettings__Array* create() {
            return il2cpp::create_object<app::DepthOfField_QualitySettings__Array>(get_class());
        }
    } // namespace DepthOfField_QualitySettings__Array
} // namespace app::classes::types
