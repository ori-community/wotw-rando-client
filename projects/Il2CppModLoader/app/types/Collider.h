#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Collider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Collider__Class** type_info;
        inline app::Collider__Class* get_class() {
            return il2cpp::get_class<app::Collider__Class>(type_info, "UnityEngine", "Collider");
        }
        inline app::Collider* create() {
            return il2cpp::create_object<app::Collider>(get_class());
        }
        inline app::Collider__Array* create_array(int size) {
            return il2cpp::array_new<app::Collider__Array>(get_class(), size);
        }
    } // namespace Collider
} // namespace app::classes::types
