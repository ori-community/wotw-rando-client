#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetIntAction {
        namespace {
            app::SetIntAction__Class* type_info_ref = nullptr;
        }
        app::SetIntAction__Class** type_info = &type_info_ref;
        inline app::SetIntAction__Class* get_class() {
            return il2cpp::get_class<app::SetIntAction__Class>(type_info, "Moon.BehaviourSystem", "SetIntAction");
        }
        inline app::SetIntAction* create() {
            return il2cpp::create_object<app::SetIntAction>(get_class());
        }
    } // namespace SetIntAction
} // namespace app::classes::types
