#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoLocomotionIdleBehaviour {
        namespace {
            app::SkeetoLocomotionIdleBehaviour__Class* type_info_ref = nullptr;
        }
        app::SkeetoLocomotionIdleBehaviour__Class** type_info = &type_info_ref;
        inline app::SkeetoLocomotionIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoLocomotionIdleBehaviour__Class>(type_info, "", "SkeetoLocomotionIdleBehaviour");
        }
        inline app::SkeetoLocomotionIdleBehaviour* create() {
            return il2cpp::create_object<app::SkeetoLocomotionIdleBehaviour>(get_class());
        }
    } // namespace SkeetoLocomotionIdleBehaviour
} // namespace app::classes::types
