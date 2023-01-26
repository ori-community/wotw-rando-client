#pragma once
#include <Modloader/app/structs/SetFloatAction.h>
#include <Modloader/app/structs/SetFloatAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetFloatAction {
        inline app::SetFloatAction__Class** type_info() {
            static app::SetFloatAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetFloatAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetFloatAction__Class* get_class() {
            return il2cpp::get_class<app::SetFloatAction__Class>(type_info(), "Moon.BehaviourSystem", "SetFloatAction");
        }
        inline app::SetFloatAction* create() {
            return il2cpp::create_object<app::SetFloatAction>(get_class());
        }
    } // namespace SetFloatAction
} // namespace app::classes::types
