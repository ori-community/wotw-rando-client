#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VignetteAndChromaticAberration_AberrationMode__Enum {
        namespace {
            inline app::VignetteAndChromaticAberration_AberrationMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::VignetteAndChromaticAberration_AberrationMode__Enum__Class** type_info = &type_info_ref;
        inline app::VignetteAndChromaticAberration_AberrationMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::VignetteAndChromaticAberration_AberrationMode__Enum__Class>(type_info, "UnityStandardAssets.ImageEffects", "VignetteAndChromaticAberration", "AberrationMode");
        }
        inline app::VignetteAndChromaticAberration_AberrationMode__Enum* create() {
            return il2cpp::create_object<app::VignetteAndChromaticAberration_AberrationMode__Enum>(get_class());
        }
    } // namespace VignetteAndChromaticAberration_AberrationMode__Enum
} // namespace app::classes::types
