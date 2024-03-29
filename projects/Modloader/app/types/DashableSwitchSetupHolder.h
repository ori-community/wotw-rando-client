#pragma once
#include <Modloader/app/structs/DashableSwitchSetupHolder.h>
#include <Modloader/app/structs/DashableSwitchSetupHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DashableSwitchSetupHolder {
        inline app::DashableSwitchSetupHolder__Class** type_info() {
            static app::DashableSwitchSetupHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DashableSwitchSetupHolder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DashableSwitchSetupHolder__Class* get_class() {
            return il2cpp::get_class<app::DashableSwitchSetupHolder__Class>(type_info(), "", "DashableSwitchSetupHolder");
        }
        inline app::DashableSwitchSetupHolder* create() {
            return il2cpp::create_object<app::DashableSwitchSetupHolder>(get_class());
        }
    } // namespace DashableSwitchSetupHolder
} // namespace app::classes::types
