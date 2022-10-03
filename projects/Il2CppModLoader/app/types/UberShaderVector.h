#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderVector {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderVector__Class** type_info;
        inline app::UberShaderVector__Class* get_class() {
            return il2cpp::get_class<app::UberShaderVector__Class>(type_info, "", "UberShaderVector");
        }
        inline app::UberShaderVector* create() {
            return il2cpp::create_object<app::UberShaderVector>(get_class());
        }
    } // namespace UberShaderVector
} // namespace app::classes::types
