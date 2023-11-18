#pragma once
#include <Modloader/app/structs/LoFiPalette.h>
#include <Modloader/app/structs/LoFiPalette__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoFiPalette {
        inline app::LoFiPalette__Class** type_info() {
            static app::LoFiPalette__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LoFiPalette__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LoFiPalette__Class* get_class() {
            return il2cpp::get_class<app::LoFiPalette__Class>(type_info(), "Colorful", "LoFiPalette");
        }
        inline app::LoFiPalette* create() {
            return il2cpp::create_object<app::LoFiPalette>(get_class());
        }
    } // namespace LoFiPalette
} // namespace app::classes::types
