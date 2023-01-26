#pragma once
#include <Modloader/app/structs/GroundLocomotion.h>
#include <Modloader/app/structs/GroundLocomotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundLocomotion {
        inline app::GroundLocomotion__Class** type_info() {
            static app::GroundLocomotion__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroundLocomotion__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroundLocomotion__Class* get_class() {
            return il2cpp::get_class<app::GroundLocomotion__Class>(type_info(), "", "GroundLocomotion");
        }
        inline app::GroundLocomotion* create() {
            return il2cpp::create_object<app::GroundLocomotion>(get_class());
        }
    } // namespace GroundLocomotion
} // namespace app::classes::types
