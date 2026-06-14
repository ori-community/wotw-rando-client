#pragma once
#include <Modloader/app/structs/Vertex_1__Array.h>
#include <Modloader/app/structs/Vertex_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Vertex_1__Array {
        inline app::Vertex_1__Array__Class** type_info() {
            static app::Vertex_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Vertex_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04714FE0));
            }
            return cache;
        }
        inline app::Vertex_1__Array__Class* get_class() {
            return il2cpp::get_class<app::Vertex_1__Array__Class>(type_info(), "TriangleNet.Topology.DCEL", "Vertex[]");
        }
        inline app::Vertex_1__Array* create() {
            return il2cpp::create_object<app::Vertex_1__Array>(get_class());
        }
    } // namespace Vertex_1__Array
} // namespace app::classes::types
