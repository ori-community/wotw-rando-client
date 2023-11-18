#pragma once
#include <Modloader/app/structs/LagoonContactSwitchDoors.h>
#include <Modloader/app/structs/LagoonContactSwitchDoors__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LagoonContactSwitchDoors {
        inline app::LagoonContactSwitchDoors__Class** type_info() {
            static app::LagoonContactSwitchDoors__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LagoonContactSwitchDoors__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LagoonContactSwitchDoors__Class* get_class() {
            return il2cpp::get_class<app::LagoonContactSwitchDoors__Class>(type_info(), "", "LagoonContactSwitchDoors");
        }
        inline app::LagoonContactSwitchDoors* create() {
            return il2cpp::create_object<app::LagoonContactSwitchDoors>(get_class());
        }
    } // namespace LagoonContactSwitchDoors
} // namespace app::classes::types
