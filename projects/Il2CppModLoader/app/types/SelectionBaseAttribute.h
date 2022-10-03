#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SelectionBaseAttribute {
        namespace {
            app::SelectionBaseAttribute__Class* type_info_ref = nullptr;
        }
        app::SelectionBaseAttribute__Class** type_info = &type_info_ref;
        inline app::SelectionBaseAttribute__Class* get_class() {
            return il2cpp::get_class<app::SelectionBaseAttribute__Class>(type_info, "UnityEngine", "SelectionBaseAttribute");
        }
        inline app::SelectionBaseAttribute* create() {
            return il2cpp::create_object<app::SelectionBaseAttribute>(get_class());
        }
    } // namespace SelectionBaseAttribute
} // namespace app::classes::types
