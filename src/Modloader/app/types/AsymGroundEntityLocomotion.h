#pragma once
#include <Modloader/app/structs/AsymGroundEntityLocomotion.h>
#include <Modloader/app/structs/AsymGroundEntityLocomotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsymGroundEntityLocomotion {
        inline app::AsymGroundEntityLocomotion__Class** type_info() {
            static app::AsymGroundEntityLocomotion__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AsymGroundEntityLocomotion__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AsymGroundEntityLocomotion__Class* get_class() {
            return il2cpp::get_class<app::AsymGroundEntityLocomotion__Class>(type_info(), "Moon", "AsymGroundEntityLocomotion");
        }
        inline app::AsymGroundEntityLocomotion* create() {
            return il2cpp::create_object<app::AsymGroundEntityLocomotion>(get_class());
        }
    } // namespace AsymGroundEntityLocomotion
} // namespace app::classes::types
