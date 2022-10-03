#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocomotionFallingBehaviour {
        namespace {
            app::LocomotionFallingBehaviour__Class* type_info_ref = nullptr;
        }
        app::LocomotionFallingBehaviour__Class** type_info = &type_info_ref;
        inline app::LocomotionFallingBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionFallingBehaviour__Class>(type_info, "", "LocomotionFallingBehaviour");
        }
        inline app::LocomotionFallingBehaviour* create() {
            return il2cpp::create_object<app::LocomotionFallingBehaviour>(get_class());
        }
    } // namespace LocomotionFallingBehaviour
} // namespace app::classes::types
