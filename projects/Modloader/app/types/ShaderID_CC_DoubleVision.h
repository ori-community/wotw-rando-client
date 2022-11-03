#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CC_DoubleVision {
        inline app::ShaderID_CC_DoubleVision__Class** type_info = (app::ShaderID_CC_DoubleVision__Class**)(modloader::win::memory::resolve_rva(0x04730F00));
        inline app::ShaderID_CC_DoubleVision__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CC_DoubleVision__Class>(type_info, "", "ShaderID_CC_DoubleVision");
        }
        inline app::ShaderID_CC_DoubleVision* create() {
            return il2cpp::create_object<app::ShaderID_CC_DoubleVision>(get_class());
        }
    } // namespace ShaderID_CC_DoubleVision
} // namespace app::classes::types
