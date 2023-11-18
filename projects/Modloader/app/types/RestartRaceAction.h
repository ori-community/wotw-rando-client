#pragma once
#include <Modloader/app/structs/RestartRaceAction.h>
#include <Modloader/app/structs/RestartRaceAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RestartRaceAction {
        inline app::RestartRaceAction__Class** type_info() {
            static app::RestartRaceAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RestartRaceAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RestartRaceAction__Class* get_class() {
            return il2cpp::get_class<app::RestartRaceAction__Class>(type_info(), "", "RestartRaceAction");
        }
        inline app::RestartRaceAction* create() {
            return il2cpp::create_object<app::RestartRaceAction>(get_class());
        }
    } // namespace RestartRaceAction
} // namespace app::classes::types
