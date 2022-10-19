#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace P3D_Triangle {
        inline app::P3D_Triangle__Class** type_info = (app::P3D_Triangle__Class**)(modloader::win::memory::resolve_rva(0x0472A720));
        inline app::P3D_Triangle__Class* get_class() {
            return il2cpp::get_class<app::P3D_Triangle__Class>(type_info, "", "P3D_Triangle");
        }
        inline app::P3D_Triangle* create() {
            return il2cpp::create_object<app::P3D_Triangle>(get_class());
        }
        inline app::P3D_Triangle__Array* create_array(int size) {
            return il2cpp::array_new<app::P3D_Triangle__Array>(get_class(), size);
        }
        inline app::P3D_Triangle__Array* create_array(const std::vector<app::P3D_Triangle*>& items) {
            return il2cpp::array_new<app::P3D_Triangle__Array>(get_class(), items);
        }
    } // namespace P3D_Triangle
} // namespace app::classes::types
