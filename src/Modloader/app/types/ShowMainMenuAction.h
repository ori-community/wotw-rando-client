#pragma once
#include <Modloader/app/structs/ShowMainMenuAction.h>
#include <Modloader/app/structs/ShowMainMenuAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowMainMenuAction {
        inline app::ShowMainMenuAction__Class** type_info() {
            static app::ShowMainMenuAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowMainMenuAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowMainMenuAction__Class* get_class() {
            return il2cpp::get_class<app::ShowMainMenuAction__Class>(type_info(), "", "ShowMainMenuAction");
        }
        inline app::ShowMainMenuAction* create() {
            return il2cpp::create_object<app::ShowMainMenuAction>(get_class());
        }
    } // namespace ShowMainMenuAction
} // namespace app::classes::types
