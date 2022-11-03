#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemSequenceNode {
        inline app::MemSequenceNode__Class** type_info = (app::MemSequenceNode__Class**)(modloader::win::memory::resolve_rva(0x047374F8));
        inline app::MemSequenceNode__Class* get_class() {
            return il2cpp::get_class<app::MemSequenceNode__Class>(type_info, "UberBehaviourTree", "MemSequenceNode");
        }
        inline app::MemSequenceNode* create() {
            return il2cpp::create_object<app::MemSequenceNode>(get_class());
        }
    } // namespace MemSequenceNode
} // namespace app::classes::types
