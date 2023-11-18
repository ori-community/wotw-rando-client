#pragma once
#include <Modloader/app/structs/VignetteAndChromaticAberration_AberrationMode__Enum.h>
#include <Modloader/app/structs/VignetteAndChromaticAberration_AberrationMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VignetteAndChromaticAberration_AberrationMode__Enum {
        inline app::VignetteAndChromaticAberration_AberrationMode__Enum__Class** type_info() {
            static app::VignetteAndChromaticAberration_AberrationMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VignetteAndChromaticAberration_AberrationMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VignetteAndChromaticAberration_AberrationMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::VignetteAndChromaticAberration_AberrationMode__Enum__Class>(type_info(), "UnityStandardAssets.ImageEffects", "VignetteAndChromaticAberration", "AberrationMode");
        }
        inline app::VignetteAndChromaticAberration_AberrationMode__Enum* create() {
            return il2cpp::create_object<app::VignetteAndChromaticAberration_AberrationMode__Enum>(get_class());
        }
    } // namespace VignetteAndChromaticAberration_AberrationMode__Enum
} // namespace app::classes::types
