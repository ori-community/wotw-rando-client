#pragma once
#include <Modloader/app/structs/GridLayout.h>
#include <Modloader/app/structs/GridLayout__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GridLayout {
        inline app::GridLayout__Class** type_info() {
            static app::GridLayout__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GridLayout__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GridLayout__Class* get_class() {
            return il2cpp::get_class<app::GridLayout__Class>(type_info(), "UnityEngine", "GridLayout");
        }
        inline app::GridLayout* create() {
            return il2cpp::create_object<app::GridLayout>(get_class());
        }
    } // namespace GridLayout
} // namespace app::classes::types
