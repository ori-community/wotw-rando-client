#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Face_EnumerateEdges_d_18 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Face_EnumerateEdges_d_18__Class** type_info;
        inline app::Face_EnumerateEdges_d_18__Class* get_class() {
            return il2cpp::get_nested_class<app::Face_EnumerateEdges_d_18__Class>(type_info, "TriangleNet.Topology.DCEL", "Face", "<EnumerateEdges>d__18");
        }
        inline app::Face_EnumerateEdges_d_18* create() {
            return il2cpp::create_object<app::Face_EnumerateEdges_d_18>(get_class());
        }
    } // namespace Face_EnumerateEdges_d_18
} // namespace app::classes::types
