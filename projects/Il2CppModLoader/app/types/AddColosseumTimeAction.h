#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddColosseumTimeAction {
        namespace {
            app::AddColosseumTimeAction__Class* type_info_ref = nullptr;
        }
        app::AddColosseumTimeAction__Class** type_info = &type_info_ref;
        inline app::AddColosseumTimeAction__Class* get_class() {
            return il2cpp::get_class<app::AddColosseumTimeAction__Class>(type_info, "", "AddColosseumTimeAction");
        }
        inline app::AddColosseumTimeAction* create() {
            return il2cpp::create_object<app::AddColosseumTimeAction>(get_class());
        }
    } // namespace AddColosseumTimeAction
} // namespace app::classes::types
