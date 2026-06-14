#pragma once
#include <Modloader/app/structs/GizmosChangeColor.h>
#include <Modloader/app/structs/GizmosChangeColor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GizmosChangeColor {
        inline app::GizmosChangeColor__Class** type_info() {
            static app::GizmosChangeColor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GizmosChangeColor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GizmosChangeColor__Class* get_class() {
            return il2cpp::get_class<app::GizmosChangeColor__Class>(type_info(), "Moon.Gui", "GizmosChangeColor");
        }
        inline app::GizmosChangeColor* create() {
            return il2cpp::create_object<app::GizmosChangeColor>(get_class());
        }
    } // namespace GizmosChangeColor
} // namespace app::classes::types
