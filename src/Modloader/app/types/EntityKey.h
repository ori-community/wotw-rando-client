#pragma once
#include <Modloader/app/structs/EntityKey.h>
#include <Modloader/app/structs/EntityKey__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityKey {
        inline app::EntityKey__Class** type_info() {
            static app::EntityKey__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityKey__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityKey__Class* get_class() {
            return il2cpp::get_class<app::EntityKey__Class>(type_info(), "PlayFab.AuthenticationModels", "EntityKey");
        }
        inline app::EntityKey* create() {
            return il2cpp::create_object<app::EntityKey>(get_class());
        }
    } // namespace EntityKey
} // namespace app::classes::types
