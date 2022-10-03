#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetMecanimTriggerAction {
        namespace {
            app::SetMecanimTriggerAction__Class* type_info_ref = nullptr;
        }
        app::SetMecanimTriggerAction__Class** type_info = &type_info_ref;
        inline app::SetMecanimTriggerAction__Class* get_class() {
            return il2cpp::get_class<app::SetMecanimTriggerAction__Class>(type_info, "", "SetMecanimTriggerAction");
        }
        inline app::SetMecanimTriggerAction* create() {
            return il2cpp::create_object<app::SetMecanimTriggerAction>(get_class());
        }
    } // namespace SetMecanimTriggerAction
} // namespace app::classes::types
