#pragma once
#include <Modloader/app/structs/ShowInventoryAction.h>
#include <Modloader/app/structs/ShowInventoryAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowInventoryAction {
        inline app::ShowInventoryAction__Class** type_info() {
            static app::ShowInventoryAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowInventoryAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowInventoryAction__Class* get_class() {
            return il2cpp::get_class<app::ShowInventoryAction__Class>(type_info(), "", "ShowInventoryAction");
        }
        inline app::ShowInventoryAction* create() {
            return il2cpp::create_object<app::ShowInventoryAction>(get_class());
        }
    } // namespace ShowInventoryAction
} // namespace app::classes::types
