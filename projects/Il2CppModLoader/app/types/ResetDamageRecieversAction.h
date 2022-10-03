#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ResetDamageRecieversAction {
        namespace {
            app::ResetDamageRecieversAction__Class* type_info_ref = nullptr;
        }
        app::ResetDamageRecieversAction__Class** type_info = &type_info_ref;
        inline app::ResetDamageRecieversAction__Class* get_class() {
            return il2cpp::get_class<app::ResetDamageRecieversAction__Class>(type_info, "", "ResetDamageRecieversAction");
        }
        inline app::ResetDamageRecieversAction* create() {
            return il2cpp::create_object<app::ResetDamageRecieversAction>(get_class());
        }
    } // namespace ResetDamageRecieversAction
} // namespace app::classes::types
