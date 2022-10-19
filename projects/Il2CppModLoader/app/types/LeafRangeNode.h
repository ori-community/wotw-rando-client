#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeafRangeNode {
        inline app::LeafRangeNode__Class** type_info = (app::LeafRangeNode__Class**)(modloader::win::memory::resolve_rva(0x04791C80));
        inline app::LeafRangeNode__Class* get_class() {
            return il2cpp::get_class<app::LeafRangeNode__Class>(type_info, "System.Xml.Schema", "LeafRangeNode");
        }
        inline app::LeafRangeNode* create() {
            return il2cpp::create_object<app::LeafRangeNode>(get_class());
        }
    } // namespace LeafRangeNode
} // namespace app::classes::types
