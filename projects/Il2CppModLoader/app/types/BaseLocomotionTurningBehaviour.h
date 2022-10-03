#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaseLocomotionTurningBehaviour {
        namespace {
            app::BaseLocomotionTurningBehaviour__Class* type_info_ref = nullptr;
        }
        app::BaseLocomotionTurningBehaviour__Class** type_info = &type_info_ref;
        inline app::BaseLocomotionTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::BaseLocomotionTurningBehaviour__Class>(type_info, "", "BaseLocomotionTurningBehaviour");
        }
        inline app::BaseLocomotionTurningBehaviour* create() {
            return il2cpp::create_object<app::BaseLocomotionTurningBehaviour>(get_class());
        }
    } // namespace BaseLocomotionTurningBehaviour
} // namespace app::classes::types
