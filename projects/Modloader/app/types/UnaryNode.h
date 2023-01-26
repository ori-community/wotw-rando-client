#pragma once
#include <Modloader/app/structs/UnaryNode.h>
#include <Modloader/app/structs/UnaryNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnaryNode {
        inline app::UnaryNode__Class** type_info() {
            static app::UnaryNode__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnaryNode__Class**)(modloader::win::memory::resolve_rva(0x04705A30));
            }
            return cache;
        }
        inline app::UnaryNode__Class* get_class() {
            return il2cpp::get_class<app::UnaryNode__Class>(type_info(), "System.Data", "UnaryNode");
        }
        inline app::UnaryNode* create() {
            return il2cpp::create_object<app::UnaryNode>(get_class());
        }
    } // namespace UnaryNode
} // namespace app::classes::types
