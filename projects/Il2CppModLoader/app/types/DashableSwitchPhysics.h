#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DashableSwitchPhysics {
        namespace {
            app::DashableSwitchPhysics__Class* type_info_ref = nullptr;
        }
        app::DashableSwitchPhysics__Class** type_info = &type_info_ref;
        inline app::DashableSwitchPhysics__Class* get_class() {
            return il2cpp::get_class<app::DashableSwitchPhysics__Class>(type_info, "", "DashableSwitchPhysics");
        }
        inline app::DashableSwitchPhysics* create() {
            return il2cpp::create_object<app::DashableSwitchPhysics>(get_class());
        }
    } // namespace DashableSwitchPhysics
} // namespace app::classes::types
