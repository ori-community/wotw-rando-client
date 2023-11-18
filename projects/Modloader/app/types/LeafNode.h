#pragma once
#include <Modloader/app/structs/LeafNode.h>
#include <Modloader/app/structs/LeafNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeafNode {
        inline app::LeafNode__Class** type_info() {
            static app::LeafNode__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeafNode__Class**)(modloader::win::memory::resolve_rva(0x0477BFF0));
            }
            return cache;
        }
        inline app::LeafNode__Class* get_class() {
            return il2cpp::get_class<app::LeafNode__Class>(type_info(), "System.Xml.Schema", "LeafNode");
        }
        inline app::LeafNode* create() {
            return il2cpp::create_object<app::LeafNode>(get_class());
        }
    } // namespace LeafNode
} // namespace app::classes::types
