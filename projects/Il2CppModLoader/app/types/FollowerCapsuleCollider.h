#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FollowerCapsuleCollider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FollowerCapsuleCollider__Class** type_info;
        inline app::FollowerCapsuleCollider__Class* get_class() {
            return il2cpp::get_class<app::FollowerCapsuleCollider__Class>(type_info, "", "FollowerCapsuleCollider");
        }
        inline app::FollowerCapsuleCollider* create() {
            return il2cpp::create_object<app::FollowerCapsuleCollider>(get_class());
        }
    } // namespace FollowerCapsuleCollider
} // namespace app::classes::types
