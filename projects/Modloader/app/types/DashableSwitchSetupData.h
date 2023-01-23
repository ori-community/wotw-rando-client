#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DashableSwitchSetupData__Class.h>
#include <Modloader/app/structs/DashableSwitchSetupData.h>
#include <Modloader/app/structs/DashableSwitchSetupData__Array.h>

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
