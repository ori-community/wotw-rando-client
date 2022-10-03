#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GradientColorKey__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GradientColorKey__Array__Class** type_info;
        inline app::GradientColorKey__Array__Class* get_class() {
            return il2cpp::get_class<app::GradientColorKey__Array__Class>(type_info, "UnityEngine", "GradientColorKey[]");
        }
        inline app::GradientColorKey__Array* create() {
            return il2cpp::create_object<app::GradientColorKey__Array>(get_class());
        }
    } // namespace GradientColorKey__Array
} // namespace app::classes::types
