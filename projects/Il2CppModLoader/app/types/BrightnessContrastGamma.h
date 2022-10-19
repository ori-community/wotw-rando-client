#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrightnessContrastGamma {
        namespace {
            inline app::BrightnessContrastGamma__Class* type_info_ref = nullptr;
        }
        inline app::BrightnessContrastGamma__Class** type_info = &type_info_ref;
        inline app::BrightnessContrastGamma__Class* get_class() {
            return il2cpp::get_class<app::BrightnessContrastGamma__Class>(type_info, "Colorful", "BrightnessContrastGamma");
        }
        inline app::BrightnessContrastGamma* create() {
            return il2cpp::create_object<app::BrightnessContrastGamma>(get_class());
        }
    } // namespace BrightnessContrastGamma
} // namespace app::classes::types
