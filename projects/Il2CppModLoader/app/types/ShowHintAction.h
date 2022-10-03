#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShowHintAction {
        namespace {
            app::ShowHintAction__Class* type_info_ref = nullptr;
        }
        app::ShowHintAction__Class** type_info = &type_info_ref;
        inline app::ShowHintAction__Class* get_class() {
            return il2cpp::get_class<app::ShowHintAction__Class>(type_info, "", "ShowHintAction");
        }
        inline app::ShowHintAction* create() {
            return il2cpp::create_object<app::ShowHintAction>(get_class());
        }
    } // namespace ShowHintAction
} // namespace app::classes::types
