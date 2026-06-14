#pragma once
#include <Modloader/app/structs/CompleteGameAction.h>
#include <Modloader/app/structs/CompleteGameAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompleteGameAction {
        inline app::CompleteGameAction__Class** type_info() {
            static app::CompleteGameAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CompleteGameAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CompleteGameAction__Class* get_class() {
            return il2cpp::get_class<app::CompleteGameAction__Class>(type_info(), "", "CompleteGameAction");
        }
        inline app::CompleteGameAction* create() {
            return il2cpp::create_object<app::CompleteGameAction>(get_class());
        }
    } // namespace CompleteGameAction
} // namespace app::classes::types
