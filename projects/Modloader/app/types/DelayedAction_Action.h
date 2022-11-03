#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DelayedAction_Action {
        inline app::DelayedAction_Action__Class** type_info = (app::DelayedAction_Action__Class**)(modloader::win::memory::resolve_rva(0x047994F0));
        inline app::DelayedAction_Action__Class* get_class() {
            return il2cpp::get_nested_class<app::DelayedAction_Action__Class>(type_info, "", "DelayedAction", "Action");
        }
        inline app::DelayedAction_Action* create() {
            return il2cpp::create_object<app::DelayedAction_Action>(get_class());
        }
    } // namespace DelayedAction_Action
} // namespace app::classes::types
