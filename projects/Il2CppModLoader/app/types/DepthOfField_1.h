#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DepthOfField_1 {
        namespace {
            app::DepthOfField_1__Class* type_info_ref = nullptr;
        }
        app::DepthOfField_1__Class** type_info = &type_info_ref;
        inline app::DepthOfField_1__Class* get_class() {
            return il2cpp::get_class<app::DepthOfField_1__Class>(type_info, "UnityStandardAssets.CinematicEffects", "DepthOfField");
        }
        inline app::DepthOfField_1* create() {
            return il2cpp::create_object<app::DepthOfField_1>(get_class());
        }
    } // namespace DepthOfField_1
} // namespace app::classes::types
