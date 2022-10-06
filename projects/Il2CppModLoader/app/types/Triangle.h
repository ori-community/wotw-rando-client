#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Triangle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Triangle__Class** type_info;
        inline app::Triangle__Class* get_class() {
            return il2cpp::get_class<app::Triangle__Class>(type_info, "TriangleNet.Topology", "Triangle");
        }
        inline app::Triangle* create() {
            return il2cpp::create_object<app::Triangle>(get_class());
        }
        inline app::Triangle__Array* create_array(int size) {
            return il2cpp::array_new<app::Triangle__Array>(get_class(), size);
        }
        inline app::Triangle__Array* create_array(const std::vector<app::Triangle*>& items) {
            return il2cpp::array_new<app::Triangle__Array>(get_class(), items);
        }
    } // namespace Triangle
} // namespace app::classes::types
