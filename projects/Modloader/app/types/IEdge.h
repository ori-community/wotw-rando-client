#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IEdge {
        inline app::IEdge__Class** type_info = (app::IEdge__Class**)(modloader::win::memory::resolve_rva(0x0477B708));
        inline app::IEdge__Class* get_class() {
            return il2cpp::get_class<app::IEdge__Class>(type_info, "TriangleNet.Geometry", "IEdge");
        }
        inline app::IEdge__Array* create_array(int size) {
            return il2cpp::array_new<app::IEdge__Array>(get_class(), size);
        }
        inline app::IEdge__Array* create_array(const std::vector<app::IEdge*>& items) {
            return il2cpp::array_new<app::IEdge__Array>(get_class(), items);
        }
    } // namespace IEdge
} // namespace app::classes::types
