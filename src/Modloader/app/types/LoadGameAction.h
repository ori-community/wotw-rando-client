#pragma once
#include <Modloader/app/structs/LoadGameAction.h>
#include <Modloader/app/structs/LoadGameAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadGameAction {
        inline app::LoadGameAction__Class** type_info() {
            static app::LoadGameAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LoadGameAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LoadGameAction__Class* get_class() {
            return il2cpp::get_class<app::LoadGameAction__Class>(type_info(), "", "LoadGameAction");
        }
        inline app::LoadGameAction* create() {
            return il2cpp::create_object<app::LoadGameAction>(get_class());
        }
    } // namespace LoadGameAction
} // namespace app::classes::types
