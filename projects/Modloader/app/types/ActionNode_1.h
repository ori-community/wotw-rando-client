#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActionNode_1 {
        inline app::ActionNode_1__Class** type_info = (app::ActionNode_1__Class**)(modloader::win::memory::resolve_rva(0x0478C740));
        inline app::ActionNode_1__Class* get_class() {
            return il2cpp::get_class<app::ActionNode_1__Class>(type_info, "UberBehaviourTree", "ActionNode");
        }
        inline app::ActionNode_1* create() {
            return il2cpp::create_object<app::ActionNode_1>(get_class());
        }
    } // namespace ActionNode_1
} // namespace app::classes::types
