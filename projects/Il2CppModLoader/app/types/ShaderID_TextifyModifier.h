#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_TextifyModifier {
        inline app::ShaderID_TextifyModifier__Class** type_info = (app::ShaderID_TextifyModifier__Class**)(modloader::win::memory::resolve_rva(0x04728438));
        inline app::ShaderID_TextifyModifier__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_TextifyModifier__Class>(type_info, "", "ShaderID_TextifyModifier");
        }
        inline app::ShaderID_TextifyModifier* create() {
            return il2cpp::create_object<app::ShaderID_TextifyModifier>(get_class());
        }
    } // namespace ShaderID_TextifyModifier
} // namespace app::classes::types
