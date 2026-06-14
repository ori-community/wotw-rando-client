#pragma once
#include <Modloader/app/structs/BabySeinRunToTargetAction.h>
#include <Modloader/app/structs/BabySeinRunToTargetAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BabySeinRunToTargetAction {
        inline app::BabySeinRunToTargetAction__Class** type_info() {
            static app::BabySeinRunToTargetAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BabySeinRunToTargetAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BabySeinRunToTargetAction__Class* get_class() {
            return il2cpp::get_class<app::BabySeinRunToTargetAction__Class>(type_info(), "", "BabySeinRunToTargetAction");
        }
        inline app::BabySeinRunToTargetAction* create() {
            return il2cpp::create_object<app::BabySeinRunToTargetAction>(get_class());
        }
    } // namespace BabySeinRunToTargetAction
} // namespace app::classes::types
