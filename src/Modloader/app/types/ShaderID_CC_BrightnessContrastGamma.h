#pragma once
#include <Modloader/app/structs/ShaderID_CC_BrightnessContrastGamma.h>
#include <Modloader/app/structs/ShaderID_CC_BrightnessContrastGamma__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CC_BrightnessContrastGamma {
        inline app::ShaderID_CC_BrightnessContrastGamma__Class** type_info() {
            static app::ShaderID_CC_BrightnessContrastGamma__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CC_BrightnessContrastGamma__Class**)(modloader::win::memory::resolve_rva(0x04789C98));
            }
            return cache;
        }
        inline app::ShaderID_CC_BrightnessContrastGamma__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CC_BrightnessContrastGamma__Class>(type_info(), "", "ShaderID_CC_BrightnessContrastGamma");
        }
        inline app::ShaderID_CC_BrightnessContrastGamma* create() {
            return il2cpp::create_object<app::ShaderID_CC_BrightnessContrastGamma>(get_class());
        }
    } // namespace ShaderID_CC_BrightnessContrastGamma
} // namespace app::classes::types
