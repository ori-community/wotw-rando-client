#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NewGameAction {
        namespace {
            app::NewGameAction__Class* type_info_ref = nullptr;
        }
        app::NewGameAction__Class** type_info = &type_info_ref;
        inline app::NewGameAction__Class* get_class() {
            return il2cpp::get_class<app::NewGameAction__Class>(type_info, "", "NewGameAction");
        }
        inline app::NewGameAction* create() {
            return il2cpp::create_object<app::NewGameAction>(get_class());
        }
    } // namespace NewGameAction
} // namespace app::classes::types
