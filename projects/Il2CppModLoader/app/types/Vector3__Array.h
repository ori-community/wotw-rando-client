#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Vector3__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Vector3__Array__Class** type_info;
        inline app::Vector3__Array__Class* get_class() {
            return il2cpp::get_class<app::Vector3__Array__Class>(type_info, "UnityEngine", "Vector3[]");
        }
        inline app::Vector3__Array* create() {
            return il2cpp::create_object<app::Vector3__Array>(get_class());
        }
        inline app::Vector3__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::Vector3__Array__Array>(get_class(), size);
        }
    } // namespace Vector3__Array
} // namespace app::classes::types
