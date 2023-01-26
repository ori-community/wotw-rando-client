#pragma once
#include <Modloader/app/structs/AirLocomotion.h>
#include <Modloader/app/structs/AirLocomotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AirLocomotion {
        inline app::AirLocomotion__Class** type_info() {
            static app::AirLocomotion__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AirLocomotion__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AirLocomotion__Class* get_class() {
            return il2cpp::get_class<app::AirLocomotion__Class>(type_info(), "", "AirLocomotion");
        }
        inline app::AirLocomotion* create() {
            return il2cpp::create_object<app::AirLocomotion>(get_class());
        }
    } // namespace AirLocomotion
} // namespace app::classes::types
