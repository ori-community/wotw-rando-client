#pragma once
#include <Modloader/app/structs/VertexCirculator_EnumerateTriangles_d_3.h>
#include <Modloader/app/structs/VertexCirculator_EnumerateTriangles_d_3__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VertexCirculator_EnumerateTriangles_d_3 {
        inline app::VertexCirculator_EnumerateTriangles_d_3__Class** type_info() {
            static app::VertexCirculator_EnumerateTriangles_d_3__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VertexCirculator_EnumerateTriangles_d_3__Class**)(modloader::win::memory::resolve_rva(0x04792CC0));
            }
            return cache;
        }
        inline app::VertexCirculator_EnumerateTriangles_d_3__Class* get_class() {
            return il2cpp::get_nested_class<app::VertexCirculator_EnumerateTriangles_d_3__Class>(type_info(), "TriangleNet.Meshing.Iterators", "VertexCirculator", "<EnumerateTriangles>d__3");
        }
        inline app::VertexCirculator_EnumerateTriangles_d_3* create() {
            return il2cpp::create_object<app::VertexCirculator_EnumerateTriangles_d_3>(get_class());
        }
    } // namespace VertexCirculator_EnumerateTriangles_d_3
} // namespace app::classes::types
