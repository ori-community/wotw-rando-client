#pragma once
#include <Modloader/app/structs/LocomotionAirMoveBehaviour.h>
#include <Modloader/app/structs/LocomotionAirMoveBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocomotionAirMoveBehaviour {
        inline app::LocomotionAirMoveBehaviour__Class** type_info() {
            static app::LocomotionAirMoveBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocomotionAirMoveBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocomotionAirMoveBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionAirMoveBehaviour__Class>(type_info(), "", "LocomotionAirMoveBehaviour");
        }
        inline app::LocomotionAirMoveBehaviour* create() {
            return il2cpp::create_object<app::LocomotionAirMoveBehaviour>(get_class());
        }
    } // namespace LocomotionAirMoveBehaviour
} // namespace app::classes::types
