#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaitForConditionAction {
        namespace {
            app::WaitForConditionAction__Class* type_info_ref = nullptr;
        }
        app::WaitForConditionAction__Class** type_info = &type_info_ref;
        inline app::WaitForConditionAction__Class* get_class() {
            return il2cpp::get_class<app::WaitForConditionAction__Class>(type_info, "", "WaitForConditionAction");
        }
        inline app::WaitForConditionAction* create() {
            return il2cpp::create_object<app::WaitForConditionAction>(get_class());
        }
    } // namespace WaitForConditionAction
} // namespace app::classes::types
