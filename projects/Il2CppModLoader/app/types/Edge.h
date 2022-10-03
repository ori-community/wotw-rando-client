#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Edge {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Edge__Class** type_info;
        inline app::Edge__Class* get_class() {
            return il2cpp::get_class<app::Edge__Class>(type_info, "TriangleNet.Geometry", "Edge");
        }
        inline app::Edge* create() {
            return il2cpp::create_object<app::Edge>(get_class());
        }
        inline app::Edge__Array* create_array(int size) {
            return il2cpp::array_new<app::Edge__Array>(get_class(), size);
        }
    } // namespace Edge
} // namespace app::classes::types
