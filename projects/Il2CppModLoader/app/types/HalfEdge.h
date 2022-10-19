#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HalfEdge {
        inline app::HalfEdge__Class** type_info = (app::HalfEdge__Class**)(modloader::win::memory::resolve_rva(0x0470BAF0));
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
