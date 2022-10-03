#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetBooleanAction {
        namespace {
            app::SetBooleanAction__Class* type_info_ref = nullptr;
        }
        app::SetBooleanAction__Class** type_info = &type_info_ref;
        inline app::SetBooleanAction__Class* get_class() {
            return il2cpp::get_class<app::SetBooleanAction__Class>(type_info, "Moon.BehaviourSystem", "SetBooleanAction");
        }
        inline app::SetBooleanAction* create() {
            return il2cpp::create_object<app::SetBooleanAction>(get_class());
        }
    } // namespace SetBooleanAction
} // namespace app::classes::types
