#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeafRangeNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeafRangeNode__Class** type_info;
        inline app::LeafRangeNode__Class* get_class() {
            return il2cpp::get_class<app::LeafRangeNode__Class>(type_info, "System.Xml.Schema", "LeafRangeNode");
        }
        inline app::LeafRangeNode* create() {
            return il2cpp::create_object<app::LeafRangeNode>(get_class());
        }
    } // namespace LeafRangeNode
} // namespace app::classes::types
