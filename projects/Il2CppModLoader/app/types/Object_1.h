#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Object_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Object_1__Class** type_info;
        inline app::Object_1__Class* get_class() {
            return il2cpp::get_class<app::Object_1__Class>(type_info, "UnityEngine", "Object");
        }
        inline app::Object_1* create() {
            return il2cpp::create_object<app::Object_1>(get_class());
        }
        inline app::Object_1__Array* create_array(int size) {
            return il2cpp::array_new<app::Object_1__Array>(get_class(), size);
        }
    } // namespace Object_1
} // namespace app::classes::types
