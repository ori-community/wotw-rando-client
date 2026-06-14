#pragma once
#include <Modloader/app/structs/ShaderID_CC_Threshold.h>
#include <Modloader/app/structs/ShaderID_CC_Threshold__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CC_Threshold {
        inline app::ShaderID_CC_Threshold__Class** type_info() {
            static app::ShaderID_CC_Threshold__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CC_Threshold__Class**)(modloader::win::memory::resolve_rva(0x04797128));
            }
            return cache;
        }
        inline app::ShaderID_CC_Threshold__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CC_Threshold__Class>(type_info(), "", "ShaderID_CC_Threshold");
        }
        inline app::ShaderID_CC_Threshold* create() {
            return il2cpp::create_object<app::ShaderID_CC_Threshold>(get_class());
        }
    } // namespace ShaderID_CC_Threshold
} // namespace app::classes::types
