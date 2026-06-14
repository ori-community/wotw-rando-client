#pragma once
#include <Modloader/app/structs/RaceSkipAction.h>
#include <Modloader/app/structs/RaceSkipAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceSkipAction {
        inline app::RaceSkipAction__Class** type_info() {
            static app::RaceSkipAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceSkipAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceSkipAction__Class* get_class() {
            return il2cpp::get_class<app::RaceSkipAction__Class>(type_info(), "Moon.Race", "RaceSkipAction");
        }
        inline app::RaceSkipAction* create() {
            return il2cpp::create_object<app::RaceSkipAction>(get_class());
        }
    } // namespace RaceSkipAction
} // namespace app::classes::types
