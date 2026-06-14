#pragma once
#include <Modloader/app/structs/DashableSwitchSetupData.h>
#include <Modloader/app/structs/DashableSwitchSetupData__Array.h>
#include <Modloader/app/structs/DashableSwitchSetupData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DashableSwitchSetupData {
        inline app::DashableSwitchSetupData__Class** type_info() {
            static app::DashableSwitchSetupData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DashableSwitchSetupData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DashableSwitchSetupData__Class* get_class() {
            return il2cpp::get_class<app::DashableSwitchSetupData__Class>(type_info(), "", "DashableSwitchSetupData");
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
