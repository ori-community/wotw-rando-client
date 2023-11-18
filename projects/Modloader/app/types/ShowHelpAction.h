#pragma once
#include <Modloader/app/structs/ShowHelpAction.h>
#include <Modloader/app/structs/ShowHelpAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowHelpAction {
        inline app::ShowHelpAction__Class** type_info() {
            static app::ShowHelpAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowHelpAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowHelpAction__Class* get_class() {
            return il2cpp::get_class<app::ShowHelpAction__Class>(type_info(), "", "ShowHelpAction");
        }
        inline app::ShowHelpAction* create() {
            return il2cpp::create_object<app::ShowHelpAction>(get_class());
        }
    } // namespace ShowHelpAction
} // namespace app::classes::types
