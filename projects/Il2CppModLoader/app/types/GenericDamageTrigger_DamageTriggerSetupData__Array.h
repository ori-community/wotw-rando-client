#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericDamageTrigger_DamageTriggerSetupData__Array {
        namespace {
            app::GenericDamageTrigger_DamageTriggerSetupData__Array__Class* type_info_ref = nullptr;
        }
        app::GenericDamageTrigger_DamageTriggerSetupData__Array__Class** type_info = &type_info_ref;
        inline app::GenericDamageTrigger_DamageTriggerSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::GenericDamageTrigger_DamageTriggerSetupData__Array__Class>(type_info, "", "GenericDamageTrigger+DamageTriggerSetupData[]");
        }
        inline app::GenericDamageTrigger_DamageTriggerSetupData__Array* create() {
            return il2cpp::create_object<app::GenericDamageTrigger_DamageTriggerSetupData__Array>(get_class());
        }
    } // namespace GenericDamageTrigger_DamageTriggerSetupData__Array
} // namespace app::classes::types
