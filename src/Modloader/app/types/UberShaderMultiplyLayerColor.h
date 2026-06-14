#pragma once
#include <Modloader/app/structs/UberShaderMultiplyLayerColor.h>
#include <Modloader/app/structs/UberShaderMultiplyLayerColor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderMultiplyLayerColor {
        inline app::UberShaderMultiplyLayerColor__Class** type_info() {
            static app::UberShaderMultiplyLayerColor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderMultiplyLayerColor__Class**)(modloader::win::memory::resolve_rva(0x0474ACA0));
            }
            return cache;
        }
        inline app::UberShaderMultiplyLayerColor__Class* get_class() {
            return il2cpp::get_class<app::UberShaderMultiplyLayerColor__Class>(type_info(), "", "UberShaderMultiplyLayerColor");
        }
        inline app::UberShaderMultiplyLayerColor* create() {
            return il2cpp::create_object<app::UberShaderMultiplyLayerColor>(get_class());
        }
    } // namespace UberShaderMultiplyLayerColor
} // namespace app::classes::types
