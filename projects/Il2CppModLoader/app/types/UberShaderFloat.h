#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderFloat {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderFloat__Class** type_info;
        inline app::UberShaderFloat__Class* get_class() {
            return il2cpp::get_class<app::UberShaderFloat__Class>(type_info, "", "UberShaderFloat");
        }
        inline app::UberShaderFloat* create() {
            return il2cpp::create_object<app::UberShaderFloat>(get_class());
        }
    } // namespace UberShaderFloat
} // namespace app::classes::types
