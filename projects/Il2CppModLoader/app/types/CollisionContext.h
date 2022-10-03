#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CollisionContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CollisionContext__Class** type_info;
        inline app::CollisionContext__Class* get_class() {
            return il2cpp::get_class<app::CollisionContext__Class>(type_info, "", "CollisionContext");
        }
        inline app::CollisionContext* create() {
            return il2cpp::create_object<app::CollisionContext>(get_class());
        }
    } // namespace CollisionContext
} // namespace app::classes::types
