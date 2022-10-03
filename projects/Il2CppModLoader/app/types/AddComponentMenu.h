#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddComponentMenu {
        namespace {
            app::AddComponentMenu__Class* type_info_ref = nullptr;
        }
        app::AddComponentMenu__Class** type_info = &type_info_ref;
        inline app::AddComponentMenu__Class* get_class() {
            return il2cpp::get_class<app::AddComponentMenu__Class>(type_info, "UnityEngine", "AddComponentMenu");
        }
        inline app::AddComponentMenu* create() {
            return il2cpp::create_object<app::AddComponentMenu>(get_class());
        }
    } // namespace AddComponentMenu
} // namespace app::classes::types
