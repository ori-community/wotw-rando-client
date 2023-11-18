#pragma once
#include <Modloader/app/structs/PrepareToContinueGameAction.h>
#include <Modloader/app/structs/PrepareToContinueGameAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PrepareToContinueGameAction {
        inline app::PrepareToContinueGameAction__Class** type_info() {
            static app::PrepareToContinueGameAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PrepareToContinueGameAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PrepareToContinueGameAction__Class* get_class() {
            return il2cpp::get_class<app::PrepareToContinueGameAction__Class>(type_info(), "", "PrepareToContinueGameAction");
        }
        inline app::PrepareToContinueGameAction* create() {
            return il2cpp::create_object<app::PrepareToContinueGameAction>(get_class());
        }
    } // namespace PrepareToContinueGameAction
} // namespace app::classes::types
