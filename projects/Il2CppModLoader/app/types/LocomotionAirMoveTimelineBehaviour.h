#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocomotionAirMoveTimelineBehaviour {
        namespace {
            app::LocomotionAirMoveTimelineBehaviour__Class* type_info_ref = nullptr;
        }
        app::LocomotionAirMoveTimelineBehaviour__Class** type_info = &type_info_ref;
        inline app::LocomotionAirMoveTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionAirMoveTimelineBehaviour__Class>(type_info, "", "LocomotionAirMoveTimelineBehaviour");
        }
        inline app::LocomotionAirMoveTimelineBehaviour* create() {
            return il2cpp::create_object<app::LocomotionAirMoveTimelineBehaviour>(get_class());
        }
    } // namespace LocomotionAirMoveTimelineBehaviour
} // namespace app::classes::types
