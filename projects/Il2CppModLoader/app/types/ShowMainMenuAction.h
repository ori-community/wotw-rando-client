#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShowMainMenuAction {
        namespace {
            app::ShowMainMenuAction__Class* type_info_ref = nullptr;
        }
        app::ShowMainMenuAction__Class** type_info = &type_info_ref;
        inline app::ShowMainMenuAction__Class* get_class() {
            return il2cpp::get_class<app::ShowMainMenuAction__Class>(type_info, "", "ShowMainMenuAction");
        }
        inline app::ShowMainMenuAction* create() {
            return il2cpp::create_object<app::ShowMainMenuAction>(get_class());
        }
    } // namespace ShowMainMenuAction
} // namespace app::classes::types
