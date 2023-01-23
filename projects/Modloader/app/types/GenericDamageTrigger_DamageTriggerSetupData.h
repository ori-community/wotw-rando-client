#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GenericDamageTrigger_DamageTriggerSetupData__Class.h>
#include <Modloader/app/structs/GenericDamageTrigger_DamageTriggerSetupData.h>
#include <Modloader/app/structs/GenericDamageTrigger_DamageTriggerSetupData__Array.h>

namespace app::classes::types {
    namespace GenericDamageTrigger_DamageTriggerSetupData {
        namespace {
            inline app::GenericDamageTrigger_DamageTriggerSetupData__Class* type_info_ref = nullptr;
        }
        inline app::GenericDamageTrigger_DamageTriggerSetupData__Class** type_info = &type_info_ref;
        inline app::GenericDamageTrigger_DamageTriggerSetupData__Class* get_class() {
            return il2cpp::get_nested_class<app::GenericDamageTrigger_DamageTriggerSetupData__Class>(type_info, "", "GenericDamageTrigger", "DamageTriggerSetupData");
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
