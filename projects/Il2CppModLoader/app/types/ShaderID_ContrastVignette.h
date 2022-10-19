#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_ContrastVignette {
        inline app::ShaderID_ContrastVignette__Class** type_info = (app::ShaderID_ContrastVignette__Class**)(modloader::win::memory::resolve_rva(0x047438C0));
        inline app::ShaderID_ContrastVignette__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ContrastVignette__Class>(type_info, "Colorful", "ShaderID_ContrastVignette");
        }
        inline app::ShaderID_ContrastVignette* create() {
            return il2cpp::create_object<app::ShaderID_ContrastVignette>(get_class());
        }
    } // namespace ShaderID_ContrastVignette
} // namespace app::classes::types
