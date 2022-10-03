#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityKey_4 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityKey_4__Class** type_info;
        inline app::EntityKey_4__Class* get_class() {
            return il2cpp::get_class<app::EntityKey_4__Class>(type_info, "PlayFab.EventsModels", "EntityKey");
        }
        inline app::EntityKey_4* create() {
            return il2cpp::create_object<app::EntityKey_4>(get_class());
        }
    } // namespace EntityKey_4
} // namespace app::classes::types
