#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityKey_9__Array {
        namespace {
            app::EntityKey_9__Array__Class* type_info_ref = nullptr;
        }
        app::EntityKey_9__Array__Class** type_info = &type_info_ref;
        inline app::EntityKey_9__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityKey_9__Array__Class>(type_info, "PlayFab.PlayStreamModels", "EntityKey[]");
        }
        inline app::EntityKey_9__Array* create() {
            return il2cpp::create_object<app::EntityKey_9__Array>(get_class());
        }
    } // namespace EntityKey_9__Array
} // namespace app::classes::types
