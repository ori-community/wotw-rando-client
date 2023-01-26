#pragma once
#include <Modloader/app/structs/OriFlyToPositionAction.h>
#include <Modloader/app/structs/OriFlyToPositionAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriFlyToPositionAction {
        inline app::OriFlyToPositionAction__Class** type_info() {
            static app::OriFlyToPositionAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OriFlyToPositionAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OriFlyToPositionAction__Class* get_class() {
            return il2cpp::get_class<app::OriFlyToPositionAction__Class>(type_info(), "", "OriFlyToPositionAction");
        }
        inline app::OriFlyToPositionAction* create() {
            return il2cpp::create_object<app::OriFlyToPositionAction>(get_class());
        }
    } // namespace OriFlyToPositionAction
} // namespace app::classes::types
