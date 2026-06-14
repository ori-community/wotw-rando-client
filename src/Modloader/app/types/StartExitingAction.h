#pragma once
#include <Modloader/app/structs/StartExitingAction.h>
#include <Modloader/app/structs/StartExitingAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StartExitingAction {
        inline app::StartExitingAction__Class** type_info() {
            static app::StartExitingAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StartExitingAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StartExitingAction__Class* get_class() {
            return il2cpp::get_class<app::StartExitingAction__Class>(type_info(), "", "StartExitingAction");
        }
        inline app::StartExitingAction* create() {
            return il2cpp::create_object<app::StartExitingAction>(get_class());
        }
    } // namespace StartExitingAction
} // namespace app::classes::types
