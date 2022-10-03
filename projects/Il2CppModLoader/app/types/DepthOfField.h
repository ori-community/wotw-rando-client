#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DepthOfField {
        namespace {
            app::DepthOfField__Class* type_info_ref = nullptr;
        }
        app::DepthOfField__Class** type_info = &type_info_ref;
        inline app::DepthOfField__Class* get_class() {
            return il2cpp::get_class<app::DepthOfField__Class>(type_info, "UnityStandardAssets.ImageEffects", "DepthOfField");
        }
        inline app::DepthOfField* create() {
            return il2cpp::create_object<app::DepthOfField>(get_class());
        }
    } // namespace DepthOfField
} // namespace app::classes::types
