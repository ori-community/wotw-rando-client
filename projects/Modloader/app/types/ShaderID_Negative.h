#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_Negative {
        inline app::ShaderID_Negative__Class** type_info = (app::ShaderID_Negative__Class**)(modloader::win::memory::resolve_rva(0x04708D20));
        inline app::ShaderID_Negative__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Negative__Class>(type_info, "Colorful", "ShaderID_Negative");
        }
        inline app::ShaderID_Negative* create() {
            return il2cpp::create_object<app::ShaderID_Negative>(get_class());
        }
    } // namespace ShaderID_Negative
} // namespace app::classes::types
