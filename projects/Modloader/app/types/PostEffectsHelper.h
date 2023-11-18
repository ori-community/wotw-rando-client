#pragma once
#include <Modloader/app/structs/PostEffectsHelper.h>
#include <Modloader/app/structs/PostEffectsHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostEffectsHelper {
        inline app::PostEffectsHelper__Class** type_info() {
            static app::PostEffectsHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostEffectsHelper__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostEffectsHelper__Class* get_class() {
            return il2cpp::get_class<app::PostEffectsHelper__Class>(type_info(), "UnityStandardAssets.ImageEffects", "PostEffectsHelper");
        }
        inline app::PostEffectsHelper* create() {
            return il2cpp::create_object<app::PostEffectsHelper>(get_class());
        }
    } // namespace PostEffectsHelper
} // namespace app::classes::types
