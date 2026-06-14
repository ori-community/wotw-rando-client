#pragma once
#include <Modloader/app/structs/ToggleMenuAction.h>
#include <Modloader/app/structs/ToggleMenuAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ToggleMenuAction {
        inline app::ToggleMenuAction__Class** type_info() {
            static app::ToggleMenuAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ToggleMenuAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ToggleMenuAction__Class* get_class() {
            return il2cpp::get_class<app::ToggleMenuAction__Class>(type_info(), "", "ToggleMenuAction");
        }
        inline app::ToggleMenuAction* create() {
            return il2cpp::create_object<app::ToggleMenuAction>(get_class());
        }
    } // namespace ToggleMenuAction
} // namespace app::classes::types
