#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CageStructureTool_Vertex {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CageStructureTool_Vertex__Class** type_info;
        inline app::CageStructureTool_Vertex__Class* get_class() {
            return il2cpp::get_nested_class<app::CageStructureTool_Vertex__Class>(type_info, "", "CageStructureTool", "Vertex");
        }
        inline app::CageStructureTool_Vertex* create() {
            return il2cpp::create_object<app::CageStructureTool_Vertex>(get_class());
        }
        inline app::CageStructureTool_Vertex__Array* create_array(int size) {
            return il2cpp::array_new<app::CageStructureTool_Vertex__Array>(get_class(), size);
        }
    } // namespace CageStructureTool_Vertex
} // namespace app::classes::types
