#pragma once
#include <Modloader/app/structs/AttackableSwitchSetupHolder.h>
#include <Modloader/app/structs/AttackableSwitchSetupHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttackableSwitchSetupHolder {
        inline app::AttackableSwitchSetupHolder__Class** type_info() {
            static app::AttackableSwitchSetupHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttackableSwitchSetupHolder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttackableSwitchSetupHolder__Class* get_class() {
            return il2cpp::get_class<app::AttackableSwitchSetupHolder__Class>(type_info(), "", "AttackableSwitchSetupHolder");
        }
        inline app::AttackableSwitchSetupHolder* create() {
            return il2cpp::create_object<app::AttackableSwitchSetupHolder>(get_class());
        }
    } // namespace AttackableSwitchSetupHolder
} // namespace app::classes::types
