#pragma once
#include <Modloader/app/structs/SaveGameAction.h>
#include <Modloader/app/structs/SaveGameAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SaveGameAction {
        inline app::SaveGameAction__Class** type_info() {
            static app::SaveGameAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SaveGameAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SaveGameAction__Class* get_class() {
            return il2cpp::get_class<app::SaveGameAction__Class>(type_info(), "", "SaveGameAction");
        }
        inline app::SaveGameAction* create() {
            return il2cpp::create_object<app::SaveGameAction>(get_class());
        }
    } // namespace SaveGameAction
} // namespace app::classes::types
