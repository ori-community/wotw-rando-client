#pragma once
#include <Modloader/app/structs/SetGameModeAction.h>
#include <Modloader/app/structs/SetGameModeAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetGameModeAction {
        inline app::SetGameModeAction__Class** type_info() {
            static app::SetGameModeAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetGameModeAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetGameModeAction__Class* get_class() {
            return il2cpp::get_class<app::SetGameModeAction__Class>(type_info(), "", "SetGameModeAction");
        }
        inline app::SetGameModeAction* create() {
            return il2cpp::create_object<app::SetGameModeAction>(get_class());
        }
    } // namespace SetGameModeAction
} // namespace app::classes::types
