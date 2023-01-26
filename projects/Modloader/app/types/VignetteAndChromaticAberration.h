#pragma once
#include <Modloader/app/structs/VignetteAndChromaticAberration.h>
#include <Modloader/app/structs/VignetteAndChromaticAberration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VignetteAndChromaticAberration {
        inline app::VignetteAndChromaticAberration__Class** type_info() {
            static app::VignetteAndChromaticAberration__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VignetteAndChromaticAberration__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VignetteAndChromaticAberration__Class* get_class() {
            return il2cpp::get_class<app::VignetteAndChromaticAberration__Class>(type_info(), "UnityStandardAssets.ImageEffects", "VignetteAndChromaticAberration");
        }
        inline app::VignetteAndChromaticAberration* create() {
            return il2cpp::create_object<app::VignetteAndChromaticAberration>(get_class());
        }
    } // namespace VignetteAndChromaticAberration
} // namespace app::classes::types
