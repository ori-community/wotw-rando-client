#pragma once
#include <Modloader/app/structs/SelectionGizmo.h>
#include <Modloader/app/structs/SelectionGizmo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SelectionGizmo {
        inline app::SelectionGizmo__Class** type_info() {
            static app::SelectionGizmo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SelectionGizmo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SelectionGizmo__Class* get_class() {
            return il2cpp::get_class<app::SelectionGizmo__Class>(type_info(), "", "SelectionGizmo");
        }
        inline app::SelectionGizmo* create() {
            return il2cpp::create_object<app::SelectionGizmo>(get_class());
        }
    } // namespace SelectionGizmo
} // namespace app::classes::types
