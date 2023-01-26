#pragma once
#include <Modloader/app/structs/DropNightBerryAction.h>
#include <Modloader/app/structs/DropNightBerryAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropNightBerryAction {
        inline app::DropNightBerryAction__Class** type_info() {
            static app::DropNightBerryAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DropNightBerryAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DropNightBerryAction__Class* get_class() {
            return il2cpp::get_class<app::DropNightBerryAction__Class>(type_info(), "", "DropNightBerryAction");
        }
        inline app::DropNightBerryAction* create() {
            return il2cpp::create_object<app::DropNightBerryAction>(get_class());
        }
    } // namespace DropNightBerryAction
} // namespace app::classes::types
