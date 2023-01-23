#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AddColosseumTimeAction__Class.h>
#include <Modloader/app/structs/AddColosseumTimeAction.h>

namespace app::classes::types {
    namespace AddColosseumTimeAction {
        namespace {
            inline app::AddColosseumTimeAction__Class* type_info_ref = nullptr;
        }
        inline app::AddColosseumTimeAction__Class** type_info = &type_info_ref;
        inline app::AddColosseumTimeAction__Class* get_class() {
            return il2cpp::get_class<app::AddColosseumTimeAction__Class>(type_info, "", "AddColosseumTimeAction");
        }
        inline app::AddColosseumTimeAction* create() {
            return il2cpp::create_object<app::AddColosseumTimeAction>(get_class());
        }
    } // namespace AddColosseumTimeAction
} // namespace app::classes::types
