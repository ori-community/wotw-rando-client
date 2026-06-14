#pragma once
#include <Modloader/app/structs/ShowAreaMessageAction.h>
#include <Modloader/app/structs/ShowAreaMessageAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowAreaMessageAction {
        inline app::ShowAreaMessageAction__Class** type_info() {
            static app::ShowAreaMessageAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowAreaMessageAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowAreaMessageAction__Class* get_class() {
            return il2cpp::get_class<app::ShowAreaMessageAction__Class>(type_info(), "", "ShowAreaMessageAction");
        }
        inline app::ShowAreaMessageAction* create() {
            return il2cpp::create_object<app::ShowAreaMessageAction>(get_class());
        }
    } // namespace ShowAreaMessageAction
} // namespace app::classes::types
