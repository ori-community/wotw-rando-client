#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderColor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderColor__Class** type_info;
        inline app::UberShaderColor__Class* get_class() {
            return il2cpp::get_class<app::UberShaderColor__Class>(type_info, "", "UberShaderColor");
        }
        inline app::UberShaderColor* create() {
            return il2cpp::create_object<app::UberShaderColor>(get_class());
        }
    } // namespace UberShaderColor
} // namespace app::classes::types
