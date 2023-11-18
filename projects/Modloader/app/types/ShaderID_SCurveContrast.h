#pragma once
#include <Modloader/app/structs/ShaderID_SCurveContrast.h>
#include <Modloader/app/structs/ShaderID_SCurveContrast__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_SCurveContrast {
        inline app::ShaderID_SCurveContrast__Class** type_info() {
            static app::ShaderID_SCurveContrast__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_SCurveContrast__Class**)(modloader::win::memory::resolve_rva(0x04751E78));
            }
            return cache;
        }
        inline app::ShaderID_SCurveContrast__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SCurveContrast__Class>(type_info(), "Colorful", "ShaderID_SCurveContrast");
        }
        inline app::ShaderID_SCurveContrast* create() {
            return il2cpp::create_object<app::ShaderID_SCurveContrast>(get_class());
        }
    } // namespace ShaderID_SCurveContrast
} // namespace app::classes::types
