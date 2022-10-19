#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderTextureCube {
        inline app::UberShaderTextureCube__Class** type_info = (app::UberShaderTextureCube__Class**)(modloader::win::memory::resolve_rva(0x0472DF18));
        inline app::UberShaderTextureCube__Class* get_class() {
            return il2cpp::get_class<app::UberShaderTextureCube__Class>(type_info, "", "UberShaderTextureCube");
        }
        inline app::UberShaderTextureCube* create() {
            return il2cpp::create_object<app::UberShaderTextureCube>(get_class());
        }
    } // namespace UberShaderTextureCube
} // namespace app::classes::types
