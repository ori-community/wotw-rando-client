#pragma once
#include <Modloader/app/structs/SetGameObjectAction.h>
#include <Modloader/app/structs/SetGameObjectAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetGameObjectAction {
        inline app::SetGameObjectAction__Class** type_info() {
            static app::SetGameObjectAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetGameObjectAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetGameObjectAction__Class* get_class() {
            return il2cpp::get_class<app::SetGameObjectAction__Class>(type_info(), "Moon.BehaviourSystem", "SetGameObjectAction");
        }
        inline app::SetGameObjectAction* create() {
            return il2cpp::create_object<app::SetGameObjectAction>(get_class());
        }
    } // namespace SetGameObjectAction
} // namespace app::classes::types
