#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LagoonContactSwitchDoors {
        namespace {
            inline app::LagoonContactSwitchDoors__Class* type_info_ref = nullptr;
        }
        inline app::LagoonContactSwitchDoors__Class** type_info = &type_info_ref;
        inline app::LagoonContactSwitchDoors__Class* get_class() {
            return il2cpp::get_class<app::LagoonContactSwitchDoors__Class>(type_info, "", "LagoonContactSwitchDoors");
        }
        inline app::LagoonContactSwitchDoors* create() {
            return il2cpp::create_object<app::LagoonContactSwitchDoors>(get_class());
        }
    } // namespace LagoonContactSwitchDoors
} // namespace app::classes::types
