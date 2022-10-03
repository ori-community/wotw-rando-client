#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivateMenuAction {
        namespace {
            app::ActivateMenuAction__Class* type_info_ref = nullptr;
        }
        app::ActivateMenuAction__Class** type_info = &type_info_ref;
        inline app::ActivateMenuAction__Class* get_class() {
            return il2cpp::get_class<app::ActivateMenuAction__Class>(type_info, "", "ActivateMenuAction");
        }
        inline app::ActivateMenuAction* create() {
            return il2cpp::create_object<app::ActivateMenuAction>(get_class());
        }
    } // namespace ActivateMenuAction
} // namespace app::classes::types
