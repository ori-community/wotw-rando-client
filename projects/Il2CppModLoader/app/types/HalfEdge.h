#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HalfEdge {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HalfEdge__Class** type_info;
        inline app::HalfEdge__Class* get_class() {
            return il2cpp::get_class<app::HalfEdge__Class>(type_info, "TriangleNet.Topology.DCEL", "HalfEdge");
        }
        inline app::HalfEdge* create() {
            return il2cpp::create_object<app::HalfEdge>(get_class());
        }
        inline app::HalfEdge__Array* create_array(int size) {
            return il2cpp::array_new<app::HalfEdge__Array>(get_class(), size);
        }
        inline app::HalfEdge__Array* create_array(const std::vector<app::HalfEdge*>& items) {
            return il2cpp::array_new<app::HalfEdge__Array>(get_class(), items);
        }
    } // namespace HalfEdge
} // namespace app::classes::types
