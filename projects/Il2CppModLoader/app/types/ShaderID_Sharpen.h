#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_Sharpen {
        inline app::ShaderID_Sharpen__Class** type_info = (app::ShaderID_Sharpen__Class**)(modloader::win::memory::resolve_rva(0x0470A140));
        inline app::ShaderID_Sharpen__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Sharpen__Class>(type_info, "Colorful", "ShaderID_Sharpen");
        }
        inline app::ShaderID_Sharpen* create() {
            return il2cpp::create_object<app::ShaderID_Sharpen>(get_class());
        }
    } // namespace ShaderID_Sharpen
} // namespace app::classes::types
