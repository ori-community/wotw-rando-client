#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderBlock {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderBlock__Class** type_info;
        inline app::UberShaderBlock__Class* get_class() {
            return il2cpp::get_class<app::UberShaderBlock__Class>(type_info, "", "UberShaderBlock");
        }
        inline app::UberShaderBlock* create() {
            return il2cpp::create_object<app::UberShaderBlock>(get_class());
        }
    } // namespace UberShaderBlock
} // namespace app::classes::types
