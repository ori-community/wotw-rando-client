#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CageStructureTool_Edge {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CageStructureTool_Edge__Class** type_info;
        inline app::CageStructureTool_Edge__Class* get_class() {
            return il2cpp::get_nested_class<app::CageStructureTool_Edge__Class>(type_info, "", "CageStructureTool", "Edge");
        }
        inline app::CageStructureTool_Edge* create() {
            return il2cpp::create_object<app::CageStructureTool_Edge>(get_class());
        }
        inline app::CageStructureTool_Edge__Array* create_array(int size) {
            return il2cpp::array_new<app::CageStructureTool_Edge__Array>(get_class(), size);
        }
    } // namespace CageStructureTool_Edge
} // namespace app::classes::types
