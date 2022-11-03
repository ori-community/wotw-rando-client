#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ImageEffectAllowedInSceneView {
        namespace {
            inline app::ImageEffectAllowedInSceneView__Class* type_info_ref = nullptr;
        }
        inline app::ImageEffectAllowedInSceneView__Class** type_info = &type_info_ref;
        inline app::ImageEffectAllowedInSceneView__Class* get_class() {
            return il2cpp::get_class<app::ImageEffectAllowedInSceneView__Class>(type_info, "UnityEngine", "ImageEffectAllowedInSceneView");
        }
        inline app::ImageEffectAllowedInSceneView* create() {
            return il2cpp::create_object<app::ImageEffectAllowedInSceneView>(get_class());
        }
    } // namespace ImageEffectAllowedInSceneView
} // namespace app::classes::types
