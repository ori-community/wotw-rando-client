#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HalfEdge__Array {
        namespace {
            app::HalfEdge__Array__Class* type_info_ref = nullptr;
        }
        app::HalfEdge__Array__Class** type_info = &type_info_ref;
        inline app::HalfEdge__Array__Class* get_class() {
            return il2cpp::get_class<app::HalfEdge__Array__Class>(type_info, "TriangleNet.Topology.DCEL", "HalfEdge[]");
        }
        inline app::HalfEdge__Array* create() {
            return il2cpp::create_object<app::HalfEdge__Array>(get_class());
        }
    } // namespace HalfEdge__Array
} // namespace app::classes::types
