#pragma once
#include <Modloader/app/structs/AddComponentMenu.h>
#include <Modloader/app/structs/AddComponentMenu__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddComponentMenu {
        inline app::AddComponentMenu__Class** type_info() {
            static app::AddComponentMenu__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AddComponentMenu__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AddComponentMenu__Class* get_class() {
            return il2cpp::get_class<app::AddComponentMenu__Class>(type_info(), "UnityEngine", "AddComponentMenu");
        }
        inline app::AddComponentMenu* create() {
            return il2cpp::create_object<app::AddComponentMenu>(get_class());
        }
    } // namespace AddComponentMenu
} // namespace app::classes::types
