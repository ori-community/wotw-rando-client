#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GenericDamageTrigger_DamageTriggerSetupHolder {
        namespace {
            inline app::GenericDamageTrigger_DamageTriggerSetupHolder__Class* type_info_ref = nullptr;
        }
        inline app::GenericDamageTrigger_DamageTriggerSetupHolder__Class** type_info = &type_info_ref;
        inline app::GenericDamageTrigger_DamageTriggerSetupHolder__Class* get_class() {
            return il2cpp::get_nested_class<app::GenericDamageTrigger_DamageTriggerSetupHolder__Class>(type_info, "", "GenericDamageTrigger", "DamageTriggerSetupHolder");
        }
        inline app::GenericDamageTrigger_DamageTriggerSetupHolder* create() {
            return il2cpp::create_object<app::GenericDamageTrigger_DamageTriggerSetupHolder>(get_class());
        }
    } // namespace GenericDamageTrigger_DamageTriggerSetupHolder
} // namespace app::classes::types
