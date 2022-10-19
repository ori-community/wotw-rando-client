#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_Wiggle {
        inline app::ShaderID_Wiggle__Class** type_info = (app::ShaderID_Wiggle__Class**)(modloader::win::memory::resolve_rva(0x04710E00));
        inline app::ShaderID_Wiggle__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Wiggle__Class>(type_info, "Colorful", "ShaderID_Wiggle");
        }
        inline app::ShaderID_Wiggle* create() {
            return il2cpp::create_object<app::ShaderID_Wiggle>(get_class());
        }
    } // namespace ShaderID_Wiggle
} // namespace app::classes::types
