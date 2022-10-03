#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ImageEffectTransformsToLDR {
        namespace {
            app::ImageEffectTransformsToLDR__Class* type_info_ref = nullptr;
        }
        app::ImageEffectTransformsToLDR__Class** type_info = &type_info_ref;
        inline app::ImageEffectTransformsToLDR__Class* get_class() {
            return il2cpp::get_class<app::ImageEffectTransformsToLDR__Class>(type_info, "UnityEngine", "ImageEffectTransformsToLDR");
        }
        inline app::ImageEffectTransformsToLDR* create() {
            return il2cpp::create_object<app::ImageEffectTransformsToLDR>(get_class());
        }
    } // namespace ImageEffectTransformsToLDR
} // namespace app::classes::types
