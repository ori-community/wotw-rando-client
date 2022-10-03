#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SphereCollider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SphereCollider__Class** type_info;
        inline app::SphereCollider__Class* get_class() {
            return il2cpp::get_class<app::SphereCollider__Class>(type_info, "UnityEngine", "SphereCollider");
        }
        inline app::SphereCollider* create() {
            return il2cpp::create_object<app::SphereCollider>(get_class());
        }
        inline app::SphereCollider__Array* create_array(int size) {
            return il2cpp::array_new<app::SphereCollider__Array>(get_class(), size);
        }
    } // namespace SphereCollider
} // namespace app::classes::types
