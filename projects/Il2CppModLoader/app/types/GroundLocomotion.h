#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroundLocomotion {
        namespace {
            app::GroundLocomotion__Class* type_info_ref = nullptr;
        }
        app::GroundLocomotion__Class** type_info = &type_info_ref;
        inline app::GroundLocomotion__Class* get_class() {
            return il2cpp::get_class<app::GroundLocomotion__Class>(type_info, "", "GroundLocomotion");
        }
        inline app::GroundLocomotion* create() {
            return il2cpp::create_object<app::GroundLocomotion>(get_class());
        }
    } // namespace GroundLocomotion
} // namespace app::classes::types
