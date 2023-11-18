#pragma once
#include <Modloader/app/structs/EntityState.h>
#include <Modloader/app/structs/EntityState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityState {
        inline app::EntityState__Class** type_info() {
            static app::EntityState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityState__Class* get_class() {
            return il2cpp::get_class<app::EntityState__Class>(type_info(), "Moon", "EntityState");
        }
        inline app::EntityState* create() {
            return il2cpp::create_object<app::EntityState>(get_class());
        }
    } // namespace EntityState
} // namespace app::classes::types
