#pragma once
#include <Modloader/app/structs/ExitGameAction.h>
#include <Modloader/app/structs/ExitGameAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExitGameAction {
        inline app::ExitGameAction__Class** type_info() {
            static app::ExitGameAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExitGameAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExitGameAction__Class* get_class() {
            return il2cpp::get_class<app::ExitGameAction__Class>(type_info(), "", "ExitGameAction");
        }
        inline app::ExitGameAction* create() {
            return il2cpp::create_object<app::ExitGameAction>(get_class());
        }
    } // namespace ExitGameAction
} // namespace app::classes::types
