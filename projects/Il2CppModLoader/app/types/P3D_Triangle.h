#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace P3D_Triangle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::P3D_Triangle__Class** type_info;
        inline app::P3D_Triangle__Class* get_class() {
            return il2cpp::get_class<app::P3D_Triangle__Class>(type_info, "", "P3D_Triangle");
        }
        inline app::P3D_Triangle* create() {
            return il2cpp::create_object<app::P3D_Triangle>(get_class());
        }
        inline app::P3D_Triangle__Array* create_array(int size) {
            return il2cpp::array_new<app::P3D_Triangle__Array>(get_class(), size);
        }
    } // namespace P3D_Triangle
} // namespace app::classes::types
