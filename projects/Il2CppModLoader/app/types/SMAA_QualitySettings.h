#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SMAA_QualitySettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SMAA_QualitySettings__Class** type_info;
        inline app::SMAA_QualitySettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SMAA_QualitySettings__Class>(type_info, "UnityStandardAssets.CinematicEffects", "SMAA", "QualitySettings");
        }
        inline app::SMAA_QualitySettings* create() {
            return il2cpp::create_object<app::SMAA_QualitySettings>(get_class());
        }
        inline app::SMAA_QualitySettings__Boxed* box(app::SMAA_QualitySettings value) {
            return il2cpp::box_value<app::SMAA_QualitySettings__Boxed>(get_class(), value);
        }
        inline app::SMAA_QualitySettings__Array* create_array(int size) {
            return il2cpp::array_new<app::SMAA_QualitySettings__Array>(get_class(), size);
        }
    } // namespace SMAA_QualitySettings
} // namespace app::classes::types
