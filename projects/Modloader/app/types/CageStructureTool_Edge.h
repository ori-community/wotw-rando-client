#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CageStructureTool_Edge {
        inline app::CageStructureTool_Edge__Class** type_info = (app::CageStructureTool_Edge__Class**)(modloader::win::memory::resolve_rva(0x0478A960));
        inline app::CageStructureTool_Edge__Class* get_class() {
            return il2cpp::get_nested_class<app::CageStructureTool_Edge__Class>(type_info, "", "CageStructureTool", "Edge");
        }
        inline app::CageStructureTool_Edge* create() {
            return il2cpp::create_object<app::CageStructureTool_Edge>(get_class());
        }
        inline app::CageStructureTool_Edge__Array* create_array(int size) {
            return il2cpp::array_new<app::CageStructureTool_Edge__Array>(get_class(), size);
        }
        inline app::CageStructureTool_Edge__Array* create_array(const std::vector<app::CageStructureTool_Edge*>& items) {
            return il2cpp::array_new<app::CageStructureTool_Edge__Array>(get_class(), items);
        }
    } // namespace CageStructureTool_Edge
} // namespace app::classes::types
