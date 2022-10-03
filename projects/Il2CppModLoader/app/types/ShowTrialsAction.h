#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShowTrialsAction {
        namespace {
            app::ShowTrialsAction__Class* type_info_ref = nullptr;
        }
        app::ShowTrialsAction__Class** type_info = &type_info_ref;
        inline app::ShowTrialsAction__Class* get_class() {
            return il2cpp::get_class<app::ShowTrialsAction__Class>(type_info, "", "ShowTrialsAction");
        }
        inline app::ShowTrialsAction* create() {
            return il2cpp::create_object<app::ShowTrialsAction>(get_class());
        }
    } // namespace ShowTrialsAction
} // namespace app::classes::types
