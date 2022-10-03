#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameObject {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameObject__Class** type_info;
        inline app::GameObject__Class* get_class() {
            return il2cpp::get_class<app::GameObject__Class>(type_info, "UnityEngine", "GameObject");
        }
        inline app::GameObject* create() {
            return il2cpp::create_object<app::GameObject>(get_class());
        }
        inline app::GameObject__Array* create_array(int size) {
            return il2cpp::array_new<app::GameObject__Array>(get_class(), size);
        }
    } // namespace GameObject
} // namespace app::classes::types
