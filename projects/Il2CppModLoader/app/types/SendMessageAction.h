#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SendMessageAction {
        namespace {
            app::SendMessageAction__Class* type_info_ref = nullptr;
        }
        app::SendMessageAction__Class** type_info = &type_info_ref;
        inline app::SendMessageAction__Class* get_class() {
            return il2cpp::get_class<app::SendMessageAction__Class>(type_info, "", "SendMessageAction");
        }
        inline app::SendMessageAction* create() {
            return il2cpp::create_object<app::SendMessageAction>(get_class());
        }
    } // namespace SendMessageAction
} // namespace app::classes::types
