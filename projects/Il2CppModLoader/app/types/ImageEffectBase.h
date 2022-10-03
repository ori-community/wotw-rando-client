#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ImageEffectBase {
        namespace {
            app::ImageEffectBase__Class* type_info_ref = nullptr;
        }
        app::ImageEffectBase__Class** type_info = &type_info_ref;
        inline app::ImageEffectBase__Class* get_class() {
            return il2cpp::get_class<app::ImageEffectBase__Class>(type_info, "UnityStandardAssets.ImageEffects", "ImageEffectBase");
        }
        inline app::ImageEffectBase* create() {
            return il2cpp::create_object<app::ImageEffectBase>(get_class());
        }
    } // namespace ImageEffectBase
} // namespace app::classes::types
