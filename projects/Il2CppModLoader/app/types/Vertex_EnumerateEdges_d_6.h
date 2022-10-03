#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Vertex_EnumerateEdges_d_6 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Vertex_EnumerateEdges_d_6__Class** type_info;
        inline app::Vertex_EnumerateEdges_d_6__Class* get_class() {
            return il2cpp::get_nested_class<app::Vertex_EnumerateEdges_d_6__Class>(type_info, "TriangleNet.Topology.DCEL", "Vertex", "<EnumerateEdges>d__6");
        }
        inline app::Vertex_EnumerateEdges_d_6* create() {
            return il2cpp::create_object<app::Vertex_EnumerateEdges_d_6>(get_class());
        }
    } // namespace Vertex_EnumerateEdges_d_6
} // namespace app::classes::types
