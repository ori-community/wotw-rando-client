#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VertexCirculator_EnumerateVertices_d_2 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VertexCirculator_EnumerateVertices_d_2__Class** type_info;
        inline app::VertexCirculator_EnumerateVertices_d_2__Class* get_class() {
            return il2cpp::get_nested_class<app::VertexCirculator_EnumerateVertices_d_2__Class>(type_info, "TriangleNet.Meshing.Iterators", "VertexCirculator", "<EnumerateVertices>d__2");
        }
        inline app::VertexCirculator_EnumerateVertices_d_2* create() {
            return il2cpp::create_object<app::VertexCirculator_EnumerateVertices_d_2>(get_class());
        }
    } // namespace VertexCirculator_EnumerateVertices_d_2
} // namespace app::classes::types
