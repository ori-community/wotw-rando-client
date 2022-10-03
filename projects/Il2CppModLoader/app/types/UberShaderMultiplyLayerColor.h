#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderMultiplyLayerColor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderMultiplyLayerColor__Class** type_info;
        inline app::UberShaderMultiplyLayerColor__Class* get_class() {
            return il2cpp::get_class<app::UberShaderMultiplyLayerColor__Class>(type_info, "", "UberShaderMultiplyLayerColor");
        }
        inline app::UberShaderMultiplyLayerColor* create() {
            return il2cpp::create_object<app::UberShaderMultiplyLayerColor>(get_class());
        }
    } // namespace UberShaderMultiplyLayerColor
} // namespace app::classes::types
