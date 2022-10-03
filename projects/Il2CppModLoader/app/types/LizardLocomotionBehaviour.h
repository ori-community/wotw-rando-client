#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LizardLocomotionBehaviour {
        namespace {
            app::LizardLocomotionBehaviour__Class* type_info_ref = nullptr;
        }
        app::LizardLocomotionBehaviour__Class** type_info = &type_info_ref;
        inline app::LizardLocomotionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LizardLocomotionBehaviour__Class>(type_info, "", "LizardLocomotionBehaviour");
        }
        inline app::LizardLocomotionBehaviour* create() {
            return il2cpp::create_object<app::LizardLocomotionBehaviour>(get_class());
        }
    } // namespace LizardLocomotionBehaviour
} // namespace app::classes::types
