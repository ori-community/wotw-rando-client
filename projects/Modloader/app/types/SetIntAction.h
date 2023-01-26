#pragma once
#include <Modloader/app/structs/SetIntAction.h>
#include <Modloader/app/structs/SetIntAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetIntAction {
        inline app::SetIntAction__Class** type_info() {
            static app::SetIntAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetIntAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetIntAction__Class* get_class() {
            return il2cpp::get_class<app::SetIntAction__Class>(type_info(), "Moon.BehaviourSystem", "SetIntAction");
        }
        inline app::SetIntAction* create() {
            return il2cpp::create_object<app::SetIntAction>(get_class());
        }
    } // namespace SetIntAction
} // namespace app::classes::types
