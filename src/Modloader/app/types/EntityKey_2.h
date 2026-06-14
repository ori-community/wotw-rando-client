#pragma once
#include <Modloader/app/structs/EntityKey_2.h>
#include <Modloader/app/structs/EntityKey_2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityKey_2 {
        inline app::EntityKey_2__Class** type_info() {
            static app::EntityKey_2__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityKey_2__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityKey_2__Class* get_class() {
            return il2cpp::get_class<app::EntityKey_2__Class>(type_info(), "PlayFab.CloudScriptModels", "EntityKey");
        }
        inline app::EntityKey_2* create() {
            return il2cpp::create_object<app::EntityKey_2>(get_class());
        }
    } // namespace EntityKey_2
} // namespace app::classes::types
