#pragma once
#include <Modloader/app/structs/LaunchCartFromStopperAction.h>
#include <Modloader/app/structs/LaunchCartFromStopperAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaunchCartFromStopperAction {
        inline app::LaunchCartFromStopperAction__Class** type_info() {
            static app::LaunchCartFromStopperAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaunchCartFromStopperAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaunchCartFromStopperAction__Class* get_class() {
            return il2cpp::get_class<app::LaunchCartFromStopperAction__Class>(type_info(), "", "LaunchCartFromStopperAction");
        }
        inline app::LaunchCartFromStopperAction* create() {
            return il2cpp::create_object<app::LaunchCartFromStopperAction>(get_class());
        }
    } // namespace LaunchCartFromStopperAction
} // namespace app::classes::types
