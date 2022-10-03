#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CageStructureTool_Face {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CageStructureTool_Face__Class** type_info;
        inline app::CageStructureTool_Face__Class* get_class() {
            return il2cpp::get_nested_class<app::CageStructureTool_Face__Class>(type_info, "", "CageStructureTool", "Face");
        }
        inline app::CageStructureTool_Face* create() {
            return il2cpp::create_object<app::CageStructureTool_Face>(get_class());
        }
        inline app::CageStructureTool_Face__Array* create_array(int size) {
            return il2cpp::array_new<app::CageStructureTool_Face__Array>(get_class(), size);
        }
    } // namespace CageStructureTool_Face
} // namespace app::classes::types
