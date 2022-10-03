#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Ray__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Ray__Array__Class** type_info;
        inline app::Ray__Array__Class* get_class() {
            return il2cpp::get_class<app::Ray__Array__Class>(type_info, "UnityEngine", "Ray[]");
        }
        inline app::Ray__Array* create() {
            return il2cpp::create_object<app::Ray__Array>(get_class());
        }
    } // namespace Ray__Array
} // namespace app::classes::types
