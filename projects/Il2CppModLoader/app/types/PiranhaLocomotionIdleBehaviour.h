#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PiranhaLocomotionIdleBehaviour {
        namespace {
            app::PiranhaLocomotionIdleBehaviour__Class* type_info_ref = nullptr;
        }
        app::PiranhaLocomotionIdleBehaviour__Class** type_info = &type_info_ref;
        inline app::PiranhaLocomotionIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PiranhaLocomotionIdleBehaviour__Class>(type_info, "", "PiranhaLocomotionIdleBehaviour");
        }
        inline app::PiranhaLocomotionIdleBehaviour* create() {
            return il2cpp::create_object<app::PiranhaLocomotionIdleBehaviour>(get_class());
        }
    } // namespace PiranhaLocomotionIdleBehaviour
} // namespace app::classes::types
