#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityKey_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityKey_1__Class** type_info;
        inline app::EntityKey_1__Class* get_class() {
            return il2cpp::get_class<app::EntityKey_1__Class>(type_info, "PlayFab.ClientModels", "EntityKey");
        }
        inline app::EntityKey_1* create() {
            return il2cpp::create_object<app::EntityKey_1>(get_class());
        }
    } // namespace EntityKey_1
} // namespace app::classes::types
