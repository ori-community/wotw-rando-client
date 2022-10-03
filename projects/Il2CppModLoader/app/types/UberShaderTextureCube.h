#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderTextureCube {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderTextureCube__Class** type_info;
        inline app::UberShaderTextureCube__Class* get_class() {
            return il2cpp::get_class<app::UberShaderTextureCube__Class>(type_info, "", "UberShaderTextureCube");
        }
        inline app::UberShaderTextureCube* create() {
            return il2cpp::create_object<app::UberShaderTextureCube>(get_class());
        }
    } // namespace UberShaderTextureCube
} // namespace app::classes::types
