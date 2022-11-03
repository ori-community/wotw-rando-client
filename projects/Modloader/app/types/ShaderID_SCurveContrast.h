#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_SCurveContrast {
        inline app::ShaderID_SCurveContrast__Class** type_info = (app::ShaderID_SCurveContrast__Class**)(modloader::win::memory::resolve_rva(0x04751E78));
        inline app::ShaderID_SCurveContrast__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SCurveContrast__Class>(type_info, "Colorful", "ShaderID_SCurveContrast");
        }
        inline app::ShaderID_SCurveContrast* create() {
            return il2cpp::create_object<app::ShaderID_SCurveContrast>(get_class());
        }
    } // namespace ShaderID_SCurveContrast
} // namespace app::classes::types
