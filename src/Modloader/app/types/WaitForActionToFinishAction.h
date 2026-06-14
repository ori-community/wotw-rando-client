#pragma once
#include <Modloader/app/structs/WaitForActionToFinishAction.h>
#include <Modloader/app/structs/WaitForActionToFinishAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitForActionToFinishAction {
        inline app::WaitForActionToFinishAction__Class** type_info() {
            static app::WaitForActionToFinishAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaitForActionToFinishAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaitForActionToFinishAction__Class* get_class() {
            return il2cpp::get_class<app::WaitForActionToFinishAction__Class>(type_info(), "", "WaitForActionToFinishAction");
        }
        inline app::WaitForActionToFinishAction* create() {
            return il2cpp::create_object<app::WaitForActionToFinishAction>(get_class());
        }
    } // namespace WaitForActionToFinishAction
} // namespace app::classes::types
