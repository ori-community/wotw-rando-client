#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Vertex__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Vertex__Array__Class** type_info;
        inline app::Vertex__Array__Class* get_class() {
            return il2cpp::get_class<app::Vertex__Array__Class>(type_info, "TriangleNet.Geometry", "Vertex[]");
        }
        inline app::Vertex__Array* create() {
            return il2cpp::create_object<app::Vertex__Array>(get_class());
        }
    } // namespace Vertex__Array
} // namespace app::classes::types
