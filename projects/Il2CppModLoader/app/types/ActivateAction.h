#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivateAction {
        namespace {
            app::ActivateAction__Class* type_info_ref = nullptr;
        }
        app::ActivateAction__Class** type_info = &type_info_ref;
        inline app::ActivateAction__Class* get_class() {
            return il2cpp::get_class<app::ActivateAction__Class>(type_info, "", "ActivateAction");
        }
        inline app::ActivateAction* create() {
            return il2cpp::create_object<app::ActivateAction>(get_class());
        }
    } // namespace ActivateAction
} // namespace app::classes::types
