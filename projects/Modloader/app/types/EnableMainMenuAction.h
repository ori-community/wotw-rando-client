#pragma once
#include <Modloader/app/structs/EnableMainMenuAction.h>
#include <Modloader/app/structs/EnableMainMenuAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnableMainMenuAction {
        inline app::EnableMainMenuAction__Class** type_info() {
            static app::EnableMainMenuAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnableMainMenuAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnableMainMenuAction__Class* get_class() {
            return il2cpp::get_class<app::EnableMainMenuAction__Class>(type_info(), "", "EnableMainMenuAction");
        }
        inline app::EnableMainMenuAction* create() {
            return il2cpp::create_object<app::EnableMainMenuAction>(get_class());
        }
    } // namespace EnableMainMenuAction
} // namespace app::classes::types
