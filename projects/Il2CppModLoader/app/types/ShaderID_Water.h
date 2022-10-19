#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_Water {
        inline app::ShaderID_Water__Class** type_info = (app::ShaderID_Water__Class**)(modloader::win::memory::resolve_rva(0x047871B0));
        inline app::ShaderID_Water__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Water__Class>(type_info, "", "ShaderID_Water");
        }
        inline app::ShaderID_Water* create() {
            return il2cpp::create_object<app::ShaderID_Water>(get_class());
        }
    } // namespace ShaderID_Water
} // namespace app::classes::types
