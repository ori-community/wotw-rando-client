#pragma once
#include <Modloader/app/structs/EntityNestedPrefab.h>
#include <Modloader/app/structs/EntityNestedPrefab__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityNestedPrefab {
        inline app::EntityNestedPrefab__Class** type_info() {
            static app::EntityNestedPrefab__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityNestedPrefab__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityNestedPrefab__Class* get_class() {
            return il2cpp::get_class<app::EntityNestedPrefab__Class>(type_info(), "", "EntityNestedPrefab");
        }
        inline app::EntityNestedPrefab* create() {
            return il2cpp::create_object<app::EntityNestedPrefab>(get_class());
        }
    } // namespace EntityNestedPrefab
} // namespace app::classes::types
