#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityPermissionStatement {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityPermissionStatement__Class** type_info;
        inline app::EntityPermissionStatement__Class* get_class() {
            return il2cpp::get_class<app::EntityPermissionStatement__Class>(type_info, "PlayFab.ProfilesModels", "EntityPermissionStatement");
        }
        inline app::EntityPermissionStatement* create() {
            return il2cpp::create_object<app::EntityPermissionStatement>(get_class());
        }
        inline app::EntityPermissionStatement__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityPermissionStatement__Array>(get_class(), size);
        }
    } // namespace EntityPermissionStatement
} // namespace app::classes::types
