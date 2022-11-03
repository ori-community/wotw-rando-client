#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_BrightnessContrastGamma {
        inline app::ShaderID_BrightnessContrastGamma__Class** type_info = (app::ShaderID_BrightnessContrastGamma__Class**)(modloader::win::memory::resolve_rva(0x04739790));
        inline app::ShaderID_BrightnessContrastGamma__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_BrightnessContrastGamma__Class>(type_info, "Colorful", "ShaderID_BrightnessContrastGamma");
        }
        inline app::ShaderID_BrightnessContrastGamma* create() {
            return il2cpp::create_object<app::ShaderID_BrightnessContrastGamma>(get_class());
        }
    } // namespace ShaderID_BrightnessContrastGamma
} // namespace app::classes::types
