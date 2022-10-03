#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoFiPalette {
        namespace {
            app::LoFiPalette__Class* type_info_ref = nullptr;
        }
        app::LoFiPalette__Class** type_info = &type_info_ref;
        inline app::LoFiPalette__Class* get_class() {
            return il2cpp::get_class<app::LoFiPalette__Class>(type_info, "Colorful", "LoFiPalette");
        }
        inline app::LoFiPalette* create() {
            return il2cpp::create_object<app::LoFiPalette>(get_class());
        }
    } // namespace LoFiPalette
} // namespace app::classes::types
