#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeafNode {
        inline app::LeafNode__Class** type_info = (app::LeafNode__Class**)(modloader::win::memory::resolve_rva(0x0477BFF0));
        inline app::LeafNode__Class* get_class() {
            return il2cpp::get_class<app::LeafNode__Class>(type_info, "System.Xml.Schema", "LeafNode");
        }
        inline app::LeafNode* create() {
            return il2cpp::create_object<app::LeafNode>(get_class());
        }
    } // namespace LeafNode
} // namespace app::classes::types
