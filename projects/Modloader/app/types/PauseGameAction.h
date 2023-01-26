#pragma once
#include <Modloader/app/structs/PauseGameAction.h>
#include <Modloader/app/structs/PauseGameAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PauseGameAction {
        inline app::PauseGameAction__Class** type_info() {
            static app::PauseGameAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PauseGameAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PauseGameAction__Class* get_class() {
            return il2cpp::get_class<app::PauseGameAction__Class>(type_info(), "", "PauseGameAction");
        }
        inline app::PauseGameAction* create() {
            return il2cpp::create_object<app::PauseGameAction>(get_class());
        }
    } // namespace PauseGameAction
} // namespace app::classes::types
