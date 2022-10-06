#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CapsuleCollider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CapsuleCollider__Class** type_info;
        inline app::CapsuleCollider__Class* get_class() {
            return il2cpp::get_class<app::CapsuleCollider__Class>(type_info, "UnityEngine", "CapsuleCollider");
        }
        inline app::CapsuleCollider* create() {
            return il2cpp::create_object<app::CapsuleCollider>(get_class());
        }
        inline app::CapsuleCollider__Array* create_array(int size) {
            return il2cpp::array_new<app::CapsuleCollider__Array>(get_class(), size);
        }
        inline app::CapsuleCollider__Array* create_array(const std::vector<app::CapsuleCollider*>& items) {
            return il2cpp::array_new<app::CapsuleCollider__Array>(get_class(), items);
        }
    } // namespace CapsuleCollider
} // namespace app::classes::types
