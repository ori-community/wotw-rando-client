#pragma once
#include <Modloader/app/structs/UberShaderColor.h>
#include <Modloader/app/structs/UberShaderColor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderColor {
        inline app::UberShaderColor__Class** type_info() {
            static app::UberShaderColor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderColor__Class**)(modloader::win::memory::resolve_rva(0x04767178));
            }
            return cache;
        }
        inline app::UberShaderColor__Class* get_class() {
            return il2cpp::get_class<app::UberShaderColor__Class>(type_info(), "", "UberShaderColor");
        }
        inline app::UberShaderColor* create() {
            return il2cpp::create_object<app::UberShaderColor>(get_class());
        }
    } // namespace UberShaderColor
} // namespace app::classes::types
