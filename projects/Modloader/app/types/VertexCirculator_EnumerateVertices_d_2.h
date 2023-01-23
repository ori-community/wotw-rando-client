#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VertexCirculator_EnumerateVertices_d_2__Class.h>
#include <Modloader/app/structs/VertexCirculator_EnumerateVertices_d_2.h>

namespace app::classes::types {
    namespace VertexCirculator_EnumerateVertices_d_2 {
        inline app::VertexCirculator_EnumerateVertices_d_2__Class** type_info = (app::VertexCirculator_EnumerateVertices_d_2__Class**)(modloader::win::memory::resolve_rva(0x0471B888));
        inline app::VertexCirculator_EnumerateVertices_d_2__Class* get_class() {
            return il2cpp::get_nested_class<app::VertexCirculator_EnumerateVertices_d_2__Class>(type_info, "TriangleNet.Meshing.Iterators", "VertexCirculator", "<EnumerateVertices>d__2");
        }
        inline app::VertexCirculator_EnumerateVertices_d_2* create() {
            return il2cpp::create_object<app::VertexCirculator_EnumerateVertices_d_2>(get_class());
        }
    } // namespace VertexCirculator_EnumerateVertices_d_2
} // namespace app::classes::types
