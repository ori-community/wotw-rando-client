#pragma once
#include <Modloader/app/structs/SetPositionAction.h>
#include <Modloader/app/structs/SetPositionAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetPositionAction {
        inline app::SetPositionAction__Class** type_info() {
            static app::SetPositionAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetPositionAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetPositionAction__Class* get_class() {
            return il2cpp::get_class<app::SetPositionAction__Class>(type_info(), "", "SetPositionAction");
        }
        inline app::SetPositionAction* create() {
            return il2cpp::create_object<app::SetPositionAction>(get_class());
        }
    } // namespace SetPositionAction
} // namespace app::classes::types
