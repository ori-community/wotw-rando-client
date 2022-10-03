#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocomotionIdleBehaviour {
        namespace {
            app::LocomotionIdleBehaviour__Class* type_info_ref = nullptr;
        }
        app::LocomotionIdleBehaviour__Class** type_info = &type_info_ref;
        inline app::LocomotionIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionIdleBehaviour__Class>(type_info, "", "LocomotionIdleBehaviour");
        }
        inline app::LocomotionIdleBehaviour* create() {
            return il2cpp::create_object<app::LocomotionIdleBehaviour>(get_class());
        }
    } // namespace LocomotionIdleBehaviour
} // namespace app::classes::types
