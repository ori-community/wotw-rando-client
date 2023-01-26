#pragma once
#include <Modloader/app/structs/EntityReactions.h>
#include <Modloader/app/structs/EntityReactions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityReactions {
        inline app::EntityReactions__Class** type_info() {
            static app::EntityReactions__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityReactions__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityReactions__Class* get_class() {
            return il2cpp::get_class<app::EntityReactions__Class>(type_info(), "", "EntityReactions");
        }
        inline app::EntityReactions* create() {
            return il2cpp::create_object<app::EntityReactions>(get_class());
        }
    } // namespace EntityReactions
} // namespace app::classes::types
