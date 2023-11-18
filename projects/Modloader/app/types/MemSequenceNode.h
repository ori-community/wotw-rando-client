#pragma once
#include <Modloader/app/structs/MemSequenceNode.h>
#include <Modloader/app/structs/MemSequenceNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemSequenceNode {
        inline app::MemSequenceNode__Class** type_info() {
            static app::MemSequenceNode__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MemSequenceNode__Class**)(modloader::win::memory::resolve_rva(0x047374F8));
            }
            return cache;
        }
        inline app::MemSequenceNode__Class* get_class() {
            return il2cpp::get_class<app::MemSequenceNode__Class>(type_info(), "UberBehaviourTree", "MemSequenceNode");
        }
        inline app::MemSequenceNode* create() {
            return il2cpp::create_object<app::MemSequenceNode>(get_class());
        }
    } // namespace MemSequenceNode
} // namespace app::classes::types
