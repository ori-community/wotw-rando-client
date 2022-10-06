#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Vector2__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Vector2__Array__Class** type_info;
        inline app::Vector2__Array__Class* get_class() {
            return il2cpp::get_class<app::Vector2__Array__Class>(type_info, "UnityEngine", "Vector2[]");
        }
        inline app::Vector2__Array* create() {
            return il2cpp::create_object<app::Vector2__Array>(get_class());
        }
        inline app::Vector2__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::Vector2__Array__Array>(get_class(), size);
        }
        inline app::Vector2__Array__Array* create_array(const std::vector<app::Vector2__Array*>& items) {
            return il2cpp::array_new<app::Vector2__Array__Array>(get_class(), items);
        }
    } // namespace Vector2__Array
} // namespace app::classes::types
