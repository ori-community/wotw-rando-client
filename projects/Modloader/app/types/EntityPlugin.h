#pragma once
#include <Modloader/app/structs/EntityPlugin.h>
#include <Modloader/app/structs/EntityPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityPlugin {
        inline app::EntityPlugin__Class** type_info() {
            static app::EntityPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityPlugin__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityPlugin__Class* get_class() {
            return il2cpp::get_class<app::EntityPlugin__Class>(type_info(), "", "EntityPlugin");
        }
        inline app::EntityPlugin* create() {
            return il2cpp::create_object<app::EntityPlugin>(get_class());
        }
    } // namespace EntityPlugin
} // namespace app::classes::types
