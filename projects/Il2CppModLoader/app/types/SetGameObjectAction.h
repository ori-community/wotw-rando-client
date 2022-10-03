#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetGameObjectAction {
        namespace {
            app::SetGameObjectAction__Class* type_info_ref = nullptr;
        }
        app::SetGameObjectAction__Class** type_info = &type_info_ref;
        inline app::SetGameObjectAction__Class* get_class() {
            return il2cpp::get_class<app::SetGameObjectAction__Class>(type_info, "Moon.BehaviourSystem", "SetGameObjectAction");
        }
        inline app::SetGameObjectAction* create() {
            return il2cpp::create_object<app::SetGameObjectAction>(get_class());
        }
    } // namespace SetGameObjectAction
} // namespace app::classes::types
