#pragma once
#include <Modloader/app/structs/LocomotionAirMoveTimelineBehaviour.h>
#include <Modloader/app/structs/LocomotionAirMoveTimelineBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocomotionAirMoveTimelineBehaviour {
        inline app::LocomotionAirMoveTimelineBehaviour__Class** type_info() {
            static app::LocomotionAirMoveTimelineBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocomotionAirMoveTimelineBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocomotionAirMoveTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionAirMoveTimelineBehaviour__Class>(type_info(), "", "LocomotionAirMoveTimelineBehaviour");
        }
        inline app::LocomotionAirMoveTimelineBehaviour* create() {
            return il2cpp::create_object<app::LocomotionAirMoveTimelineBehaviour>(get_class());
        }
    } // namespace LocomotionAirMoveTimelineBehaviour
} // namespace app::classes::types
