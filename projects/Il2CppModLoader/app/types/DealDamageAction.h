#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DealDamageAction {
        namespace {
            app::DealDamageAction__Class* type_info_ref = nullptr;
        }
        app::DealDamageAction__Class** type_info = &type_info_ref;
        inline app::DealDamageAction__Class* get_class() {
            return il2cpp::get_class<app::DealDamageAction__Class>(type_info, "", "DealDamageAction");
        }
        inline app::DealDamageAction* create() {
            return il2cpp::create_object<app::DealDamageAction>(get_class());
        }
    } // namespace DealDamageAction
} // namespace app::classes::types
