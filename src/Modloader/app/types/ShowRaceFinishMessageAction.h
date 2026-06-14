#pragma once
#include <Modloader/app/structs/ShowRaceFinishMessageAction.h>
#include <Modloader/app/structs/ShowRaceFinishMessageAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowRaceFinishMessageAction {
        inline app::ShowRaceFinishMessageAction__Class** type_info() {
            static app::ShowRaceFinishMessageAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowRaceFinishMessageAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowRaceFinishMessageAction__Class* get_class() {
            return il2cpp::get_class<app::ShowRaceFinishMessageAction__Class>(type_info(), "", "ShowRaceFinishMessageAction");
        }
        inline app::ShowRaceFinishMessageAction* create() {
            return il2cpp::create_object<app::ShowRaceFinishMessageAction>(get_class());
        }
    } // namespace ShowRaceFinishMessageAction
} // namespace app::classes::types
