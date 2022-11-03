#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IEdge__Array {
        namespace {
            inline app::IEdge__Array__Class* type_info_ref = nullptr;
        }
        inline app::IEdge__Array__Class** type_info = &type_info_ref;
        inline app::IEdge__Array__Class* get_class() {
            return il2cpp::get_class<app::IEdge__Array__Class>(type_info, "TriangleNet.Geometry", "IEdge[]");
        }
        inline app::IEdge__Array* create() {
            return il2cpp::create_object<app::IEdge__Array>(get_class());
        }
    } // namespace IEdge__Array
} // namespace app::classes::types
