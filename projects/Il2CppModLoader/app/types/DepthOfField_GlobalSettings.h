#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DepthOfField_GlobalSettings {
        namespace {
            app::DepthOfField_GlobalSettings__Class* type_info_ref = nullptr;
        }
        app::DepthOfField_GlobalSettings__Class** type_info = &type_info_ref;
        inline app::DepthOfField_GlobalSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::DepthOfField_GlobalSettings__Class>(type_info, "UnityStandardAssets.CinematicEffects", "DepthOfField", "GlobalSettings");
        }
        inline app::DepthOfField_GlobalSettings* create() {
            return il2cpp::create_object<app::DepthOfField_GlobalSettings>(get_class());
        }
        inline app::DepthOfField_GlobalSettings__Boxed* box(app::DepthOfField_GlobalSettings value) {
            return il2cpp::box_value<app::DepthOfField_GlobalSettings__Boxed>(get_class(), value);
        }
    } // namespace DepthOfField_GlobalSettings
} // namespace app::classes::types
