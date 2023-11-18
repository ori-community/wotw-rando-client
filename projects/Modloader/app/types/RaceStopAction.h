#pragma once
#include <Modloader/app/structs/RaceStopAction.h>
#include <Modloader/app/structs/RaceStopAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceStopAction {
        inline app::RaceStopAction__Class** type_info() {
            static app::RaceStopAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceStopAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceStopAction__Class* get_class() {
            return il2cpp::get_class<app::RaceStopAction__Class>(type_info(), "Moon.Race", "RaceStopAction");
        }
        inline app::RaceStopAction* create() {
            return il2cpp::create_object<app::RaceStopAction>(get_class());
        }
    } // namespace RaceStopAction
} // namespace app::classes::types
