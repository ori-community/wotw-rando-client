#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_UberDofTextureGenerator {
        inline app::ShaderID_UberDofTextureGenerator__Class** type_info = (app::ShaderID_UberDofTextureGenerator__Class**)(modloader::win::memory::resolve_rva(0x0477DE20));
        inline app::ShaderID_UberDofTextureGenerator__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_UberDofTextureGenerator__Class>(type_info, "", "ShaderID_UberDofTextureGenerator");
        }
        inline app::ShaderID_UberDofTextureGenerator* create() {
            return il2cpp::create_object<app::ShaderID_UberDofTextureGenerator>(get_class());
        }
    } // namespace ShaderID_UberDofTextureGenerator
} // namespace app::classes::types
