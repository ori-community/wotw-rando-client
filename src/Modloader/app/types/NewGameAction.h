#pragma once
#include <Modloader/app/structs/NewGameAction.h>
#include <Modloader/app/structs/NewGameAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NewGameAction {
        inline app::NewGameAction__Class** type_info() {
            static app::NewGameAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NewGameAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NewGameAction__Class* get_class() {
            return il2cpp::get_class<app::NewGameAction__Class>(type_info(), "", "NewGameAction");
        }
        inline app::NewGameAction* create() {
            return il2cpp::create_object<app::NewGameAction>(get_class());
        }
    } // namespace NewGameAction
} // namespace app::classes::types
