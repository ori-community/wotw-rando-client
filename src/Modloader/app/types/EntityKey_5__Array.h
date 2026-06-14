#pragma once
#include <Modloader/app/structs/EntityKey_5__Array.h>
#include <Modloader/app/structs/EntityKey_5__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityKey_5__Array {
        inline app::EntityKey_5__Array__Class** type_info() {
            static app::EntityKey_5__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityKey_5__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityKey_5__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityKey_5__Array__Class>(type_info(), "PlayFab.GroupsModels", "EntityKey[]");
        }
        inline app::EntityKey_5__Array* create() {
            return il2cpp::create_object<app::EntityKey_5__Array>(get_class());
        }
    } // namespace EntityKey_5__Array
} // namespace app::classes::types
