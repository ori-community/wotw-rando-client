#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocomotionAirMoveBehaviour {
        namespace {
            app::LocomotionAirMoveBehaviour__Class* type_info_ref = nullptr;
        }
        app::LocomotionAirMoveBehaviour__Class** type_info = &type_info_ref;
        inline app::LocomotionAirMoveBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionAirMoveBehaviour__Class>(type_info, "", "LocomotionAirMoveBehaviour");
        }
        inline app::LocomotionAirMoveBehaviour* create() {
            return il2cpp::create_object<app::LocomotionAirMoveBehaviour>(get_class());
        }
    } // namespace LocomotionAirMoveBehaviour
} // namespace app::classes::types
