#pragma once
#include <Modloader/app/structs/LagoonContactSwitchGroupAction.h>
#include <Modloader/app/structs/LagoonContactSwitchGroupAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LagoonContactSwitchGroupAction {
        inline app::LagoonContactSwitchGroupAction__Class** type_info() {
            static app::LagoonContactSwitchGroupAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LagoonContactSwitchGroupAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LagoonContactSwitchGroupAction__Class* get_class() {
            return il2cpp::get_class<app::LagoonContactSwitchGroupAction__Class>(type_info(), "", "LagoonContactSwitchGroupAction");
        }
        inline app::LagoonContactSwitchGroupAction* create() {
            return il2cpp::create_object<app::LagoonContactSwitchGroupAction>(get_class());
        }
    } // namespace LagoonContactSwitchGroupAction
} // namespace app::classes::types
