#pragma once
#include <Modloader/app/structs/IEdge__Array.h>
#include <Modloader/app/structs/IEdge__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IEdge__Array {
        inline app::IEdge__Array__Class** type_info() {
            static app::IEdge__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IEdge__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IEdge__Array__Class* get_class() {
            return il2cpp::get_class<app::IEdge__Array__Class>(type_info(), "TriangleNet.Geometry", "IEdge[]");
        }
        inline app::IEdge__Array* create() {
            return il2cpp::create_object<app::IEdge__Array>(get_class());
        }
    } // namespace IEdge__Array
} // namespace app::classes::types
