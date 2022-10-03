#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Transform__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Transform__Array__Class** type_info;
        inline app::Transform__Array__Class* get_class() {
            return il2cpp::get_class<app::Transform__Array__Class>(type_info, "UnityEngine", "Transform[]");
        }
        inline app::Transform__Array* create() {
            return il2cpp::create_object<app::Transform__Array>(get_class());
        }
    } // namespace Transform__Array
} // namespace app::classes::types
