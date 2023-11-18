#pragma once
#include <Modloader/app/structs/DashableSwitchSetupData__Array.h>
#include <Modloader/app/structs/DashableSwitchSetupData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DashableSwitchSetupData__Array {
        inline app::DashableSwitchSetupData__Array__Class** type_info() {
            static app::DashableSwitchSetupData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DashableSwitchSetupData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DashableSwitchSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::DashableSwitchSetupData__Array__Class>(type_info(), "", "DashableSwitchSetupData[]");
        }
        inline app::DashableSwitchSetupData__Array* create() {
            return il2cpp::create_object<app::DashableSwitchSetupData__Array>(get_class());
        }
    } // namespace DashableSwitchSetupData__Array
} // namespace app::classes::types
