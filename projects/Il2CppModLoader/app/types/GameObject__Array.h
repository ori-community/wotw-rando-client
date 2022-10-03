#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameObject__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameObject__Array__Class** type_info;
        inline app::GameObject__Array__Class* get_class() {
            return il2cpp::get_class<app::GameObject__Array__Class>(type_info, "UnityEngine", "GameObject[]");
        }
        inline app::GameObject__Array* create() {
            return il2cpp::create_object<app::GameObject__Array>(get_class());
        }
    } // namespace GameObject__Array
} // namespace app::classes::types
