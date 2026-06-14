#pragma once
#include <Modloader/app/structs/ActivateRailAction.h>
#include <Modloader/app/structs/ActivateRailAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivateRailAction {
        inline app::ActivateRailAction__Class** type_info() {
            static app::ActivateRailAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActivateRailAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActivateRailAction__Class* get_class() {
            return il2cpp::get_class<app::ActivateRailAction__Class>(type_info(), "", "ActivateRailAction");
        }
        inline app::ActivateRailAction* create() {
            return il2cpp::create_object<app::ActivateRailAction>(get_class());
        }
    } // namespace ActivateRailAction
} // namespace app::classes::types
