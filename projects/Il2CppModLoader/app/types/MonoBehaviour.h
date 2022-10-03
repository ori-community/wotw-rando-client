#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MonoBehaviour__Class** type_info;
        inline app::MonoBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MonoBehaviour__Class>(type_info, "UnityEngine", "MonoBehaviour");
        }
        inline app::MonoBehaviour* create() {
            return il2cpp::create_object<app::MonoBehaviour>(get_class());
        }
        inline app::MonoBehaviour__Array* create_array(int size) {
            return il2cpp::array_new<app::MonoBehaviour__Array>(get_class(), size);
        }
    } // namespace MonoBehaviour
} // namespace app::classes::types
