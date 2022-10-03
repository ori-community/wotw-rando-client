#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VertexSorter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VertexSorter__Class** type_info;
        inline app::VertexSorter__Class* get_class() {
            return il2cpp::get_class<app::VertexSorter__Class>(type_info, "TriangleNet.Tools", "VertexSorter");
        }
        inline app::VertexSorter* create() {
            return il2cpp::create_object<app::VertexSorter>(get_class());
        }
    } // namespace VertexSorter
} // namespace app::classes::types
