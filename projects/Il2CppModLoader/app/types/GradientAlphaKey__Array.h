#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GradientAlphaKey__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GradientAlphaKey__Array__Class** type_info;
        inline app::GradientAlphaKey__Array__Class* get_class() {
            return il2cpp::get_class<app::GradientAlphaKey__Array__Class>(type_info, "UnityEngine", "GradientAlphaKey[]");
        }
        inline app::GradientAlphaKey__Array* create() {
            return il2cpp::create_object<app::GradientAlphaKey__Array>(get_class());
        }
    } // namespace GradientAlphaKey__Array
} // namespace app::classes::types
