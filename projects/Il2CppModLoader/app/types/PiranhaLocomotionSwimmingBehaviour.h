#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PiranhaLocomotionSwimmingBehaviour {
        namespace {
            app::PiranhaLocomotionSwimmingBehaviour__Class* type_info_ref = nullptr;
        }
        app::PiranhaLocomotionSwimmingBehaviour__Class** type_info = &type_info_ref;
        inline app::PiranhaLocomotionSwimmingBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PiranhaLocomotionSwimmingBehaviour__Class>(type_info, "", "PiranhaLocomotionSwimmingBehaviour");
        }
        inline app::PiranhaLocomotionSwimmingBehaviour* create() {
            return il2cpp::create_object<app::PiranhaLocomotionSwimmingBehaviour>(get_class());
        }
    } // namespace PiranhaLocomotionSwimmingBehaviour
} // namespace app::classes::types
