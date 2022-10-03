#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Material__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Material__Array__Class** type_info;
        inline app::Material__Array__Class* get_class() {
            return il2cpp::get_class<app::Material__Array__Class>(type_info, "UnityEngine", "Material[]");
        }
        inline app::Material__Array* create() {
            return il2cpp::create_object<app::Material__Array>(get_class());
        }
        inline app::Material__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::Material__Array__Array>(get_class(), size);
        }
    } // namespace Material__Array
} // namespace app::classes::types
