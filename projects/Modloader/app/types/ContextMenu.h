#pragma once
#include <Modloader/app/structs/ContextMenu.h>
#include <Modloader/app/structs/ContextMenu__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContextMenu {
        inline app::ContextMenu__Class** type_info() {
            static app::ContextMenu__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContextMenu__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContextMenu__Class* get_class() {
            return il2cpp::get_class<app::ContextMenu__Class>(type_info(), "UnityEngine", "ContextMenu");
        }
        inline app::ContextMenu* create() {
            return il2cpp::create_object<app::ContextMenu>(get_class());
        }
    } // namespace ContextMenu
} // namespace app::classes::types
