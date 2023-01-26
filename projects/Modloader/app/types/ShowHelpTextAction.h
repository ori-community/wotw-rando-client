#pragma once
#include <Modloader/app/structs/ShowHelpTextAction.h>
#include <Modloader/app/structs/ShowHelpTextAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowHelpTextAction {
        inline app::ShowHelpTextAction__Class** type_info() {
            static app::ShowHelpTextAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowHelpTextAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowHelpTextAction__Class* get_class() {
            return il2cpp::get_class<app::ShowHelpTextAction__Class>(type_info(), "", "ShowHelpTextAction");
        }
        inline app::ShowHelpTextAction* create() {
            return il2cpp::create_object<app::ShowHelpTextAction>(get_class());
        }
    } // namespace ShowHelpTextAction
} // namespace app::classes::types
