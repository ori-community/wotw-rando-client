#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Display {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Display__Class** type_info;
        inline app::Display__Class* get_class() {
            return il2cpp::get_class<app::Display__Class>(type_info, "UnityEngine", "Display");
        }
        inline app::Display* create() {
            return il2cpp::create_object<app::Display>(get_class());
        }
        inline app::Display__Array* create_array(int size) {
            return il2cpp::array_new<app::Display__Array>(get_class(), size);
        }
    } // namespace Display
} // namespace app::classes::types
