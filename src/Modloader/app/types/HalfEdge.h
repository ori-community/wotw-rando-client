#pragma once
#include <Modloader/app/structs/HalfEdge.h>
#include <Modloader/app/structs/HalfEdge__Array.h>
#include <Modloader/app/structs/HalfEdge__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HalfEdge {
        inline app::HalfEdge__Class** type_info() {
            static app::HalfEdge__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HalfEdge__Class**)(modloader::win::memory::resolve_rva(0x0470BAF0));
            }
            return cache;
        }
        inline app::HalfEdge__Class* get_class() {
            return il2cpp::get_class<app::HalfEdge__Class>(type_info(), "TriangleNet.Topology.DCEL", "HalfEdge");
        }
        inline app::HalfEdge* create() {
            return il2cpp::create_object<app::HalfEdge>(get_class());
        }
        inline app::HalfEdge__Array* create_array(int size) {
            return il2cpp::array_new<app::HalfEdge__Array>(get_class(), size);
        }
        inline app::HalfEdge__Array* create_array(const std::vector<app::HalfEdge*>& items) {
            return il2cpp::array_new<app::HalfEdge__Array>(get_class(), items);
        }
    } // namespace HalfEdge
} // namespace app::classes::types
