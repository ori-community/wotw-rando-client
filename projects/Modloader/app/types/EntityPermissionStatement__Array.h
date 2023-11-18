#pragma once
#include <Modloader/app/structs/EntityPermissionStatement__Array.h>
#include <Modloader/app/structs/EntityPermissionStatement__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityPermissionStatement__Array {
        inline app::EntityPermissionStatement__Array__Class** type_info() {
            static app::EntityPermissionStatement__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityPermissionStatement__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityPermissionStatement__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityPermissionStatement__Array__Class>(type_info(), "PlayFab.ProfilesModels", "EntityPermissionStatement[]");
        }
        inline app::EntityPermissionStatement__Array* create() {
            return il2cpp::create_object<app::EntityPermissionStatement__Array>(get_class());
        }
    } // namespace EntityPermissionStatement__Array
} // namespace app::classes::types
