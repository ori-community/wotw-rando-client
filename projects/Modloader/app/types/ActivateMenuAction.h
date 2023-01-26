#pragma once
#include <Modloader/app/structs/ActivateMenuAction.h>
#include <Modloader/app/structs/ActivateMenuAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivateMenuAction {
        inline app::ActivateMenuAction__Class** type_info() {
            static app::ActivateMenuAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActivateMenuAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActivateMenuAction__Class* get_class() {
            return il2cpp::get_class<app::ActivateMenuAction__Class>(type_info(), "", "ActivateMenuAction");
        }
        inline app::ActivateMenuAction* create() {
            return il2cpp::create_object<app::ActivateMenuAction>(get_class());
        }
    } // namespace ActivateMenuAction
} // namespace app::classes::types
