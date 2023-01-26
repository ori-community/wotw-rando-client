#pragma once
#include <Modloader/app/structs/EnableSceneSuspendedAction.h>
#include <Modloader/app/structs/EnableSceneSuspendedAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnableSceneSuspendedAction {
        inline app::EnableSceneSuspendedAction__Class** type_info() {
            static app::EnableSceneSuspendedAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnableSceneSuspendedAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnableSceneSuspendedAction__Class* get_class() {
            return il2cpp::get_class<app::EnableSceneSuspendedAction__Class>(type_info(), "", "EnableSceneSuspendedAction");
        }
        inline app::EnableSceneSuspendedAction* create() {
            return il2cpp::create_object<app::EnableSceneSuspendedAction>(get_class());
        }
    } // namespace EnableSceneSuspendedAction
} // namespace app::classes::types
