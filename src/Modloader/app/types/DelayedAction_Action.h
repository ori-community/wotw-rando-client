#pragma once
#include <Modloader/app/structs/DelayedAction_Action.h>
#include <Modloader/app/structs/DelayedAction_Action__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DelayedAction_Action {
        inline app::DelayedAction_Action__Class** type_info() {
            static app::DelayedAction_Action__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DelayedAction_Action__Class**)(modloader::win::memory::resolve_rva(0x047994F0));
            }
            return cache;
        }
        inline app::DelayedAction_Action__Class* get_class() {
            return il2cpp::get_nested_class<app::DelayedAction_Action__Class>(type_info(), "", "DelayedAction", "Action");
        }
        inline app::DelayedAction_Action* create() {
            return il2cpp::create_object<app::DelayedAction_Action>(get_class());
        }
    } // namespace DelayedAction_Action
} // namespace app::classes::types
