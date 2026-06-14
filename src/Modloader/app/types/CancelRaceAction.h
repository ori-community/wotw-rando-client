#pragma once
#include <Modloader/app/structs/CancelRaceAction.h>
#include <Modloader/app/structs/CancelRaceAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CancelRaceAction {
        inline app::CancelRaceAction__Class** type_info() {
            static app::CancelRaceAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CancelRaceAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CancelRaceAction__Class* get_class() {
            return il2cpp::get_class<app::CancelRaceAction__Class>(type_info(), "", "CancelRaceAction");
        }
        inline app::CancelRaceAction* create() {
            return il2cpp::create_object<app::CancelRaceAction>(get_class());
        }
    } // namespace CancelRaceAction
} // namespace app::classes::types
