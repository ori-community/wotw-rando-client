#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Color32__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Color32__Array__Class** type_info;
        inline app::Color32__Array__Class* get_class() {
            return il2cpp::get_class<app::Color32__Array__Class>(type_info, "UnityEngine", "Color32[]");
        }
        inline app::Color32__Array* create() {
            return il2cpp::create_object<app::Color32__Array>(get_class());
        }
    } // namespace Color32__Array
} // namespace app::classes::types
