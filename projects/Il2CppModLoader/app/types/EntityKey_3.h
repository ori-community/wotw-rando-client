#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityKey_3 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityKey_3__Class** type_info;
        inline app::EntityKey_3__Class* get_class() {
            return il2cpp::get_class<app::EntityKey_3__Class>(type_info, "PlayFab.DataModels", "EntityKey");
        }
        inline app::EntityKey_3* create() {
            return il2cpp::create_object<app::EntityKey_3>(get_class());
        }
    } // namespace EntityKey_3
} // namespace app::classes::types
