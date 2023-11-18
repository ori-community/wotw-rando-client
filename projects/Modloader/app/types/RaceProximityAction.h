#pragma once
#include <Modloader/app/structs/RaceProximityAction.h>
#include <Modloader/app/structs/RaceProximityAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceProximityAction {
        inline app::RaceProximityAction__Class** type_info() {
            static app::RaceProximityAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceProximityAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceProximityAction__Class* get_class() {
            return il2cpp::get_class<app::RaceProximityAction__Class>(type_info(), "Moon.Race", "RaceProximityAction");
        }
        inline app::RaceProximityAction* create() {
            return il2cpp::create_object<app::RaceProximityAction>(get_class());
        }
    } // namespace RaceProximityAction
} // namespace app::classes::types
