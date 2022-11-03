#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_Blend {
        inline app::ShaderID_Blend__Class** type_info = (app::ShaderID_Blend__Class**)(modloader::win::memory::resolve_rva(0x0470E7F8));
        inline app::ShaderID_Blend__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Blend__Class>(type_info, "Colorful", "ShaderID_Blend");
        }
        inline app::ShaderID_Blend* create() {
            return il2cpp::create_object<app::ShaderID_Blend>(get_class());
        }
    } // namespace ShaderID_Blend
} // namespace app::classes::types
