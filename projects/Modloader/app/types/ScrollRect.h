#pragma once
#include <Modloader/app/structs/ScrollRect.h>
#include <Modloader/app/structs/ScrollRect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScrollRect {
        inline app::ScrollRect__Class** type_info() {
            static app::ScrollRect__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScrollRect__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScrollRect__Class* get_class() {
            return il2cpp::get_class<app::ScrollRect__Class>(type_info(), "UnityEngine.UI", "ScrollRect");
        }
        inline app::ScrollRect* create() {
            return il2cpp::create_object<app::ScrollRect>(get_class());
        }
    } // namespace ScrollRect
} // namespace app::classes::types
