#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DashableSwitchSetupData {
        namespace {
            inline app::DashableSwitchSetupData__Class* type_info_ref = nullptr;
        }
        inline app::DashableSwitchSetupData__Class** type_info = &type_info_ref;
        inline app::DashableSwitchSetupData__Class* get_class() {
            return il2cpp::get_class<app::DashableSwitchSetupData__Class>(type_info, "", "DashableSwitchSetupData");
        }
        inline app::DashableSwitchSetupData* create() {
            return il2cpp::create_object<app::DashableSwitchSetupData>(get_class());
        }
        inline app::DashableSwitchSetupData__Array* create_array(int size) {
            return il2cpp::array_new<app::DashableSwitchSetupData__Array>(get_class(), size);
        }
        inline app::DashableSwitchSetupData__Array* create_array(const std::vector<app::DashableSwitchSetupData*>& items) {
            return il2cpp::array_new<app::DashableSwitchSetupData__Array>(get_class(), items);
        }
    } // namespace DashableSwitchSetupData
} // namespace app::classes::types
