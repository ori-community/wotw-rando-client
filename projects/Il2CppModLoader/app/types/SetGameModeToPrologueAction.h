#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetGameModeToPrologueAction {
        namespace {
            app::SetGameModeToPrologueAction__Class* type_info_ref = nullptr;
        }
        app::SetGameModeToPrologueAction__Class** type_info = &type_info_ref;
        inline app::SetGameModeToPrologueAction__Class* get_class() {
            return il2cpp::get_class<app::SetGameModeToPrologueAction__Class>(type_info, "", "SetGameModeToPrologueAction");
        }
        inline app::SetGameModeToPrologueAction* create() {
            return il2cpp::create_object<app::SetGameModeToPrologueAction>(get_class());
        }
    } // namespace SetGameModeToPrologueAction
} // namespace app::classes::types
