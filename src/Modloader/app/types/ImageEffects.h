#pragma once
#include <Modloader/app/structs/ImageEffects.h>
#include <Modloader/app/structs/ImageEffects__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ImageEffects {
        inline app::ImageEffects__Class** type_info() {
            static app::ImageEffects__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ImageEffects__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ImageEffects__Class* get_class() {
            return il2cpp::get_class<app::ImageEffects__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ImageEffects");
        }
        inline app::ImageEffects* create() {
            return il2cpp::create_object<app::ImageEffects>(get_class());
        }
    } // namespace ImageEffects
} // namespace app::classes::types
