#pragma once
#include <Modloader/app/structs/P3D_Triangle.h>
#include <Modloader/app/structs/P3D_Triangle__Array.h>
#include <Modloader/app/structs/P3D_Triangle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace P3D_Triangle {
        inline app::P3D_Triangle__Class** type_info() {
            static app::P3D_Triangle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::P3D_Triangle__Class**)(modloader::win::memory::resolve_rva(0x0472A720));
            }
            return cache;
        }
        inline app::P3D_Triangle__Class* get_class() {
            return il2cpp::get_class<app::P3D_Triangle__Class>(type_info(), "", "P3D_Triangle");
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
