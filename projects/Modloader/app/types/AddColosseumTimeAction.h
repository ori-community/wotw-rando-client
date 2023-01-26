#pragma once
#include <Modloader/app/structs/AddColosseumTimeAction.h>
#include <Modloader/app/structs/AddColosseumTimeAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddColosseumTimeAction {
        inline app::AddColosseumTimeAction__Class** type_info() {
            static app::AddColosseumTimeAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AddColosseumTimeAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AddColosseumTimeAction__Class* get_class() {
            return il2cpp::get_class<app::AddColosseumTimeAction__Class>(type_info(), "", "AddColosseumTimeAction");
        }
        inline app::AddColosseumTimeAction* create() {
            return il2cpp::create_object<app::AddColosseumTimeAction>(get_class());
        }
    } // namespace AddColosseumTimeAction
} // namespace app::classes::types
