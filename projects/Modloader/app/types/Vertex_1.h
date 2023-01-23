#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Vertex_1__Class.h>
#include <Modloader/app/structs/Vertex_1.h>
#include <Modloader/app/structs/Vertex_1__Array.h>

namespace app::classes::types {
    namespace Vertex_1 {
        inline app::Vertex_1__Class** type_info = (app::Vertex_1__Class**)(modloader::win::memory::resolve_rva(0x04796FC8));
        inline app::Vertex_1__Class* get_class() {
            return il2cpp::get_class<app::Vertex_1__Class>(type_info, "TriangleNet.Topology.DCEL", "Vertex");
        }
        inline app::Vertex_1* create() {
            return il2cpp::create_object<app::Vertex_1>(get_class());
        }
        inline app::Vertex_1__Array* create_array(int size) {
            return il2cpp::array_new<app::Vertex_1__Array>(get_class(), size);
        }
        inline app::Vertex_1__Array* create_array(const std::vector<app::Vertex_1*>& items) {
            return il2cpp::array_new<app::Vertex_1__Array>(get_class(), items);
        }
    } // namespace Vertex_1
} // namespace app::classes::types
