#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CageStructureTool_Face {
        inline app::CageStructureTool_Face__Class** type_info = (app::CageStructureTool_Face__Class**)(modloader::win::memory::resolve_rva(0x04790CC8));
        inline app::CageStructureTool_Face__Class* get_class() {
            return il2cpp::get_nested_class<app::CageStructureTool_Face__Class>(type_info, "", "CageStructureTool", "Face");
        }
        inline app::CageStructureTool_Face* create() {
            return il2cpp::create_object<app::CageStructureTool_Face>(get_class());
        }
        inline app::CageStructureTool_Face__Array* create_array(int size) {
            return il2cpp::array_new<app::CageStructureTool_Face__Array>(get_class(), size);
        }
        inline app::CageStructureTool_Face__Array* create_array(const std::vector<app::CageStructureTool_Face*>& items) {
            return il2cpp::array_new<app::CageStructureTool_Face__Array>(get_class(), items);
        }
    } // namespace CageStructureTool_Face
} // namespace app::classes::types
