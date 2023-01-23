#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StateNode__Class.h>
#include <Modloader/app/structs/StateNode.h>

namespace app::classes::types {
    namespace StateNode {
        inline app::StateNode__Class** type_info = (app::StateNode__Class**)(modloader::win::memory::resolve_rva(0x04784D20));
        inline app::StateNode__Class* get_class() {
            return il2cpp::get_class<app::StateNode__Class>(type_info, "UberBehaviourTree", "StateNode");
        }
        inline app::StateNode* create() {
            return il2cpp::create_object<app::StateNode>(get_class());
        }
    } // namespace StateNode
} // namespace app::classes::types
