#pragma once
#include <Modloader/app/structs/ImageEffectAllowedInSceneView.h>
#include <Modloader/app/structs/ImageEffectAllowedInSceneView__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ImageEffectAllowedInSceneView {
        inline app::ImageEffectAllowedInSceneView__Class** type_info() {
            static app::ImageEffectAllowedInSceneView__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ImageEffectAllowedInSceneView__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ImageEffectAllowedInSceneView__Class* get_class() {
            return il2cpp::get_class<app::ImageEffectAllowedInSceneView__Class>(type_info(), "UnityEngine", "ImageEffectAllowedInSceneView");
        }
        inline app::ImageEffectAllowedInSceneView* create() {
            return il2cpp::create_object<app::ImageEffectAllowedInSceneView>(get_class());
        }
    } // namespace ImageEffectAllowedInSceneView
} // namespace app::classes::types
