#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CC_Led {
        inline app::ShaderID_CC_Led__Class** type_info = (app::ShaderID_CC_Led__Class**)(modloader::win::memory::resolve_rva(0x047449B8));
        inline app::ShaderID_CC_Led__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CC_Led__Class>(type_info, "", "ShaderID_CC_Led");
        }
        inline app::ShaderID_CC_Led* create() {
            return il2cpp::create_object<app::ShaderID_CC_Led>(get_class());
        }
    } // namespace ShaderID_CC_Led
} // namespace app::classes::types
