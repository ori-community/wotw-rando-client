#pragma once
#include <Modloader/app/structs/BrightnessContrastGamma.h>
#include <Modloader/app/structs/BrightnessContrastGamma__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrightnessContrastGamma {
        inline app::BrightnessContrastGamma__Class** type_info() {
            static app::BrightnessContrastGamma__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BrightnessContrastGamma__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BrightnessContrastGamma__Class* get_class() {
            return il2cpp::get_class<app::BrightnessContrastGamma__Class>(type_info(), "Colorful", "BrightnessContrastGamma");
        }
        inline app::BrightnessContrastGamma* create() {
            return il2cpp::create_object<app::BrightnessContrastGamma>(get_class());
        }
    } // namespace BrightnessContrastGamma
} // namespace app::classes::types
