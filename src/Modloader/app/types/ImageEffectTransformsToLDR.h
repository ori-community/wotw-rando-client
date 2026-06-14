#pragma once
#include <Modloader/app/structs/ImageEffectTransformsToLDR.h>
#include <Modloader/app/structs/ImageEffectTransformsToLDR__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ImageEffectTransformsToLDR {
        inline app::ImageEffectTransformsToLDR__Class** type_info() {
            static app::ImageEffectTransformsToLDR__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ImageEffectTransformsToLDR__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ImageEffectTransformsToLDR__Class* get_class() {
            return il2cpp::get_class<app::ImageEffectTransformsToLDR__Class>(type_info(), "UnityEngine", "ImageEffectTransformsToLDR");
        }
        inline app::ImageEffectTransformsToLDR* create() {
            return il2cpp::create_object<app::ImageEffectTransformsToLDR>(get_class());
        }
    } // namespace ImageEffectTransformsToLDR
} // namespace app::classes::types
