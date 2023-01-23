#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Vertex_1__Array__Class.h>
#include <Modloader/app/structs/Vertex_1__Array.h>

namespace app::classes::types {
    namespace Vertex_1__Array {
        inline app::Vertex_1__Array__Class** type_info = (app::Vertex_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04714FE0));
        inline app::Vertex_1__Array__Class* get_class() {
            return il2cpp::get_class<app::Vertex_1__Array__Class>(type_info, "TriangleNet.Topology.DCEL", "Vertex[]");
        }
        inline app::Vertex_1__Array* create() {
            return il2cpp::create_object<app::Vertex_1__Array>(get_class());
        }
    } // namespace Vertex_1__Array
} // namespace app::classes::types
