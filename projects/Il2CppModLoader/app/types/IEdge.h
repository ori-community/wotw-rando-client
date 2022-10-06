#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IEdge {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IEdge__Class** type_info;
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
