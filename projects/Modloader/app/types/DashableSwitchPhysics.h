#pragma once
#include <Modloader/app/structs/DashableSwitchPhysics.h>
#include <Modloader/app/structs/DashableSwitchPhysics__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DashableSwitchPhysics {
        inline app::DashableSwitchPhysics__Class** type_info() {
            static app::DashableSwitchPhysics__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DashableSwitchPhysics__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DashableSwitchPhysics__Class* get_class() {
            return il2cpp::get_class<app::DashableSwitchPhysics__Class>(type_info(), "", "DashableSwitchPhysics");
        }
        inline app::DashableSwitchPhysics* create() {
            return il2cpp::create_object<app::DashableSwitchPhysics>(get_class());
        }
    } // namespace DashableSwitchPhysics
} // namespace app::classes::types
