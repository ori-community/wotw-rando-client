#pragma once
#include <Modloader/app/structs/GenericDamageTrigger_DamageTriggerSetupData.h>
#include <Modloader/app/structs/GenericDamageTrigger_DamageTriggerSetupData__Array.h>
#include <Modloader/app/structs/GenericDamageTrigger_DamageTriggerSetupData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericDamageTrigger_DamageTriggerSetupData {
        inline app::GenericDamageTrigger_DamageTriggerSetupData__Class** type_info() {
            static app::GenericDamageTrigger_DamageTriggerSetupData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GenericDamageTrigger_DamageTriggerSetupData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GenericDamageTrigger_DamageTriggerSetupData__Class* get_class() {
            return il2cpp::get_nested_class<app::GenericDamageTrigger_DamageTriggerSetupData__Class>(type_info(), "", "GenericDamageTrigger", "DamageTriggerSetupData");
        }
        inline app::GenericDamageTrigger_DamageTriggerSetupData* create() {
            return il2cpp::create_object<app::GenericDamageTrigger_DamageTriggerSetupData>(get_class());
        }
        inline app::GenericDamageTrigger_DamageTriggerSetupData__Array* create_array(int size) {
            return il2cpp::array_new<app::GenericDamageTrigger_DamageTriggerSetupData__Array>(get_class(), size);
        }
        inline app::GenericDamageTrigger_DamageTriggerSetupData__Array* create_array(const std::vector<app::GenericDamageTrigger_DamageTriggerSetupData*>& items) {
            return il2cpp::array_new<app::GenericDamageTrigger_DamageTriggerSetupData__Array>(get_class(), items);
        }
    } // namespace GenericDamageTrigger_DamageTriggerSetupData
} // namespace app::classes::types
