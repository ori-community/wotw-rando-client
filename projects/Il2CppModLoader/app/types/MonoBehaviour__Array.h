#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoBehaviour__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MonoBehaviour__Array__Class** type_info;
        inline app::MonoBehaviour__Array__Class* get_class() {
            return il2cpp::get_class<app::MonoBehaviour__Array__Class>(type_info, "UnityEngine", "MonoBehaviour[]");
        }
        inline app::MonoBehaviour__Array* create() {
            return il2cpp::create_object<app::MonoBehaviour__Array>(get_class());
        }
    } // namespace MonoBehaviour__Array
} // namespace app::classes::types
