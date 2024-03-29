#pragma once
#include <Modloader/app/structs/LeafRangeNode.h>
#include <Modloader/app/structs/LeafRangeNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeafRangeNode {
        inline app::LeafRangeNode__Class** type_info() {
            static app::LeafRangeNode__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeafRangeNode__Class**)(modloader::win::memory::resolve_rva(0x04791C80));
            }
            return cache;
        }
        inline app::LeafRangeNode__Class* get_class() {
            return il2cpp::get_class<app::LeafRangeNode__Class>(type_info(), "System.Xml.Schema", "LeafRangeNode");
        }
        inline app::LeafRangeNode* create() {
            return il2cpp::create_object<app::LeafRangeNode>(get_class());
        }
    } // namespace LeafRangeNode
} // namespace app::classes::types
