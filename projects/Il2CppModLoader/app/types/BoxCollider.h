#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BoxCollider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BoxCollider__Class** type_info;
        inline app::BoxCollider__Class* get_class() {
            return il2cpp::get_class<app::BoxCollider__Class>(type_info, "UnityEngine", "BoxCollider");
        }
        inline app::BoxCollider* create() {
            return il2cpp::create_object<app::BoxCollider>(get_class());
        }
        inline app::BoxCollider__Array* create_array(int size) {
            return il2cpp::array_new<app::BoxCollider__Array>(get_class(), size);
        }
        inline app::BoxCollider__Array* create_array(const std::vector<app::BoxCollider*>& items) {
            return il2cpp::array_new<app::BoxCollider__Array>(get_class(), items);
        }
    } // namespace BoxCollider
} // namespace app::classes::types
