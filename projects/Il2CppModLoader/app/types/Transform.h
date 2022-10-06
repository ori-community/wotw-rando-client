#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Transform {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Transform__Class** type_info;
        inline app::Transform__Class* get_class() {
            return il2cpp::get_class<app::Transform__Class>(type_info, "UnityEngine", "Transform");
        }
        inline app::Transform* create() {
            return il2cpp::create_object<app::Transform>(get_class());
        }
        inline app::Transform__Array* create_array(int size) {
            return il2cpp::array_new<app::Transform__Array>(get_class(), size);
        }
        inline app::Transform__Array* create_array(const std::vector<app::Transform*>& items) {
            return il2cpp::array_new<app::Transform__Array>(get_class(), items);
        }
    } // namespace Transform
} // namespace app::classes::types
