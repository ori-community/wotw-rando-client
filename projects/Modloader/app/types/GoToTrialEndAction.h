#pragma once
#include <Modloader/app/structs/GoToTrialEndAction.h>
#include <Modloader/app/structs/GoToTrialEndAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GoToTrialEndAction {
        inline app::GoToTrialEndAction__Class** type_info() {
            static app::GoToTrialEndAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GoToTrialEndAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GoToTrialEndAction__Class* get_class() {
            return il2cpp::get_class<app::GoToTrialEndAction__Class>(type_info(), "", "GoToTrialEndAction");
        }
        inline app::GoToTrialEndAction* create() {
            return il2cpp::create_object<app::GoToTrialEndAction>(get_class());
        }
    } // namespace GoToTrialEndAction
} // namespace app::classes::types
