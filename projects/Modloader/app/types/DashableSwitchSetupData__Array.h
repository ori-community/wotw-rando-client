#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DashableSwitchSetupData__Array {
        namespace {
            inline app::DashableSwitchSetupData__Array__Class* type_info_ref = nullptr;
        }
        inline app::DashableSwitchSetupData__Array__Class** type_info = &type_info_ref;
        inline app::DashableSwitchSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::DashableSwitchSetupData__Array__Class>(type_info, "", "DashableSwitchSetupData[]");
        }
        inline app::DashableSwitchSetupData__Array* create() {
            return il2cpp::create_object<app::DashableSwitchSetupData__Array>(get_class());
        }
    } // namespace DashableSwitchSetupData__Array
} // namespace app::classes::types
