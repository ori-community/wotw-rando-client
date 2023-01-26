#pragma once
#include <Modloader/app/structs/ImageEffectBase.h>
#include <Modloader/app/structs/ImageEffectBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ImageEffectBase {
        inline app::ImageEffectBase__Class** type_info() {
            static app::ImageEffectBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ImageEffectBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ImageEffectBase__Class* get_class() {
            return il2cpp::get_class<app::ImageEffectBase__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ImageEffectBase");
        }
        inline app::ImageEffectBase* create() {
            return il2cpp::create_object<app::ImageEffectBase>(get_class());
        }
    } // namespace ImageEffectBase
} // namespace app::classes::types
