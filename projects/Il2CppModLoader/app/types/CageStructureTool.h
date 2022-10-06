#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CageStructureTool {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CageStructureTool__Class** type_info;
        inline app::CageStructureTool__Class* get_class() {
            return il2cpp::get_class<app::CageStructureTool__Class>(type_info, "", "CageStructureTool");
        }
        inline app::CageStructureTool* create() {
            return il2cpp::create_object<app::CageStructureTool>(get_class());
        }
        inline app::CageStructureTool__Array* create_array(int size) {
            return il2cpp::array_new<app::CageStructureTool__Array>(get_class(), size);
        }
        inline app::CageStructureTool__Array* create_array(const std::vector<app::CageStructureTool*>& items) {
            return il2cpp::array_new<app::CageStructureTool__Array>(get_class(), items);
        }
    } // namespace CageStructureTool
} // namespace app::classes::types
