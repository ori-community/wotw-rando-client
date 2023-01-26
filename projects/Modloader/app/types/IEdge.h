#pragma once
#include <Modloader/app/structs/IEdge.h>
#include <Modloader/app/structs/IEdge__Array.h>
#include <Modloader/app/structs/IEdge__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IEdge {
        inline app::IEdge__Class** type_info() {
            static app::IEdge__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IEdge__Class**)(modloader::win::memory::resolve_rva(0x0477B708));
            }
            return cache;
        }
        inline app::IEdge__Class* get_class() {
            return il2cpp::get_class<app::IEdge__Class>(type_info(), "TriangleNet.Geometry", "IEdge");
        }
        inline app::IEdge__Array* create_array(int size) {
            return il2cpp::array_new<app::IEdge__Array>(get_class(), size);
        }
        inline app::IEdge__Array* create_array(const std::vector<app::IEdge*>& items) {
            return il2cpp::array_new<app::IEdge__Array>(get_class(), items);
        }
    } // namespace IEdge
} // namespace app::classes::types
