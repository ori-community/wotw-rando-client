#pragma once
#include <Modloader/app/structs/ActionNode_c.h>
#include <Modloader/app/structs/ActionNode_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActionNode_c {
        inline app::ActionNode_c__Class** type_info() {
            static app::ActionNode_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ActionNode_c__Class**)(modloader::win::memory::resolve_rva(0x04715980));
            }
            return cache;
        }
        inline app::ActionNode_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ActionNode_c__Class>(type_info(), "Moon.BehaviourSystem", "ActionNode", "<>c");
        }
        inline app::ActionNode_c* create() {
            return il2cpp::create_object<app::ActionNode_c>(get_class());
        }
    } // namespace ActionNode_c
} // namespace app::classes::types
