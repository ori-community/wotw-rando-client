#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PrepareToContinueGameAction {
        namespace {
            app::PrepareToContinueGameAction__Class* type_info_ref = nullptr;
        }
        app::PrepareToContinueGameAction__Class** type_info = &type_info_ref;
        inline app::PrepareToContinueGameAction__Class* get_class() {
            return il2cpp::get_class<app::PrepareToContinueGameAction__Class>(type_info, "", "PrepareToContinueGameAction");
        }
        inline app::PrepareToContinueGameAction* create() {
            return il2cpp::create_object<app::PrepareToContinueGameAction>(get_class());
        }
    } // namespace PrepareToContinueGameAction
} // namespace app::classes::types
