#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AsymLocomotionGroundMoveBehaviour {
        namespace {
            app::AsymLocomotionGroundMoveBehaviour__Class* type_info_ref = nullptr;
        }
        app::AsymLocomotionGroundMoveBehaviour__Class** type_info = &type_info_ref;
        inline app::AsymLocomotionGroundMoveBehaviour__Class* get_class() {
            return il2cpp::get_class<app::AsymLocomotionGroundMoveBehaviour__Class>(type_info, "", "AsymLocomotionGroundMoveBehaviour");
        }
        inline app::AsymLocomotionGroundMoveBehaviour* create() {
            return il2cpp::create_object<app::AsymLocomotionGroundMoveBehaviour>(get_class());
        }
    } // namespace AsymLocomotionGroundMoveBehaviour
} // namespace app::classes::types
