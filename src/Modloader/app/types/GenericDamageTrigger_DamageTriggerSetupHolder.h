#pragma once
#include <Modloader/app/structs/GenericDamageTrigger_DamageTriggerSetupHolder.h>
#include <Modloader/app/structs/GenericDamageTrigger_DamageTriggerSetupHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericDamageTrigger_DamageTriggerSetupHolder {
        inline app::GenericDamageTrigger_DamageTriggerSetupHolder__Class** type_info() {
            static app::GenericDamageTrigger_DamageTriggerSetupHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GenericDamageTrigger_DamageTriggerSetupHolder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GenericDamageTrigger_DamageTriggerSetupHolder__Class* get_class() {
            return il2cpp::get_nested_class<app::GenericDamageTrigger_DamageTriggerSetupHolder__Class>(type_info(), "", "GenericDamageTrigger", "DamageTriggerSetupHolder");
        }
        inline app::GenericDamageTrigger_DamageTriggerSetupHolder* create() {
            return il2cpp::create_object<app::GenericDamageTrigger_DamageTriggerSetupHolder>(get_class());
        }
    } // namespace GenericDamageTrigger_DamageTriggerSetupHolder
} // namespace app::classes::types
