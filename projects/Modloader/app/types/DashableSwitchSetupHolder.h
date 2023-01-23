#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DashableSwitchSetupHolder__Class.h>
#include <Modloader/app/structs/DashableSwitchSetupHolder.h>

namespace app::classes::types {
    namespace DashableSwitchSetupHolder {
        namespace {
            inline app::DashableSwitchSetupHolder__Class* type_info_ref = nullptr;
        }
        inline app::DashableSwitchSetupHolder__Class** type_info = &type_info_ref;
        inline app::DashableSwitchSetupHolder__Class* get_class() {
            return il2cpp::get_class<app::DashableSwitchSetupHolder__Class>(type_info, "", "DashableSwitchSetupHolder");
        }
        inline app::DashableSwitchSetupHolder* create() {
            return il2cpp::create_object<app::DashableSwitchSetupHolder>(get_class());
        }
    } // namespace DashableSwitchSetupHolder
} // namespace app::classes::types
