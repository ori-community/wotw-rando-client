#pragma once
#include <Modloader/app/structs/HalfEdge__Array.h>
#include <Modloader/app/structs/HalfEdge__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HalfEdge__Array {
        inline app::HalfEdge__Array__Class** type_info() {
            static app::HalfEdge__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HalfEdge__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HalfEdge__Array__Class* get_class() {
            return il2cpp::get_class<app::HalfEdge__Array__Class>(type_info(), "TriangleNet.Topology.DCEL", "HalfEdge[]");
        }
        inline app::HalfEdge__Array* create() {
            return il2cpp::create_object<app::HalfEdge__Array>(get_class());
        }
    } // namespace HalfEdge__Array
} // namespace app::classes::types
