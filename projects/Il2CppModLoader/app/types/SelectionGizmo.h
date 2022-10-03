#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SelectionGizmo {
        namespace {
            app::SelectionGizmo__Class* type_info_ref = nullptr;
        }
        app::SelectionGizmo__Class** type_info = &type_info_ref;
        inline app::SelectionGizmo__Class* get_class() {
            return il2cpp::get_class<app::SelectionGizmo__Class>(type_info, "", "SelectionGizmo");
        }
        inline app::SelectionGizmo* create() {
            return il2cpp::create_object<app::SelectionGizmo>(get_class());
        }
    } // namespace SelectionGizmo
} // namespace app::classes::types
