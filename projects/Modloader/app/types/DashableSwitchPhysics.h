#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DashableSwitchPhysics__Class.h>
#include <Modloader/app/structs/DashableSwitchPhysics.h>

namespace app::classes::types {
    namespace DashableSwitchPhysics {
        namespace {
            inline app::DashableSwitchPhysics__Class* type_info_ref = nullptr;
        }
        inline app::DashableSwitchPhysics__Class** type_info = &type_info_ref;
        inline app::DashableSwitchPhysics__Class* get_class() {
            return il2cpp::get_class<app::DashableSwitchPhysics__Class>(type_info, "", "DashableSwitchPhysics");
        }
        inline app::DashableSwitchPhysics* create() {
            return il2cpp::create_object<app::DashableSwitchPhysics>(get_class());
        }
    } // namespace DashableSwitchPhysics
} // namespace app::classes::types
