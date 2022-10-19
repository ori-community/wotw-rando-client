#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityKey {
        namespace {
            inline app::EntityKey__Class* type_info_ref = nullptr;
        }
        inline app::EntityKey__Class** type_info = &type_info_ref;
        inline app::EntityKey__Class* get_class() {
            return il2cpp::get_class<app::EntityKey__Class>(type_info, "PlayFab.AuthenticationModels", "EntityKey");
        }
        inline app::EntityKey* create() {
            return il2cpp::create_object<app::EntityKey>(get_class());
        }
    } // namespace EntityKey
} // namespace app::classes::types
