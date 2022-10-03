#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SMAA_QualitySettings__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SMAA_QualitySettings__Array__Class** type_info;
        inline app::SMAA_QualitySettings__Array__Class* get_class() {
            return il2cpp::get_class<app::SMAA_QualitySettings__Array__Class>(type_info, "UnityStandardAssets.CinematicEffects", "SMAA+QualitySettings[]");
        }
        inline app::SMAA_QualitySettings__Array* create() {
            return il2cpp::create_object<app::SMAA_QualitySettings__Array>(get_class());
        }
    } // namespace SMAA_QualitySettings__Array
} // namespace app::classes::types
