#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivateWindVentAction {
        namespace {
            app::ActivateWindVentAction__Class* type_info_ref = nullptr;
        }
        app::ActivateWindVentAction__Class** type_info = &type_info_ref;
        inline app::ActivateWindVentAction__Class* get_class() {
            return il2cpp::get_class<app::ActivateWindVentAction__Class>(type_info, "", "ActivateWindVentAction");
        }
        inline app::ActivateWindVentAction* create() {
            return il2cpp::create_object<app::ActivateWindVentAction>(get_class());
        }
    } // namespace ActivateWindVentAction
} // namespace app::classes::types
