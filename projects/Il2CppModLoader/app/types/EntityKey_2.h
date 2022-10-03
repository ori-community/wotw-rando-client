#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityKey_2 {
        namespace {
            app::EntityKey_2__Class* type_info_ref = nullptr;
        }
        app::EntityKey_2__Class** type_info = &type_info_ref;
        inline app::EntityKey_2__Class* get_class() {
            return il2cpp::get_class<app::EntityKey_2__Class>(type_info, "PlayFab.CloudScriptModels", "EntityKey");
        }
        inline app::EntityKey_2* create() {
            return il2cpp::create_object<app::EntityKey_2>(get_class());
        }
    } // namespace EntityKey_2
} // namespace app::classes::types
