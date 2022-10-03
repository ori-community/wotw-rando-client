#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Color__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Color__Array__Class** type_info;
        inline app::Color__Array__Class* get_class() {
            return il2cpp::get_class<app::Color__Array__Class>(type_info, "UnityEngine", "Color[]");
        }
        inline app::Color__Array* create() {
            return il2cpp::create_object<app::Color__Array>(get_class());
        }
    } // namespace Color__Array
} // namespace app::classes::types
