#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AttackableSwitch {
        namespace {
            inline app::AttackableSwitch__Class* type_info_ref = nullptr;
        }
        inline app::AttackableSwitch__Class** type_info = &type_info_ref;
        inline app::AttackableSwitch__Class* get_class() {
            return il2cpp::get_class<app::AttackableSwitch__Class>(type_info, "", "AttackableSwitch");
        }
        inline app::AttackableSwitch* create() {
            return il2cpp::create_object<app::AttackableSwitch>(get_class());
        }
    } // namespace AttackableSwitch
} // namespace app::classes::types
