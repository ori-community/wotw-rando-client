#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ToggleMenuAction {
        namespace {
            app::ToggleMenuAction__Class* type_info_ref = nullptr;
        }
        app::ToggleMenuAction__Class** type_info = &type_info_ref;
        inline app::ToggleMenuAction__Class* get_class() {
            return il2cpp::get_class<app::ToggleMenuAction__Class>(type_info, "", "ToggleMenuAction");
        }
        inline app::ToggleMenuAction* create() {
            return il2cpp::create_object<app::ToggleMenuAction>(get_class());
        }
    } // namespace ToggleMenuAction
} // namespace app::classes::types
