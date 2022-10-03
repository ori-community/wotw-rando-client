#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DelayedAction_Action {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DelayedAction_Action__Class** type_info;
        inline app::DelayedAction_Action__Class* get_class() {
            return il2cpp::get_nested_class<app::DelayedAction_Action__Class>(type_info, "", "DelayedAction", "Action");
        }
        inline app::DelayedAction_Action* create() {
            return il2cpp::create_object<app::DelayedAction_Action>(get_class());
        }
    } // namespace DelayedAction_Action
} // namespace app::classes::types
