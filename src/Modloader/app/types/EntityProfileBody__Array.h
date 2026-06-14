#pragma once
#include <Modloader/app/structs/EntityProfileBody__Array.h>
#include <Modloader/app/structs/EntityProfileBody__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityProfileBody__Array {
        inline app::EntityProfileBody__Array__Class** type_info() {
            static app::EntityProfileBody__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityProfileBody__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityProfileBody__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityProfileBody__Array__Class>(type_info(), "PlayFab.ProfilesModels", "EntityProfileBody[]");
        }
        inline app::EntityProfileBody__Array* create() {
            return il2cpp::create_object<app::EntityProfileBody__Array>(get_class());
        }
    } // namespace EntityProfileBody__Array
} // namespace app::classes::types
