#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PostEffectsHelper {
        namespace {
            app::PostEffectsHelper__Class* type_info_ref = nullptr;
        }
        app::PostEffectsHelper__Class** type_info = &type_info_ref;
        inline app::PostEffectsHelper__Class* get_class() {
            return il2cpp::get_class<app::PostEffectsHelper__Class>(type_info, "UnityStandardAssets.ImageEffects", "PostEffectsHelper");
        }
        inline app::PostEffectsHelper* create() {
            return il2cpp::create_object<app::PostEffectsHelper>(get_class());
        }
    } // namespace PostEffectsHelper
} // namespace app::classes::types
