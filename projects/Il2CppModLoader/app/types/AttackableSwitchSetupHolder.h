#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AttackableSwitchSetupHolder {
        namespace {
            inline app::AttackableSwitchSetupHolder__Class* type_info_ref = nullptr;
        }
        inline app::AttackableSwitchSetupHolder__Class** type_info = &type_info_ref;
        inline app::AttackableSwitchSetupHolder__Class* get_class() {
            return il2cpp::get_class<app::AttackableSwitchSetupHolder__Class>(type_info, "", "AttackableSwitchSetupHolder");
        }
        inline app::AttackableSwitchSetupHolder* create() {
            return il2cpp::create_object<app::AttackableSwitchSetupHolder>(get_class());
        }
    } // namespace AttackableSwitchSetupHolder
} // namespace app::classes::types
