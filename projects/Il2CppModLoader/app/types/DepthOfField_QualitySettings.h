#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DepthOfField_QualitySettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DepthOfField_QualitySettings__Class** type_info;
        inline app::DepthOfField_QualitySettings__Class* get_class() {
            return il2cpp::get_nested_class<app::DepthOfField_QualitySettings__Class>(type_info, "UnityStandardAssets.CinematicEffects", "DepthOfField", "QualitySettings");
        }
        inline app::DepthOfField_QualitySettings* create() {
            return il2cpp::create_object<app::DepthOfField_QualitySettings>(get_class());
        }
        inline app::DepthOfField_QualitySettings__Boxed* box(app::DepthOfField_QualitySettings value) {
            return il2cpp::box_value<app::DepthOfField_QualitySettings__Boxed>(get_class(), value);
        }
        inline app::DepthOfField_QualitySettings__Array* create_array(int size) {
            return il2cpp::array_new<app::DepthOfField_QualitySettings__Array>(get_class(), size);
        }
        inline app::DepthOfField_QualitySettings__Array* create_array(const std::vector<app::DepthOfField_QualitySettings__Boxed>& items) {
            return il2cpp::array_new<app::DepthOfField_QualitySettings__Array>(get_class(), items);
        }
    } // namespace DepthOfField_QualitySettings
} // namespace app::classes::types
