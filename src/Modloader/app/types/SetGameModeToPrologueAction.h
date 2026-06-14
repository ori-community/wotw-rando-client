#pragma once
#include <Modloader/app/structs/SetGameModeToPrologueAction.h>
#include <Modloader/app/structs/SetGameModeToPrologueAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetGameModeToPrologueAction {
        inline app::SetGameModeToPrologueAction__Class** type_info() {
            static app::SetGameModeToPrologueAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetGameModeToPrologueAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetGameModeToPrologueAction__Class* get_class() {
            return il2cpp::get_class<app::SetGameModeToPrologueAction__Class>(type_info(), "", "SetGameModeToPrologueAction");
        }
        inline app::SetGameModeToPrologueAction* create() {
            return il2cpp::create_object<app::SetGameModeToPrologueAction>(get_class());
        }
    } // namespace SetGameModeToPrologueAction
} // namespace app::classes::types
