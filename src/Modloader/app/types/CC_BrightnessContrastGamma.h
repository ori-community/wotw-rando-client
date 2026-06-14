#pragma once
#include <Modloader/app/structs/CC_BrightnessContrastGamma.h>
#include <Modloader/app/structs/CC_BrightnessContrastGamma__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CC_BrightnessContrastGamma {
        inline app::CC_BrightnessContrastGamma__Class** type_info() {
            static app::CC_BrightnessContrastGamma__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CC_BrightnessContrastGamma__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CC_BrightnessContrastGamma__Class* get_class() {
            return il2cpp::get_class<app::CC_BrightnessContrastGamma__Class>(type_info(), "", "CC_BrightnessContrastGamma");
        }
        inline app::CC_BrightnessContrastGamma* create() {
            return il2cpp::create_object<app::CC_BrightnessContrastGamma>(get_class());
        }
    } // namespace CC_BrightnessContrastGamma
} // namespace app::classes::types
