#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PauseGameAction {
        namespace {
            app::PauseGameAction__Class* type_info_ref = nullptr;
        }
        app::PauseGameAction__Class** type_info = &type_info_ref;
        inline app::PauseGameAction__Class* get_class() {
            return il2cpp::get_class<app::PauseGameAction__Class>(type_info, "", "PauseGameAction");
        }
        inline app::PauseGameAction* create() {
            return il2cpp::create_object<app::PauseGameAction>(get_class());
        }
    } // namespace PauseGameAction
} // namespace app::classes::types
