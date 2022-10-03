#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Vector2__Array__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Vector2__Array__Array__Class** type_info;
        inline app::Vector2__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::Vector2__Array__Array__Class>(type_info, "UnityEngine", "Vector2[][]");
        }
        inline app::Vector2__Array__Array* create() {
            return il2cpp::create_object<app::Vector2__Array__Array>(get_class());
        }
    } // namespace Vector2__Array__Array
} // namespace app::classes::types
