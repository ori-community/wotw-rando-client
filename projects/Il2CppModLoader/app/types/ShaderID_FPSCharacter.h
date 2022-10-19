#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_FPSCharacter {
        inline app::ShaderID_FPSCharacter__Class** type_info = (app::ShaderID_FPSCharacter__Class**)(modloader::win::memory::resolve_rva(0x0472E9B8));
        inline app::ShaderID_FPSCharacter__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_FPSCharacter__Class>(type_info, "RootMotion.Demos", "ShaderID_FPSCharacter");
        }
        inline app::ShaderID_FPSCharacter* create() {
            return il2cpp::create_object<app::ShaderID_FPSCharacter>(get_class());
        }
    } // namespace ShaderID_FPSCharacter
} // namespace app::classes::types
