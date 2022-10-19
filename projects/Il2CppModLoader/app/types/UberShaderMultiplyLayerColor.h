#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderMultiplyLayerColor {
        inline app::UberShaderMultiplyLayerColor__Class** type_info = (app::UberShaderMultiplyLayerColor__Class**)(modloader::win::memory::resolve_rva(0x0474ACA0));
        inline app::UberShaderMultiplyLayerColor__Class* get_class() {
            return il2cpp::get_class<app::UberShaderMultiplyLayerColor__Class>(type_info, "", "UberShaderMultiplyLayerColor");
        }
        inline app::UberShaderMultiplyLayerColor* create() {
            return il2cpp::create_object<app::UberShaderMultiplyLayerColor>(get_class());
        }
    } // namespace UberShaderMultiplyLayerColor
} // namespace app::classes::types
