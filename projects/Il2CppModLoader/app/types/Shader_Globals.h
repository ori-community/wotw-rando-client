#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Shader_Globals {
        inline app::Shader_Globals__Class** type_info = (app::Shader_Globals__Class**)(modloader::win::memory::resolve_rva(0x0474B470));
        inline app::Shader_Globals__Class* get_class() {
            return il2cpp::get_nested_class<app::Shader_Globals__Class>(type_info, "Frameworks", "Shader", "Globals");
        }
        inline app::Shader_Globals* create() {
            return il2cpp::create_object<app::Shader_Globals>(get_class());
        }
    } // namespace Shader_Globals
} // namespace app::classes::types
