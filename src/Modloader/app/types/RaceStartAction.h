#pragma once
#include <Modloader/app/structs/RaceStartAction.h>
#include <Modloader/app/structs/RaceStartAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceStartAction {
        inline app::RaceStartAction__Class** type_info() {
            static app::RaceStartAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceStartAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceStartAction__Class* get_class() {
            return il2cpp::get_class<app::RaceStartAction__Class>(type_info(), "Moon.Race", "RaceStartAction");
        }
        inline app::RaceStartAction* create() {
            return il2cpp::create_object<app::RaceStartAction>(get_class());
        }
    } // namespace RaceStartAction
} // namespace app::classes::types
