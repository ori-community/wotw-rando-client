#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RequireComponent__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RequireComponent__Array__Class** type_info;
        inline app::RequireComponent__Array__Class* get_class() {
            return il2cpp::get_class<app::RequireComponent__Array__Class>(type_info, "UnityEngine", "RequireComponent[]");
        }
        inline app::RequireComponent__Array* create() {
            return il2cpp::create_object<app::RequireComponent__Array>(get_class());
        }
    } // namespace RequireComponent__Array
} // namespace app::classes::types
