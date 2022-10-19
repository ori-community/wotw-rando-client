#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LagoonContactSwitchGroupAction {
        namespace {
            inline app::LagoonContactSwitchGroupAction__Class* type_info_ref = nullptr;
        }
        inline app::LagoonContactSwitchGroupAction__Class** type_info = &type_info_ref;
        inline app::LagoonContactSwitchGroupAction__Class* get_class() {
            return il2cpp::get_class<app::LagoonContactSwitchGroupAction__Class>(type_info, "", "LagoonContactSwitchGroupAction");
        }
        inline app::LagoonContactSwitchGroupAction* create() {
            return il2cpp::create_object<app::LagoonContactSwitchGroupAction>(get_class());
        }
    } // namespace LagoonContactSwitchGroupAction
} // namespace app::classes::types
