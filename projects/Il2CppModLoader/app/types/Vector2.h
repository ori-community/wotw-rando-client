#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Vector2 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Vector2__Class** type_info;
        inline app::Vector2__Class* get_class() {
            return il2cpp::get_class<app::Vector2__Class>(type_info, "UnityEngine", "Vector2");
        }
        inline app::Vector2* create() {
            return il2cpp::create_object<app::Vector2>(get_class());
        }
        inline app::Vector2__Boxed* box(app::Vector2 value) {
            return il2cpp::box_value<app::Vector2__Boxed>(get_class(), value);
        }
        inline app::Vector2__Array* create_array(int size) {
            return il2cpp::array_new<app::Vector2__Array>(get_class(), size);
        }
    } // namespace Vector2
} // namespace app::classes::types
