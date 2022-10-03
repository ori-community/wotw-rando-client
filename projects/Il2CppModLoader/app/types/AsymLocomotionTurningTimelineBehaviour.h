#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AsymLocomotionTurningTimelineBehaviour {
        namespace {
            app::AsymLocomotionTurningTimelineBehaviour__Class* type_info_ref = nullptr;
        }
        app::AsymLocomotionTurningTimelineBehaviour__Class** type_info = &type_info_ref;
        inline app::AsymLocomotionTurningTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::AsymLocomotionTurningTimelineBehaviour__Class>(type_info, "", "AsymLocomotionTurningTimelineBehaviour");
        }
        inline app::AsymLocomotionTurningTimelineBehaviour* create() {
            return il2cpp::create_object<app::AsymLocomotionTurningTimelineBehaviour>(get_class());
        }
    } // namespace AsymLocomotionTurningTimelineBehaviour
} // namespace app::classes::types
