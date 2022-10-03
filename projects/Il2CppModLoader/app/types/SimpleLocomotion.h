#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleLocomotion {
        namespace {
            app::SimpleLocomotion__Class* type_info_ref = nullptr;
        }
        app::SimpleLocomotion__Class** type_info = &type_info_ref;
        inline app::SimpleLocomotion__Class* get_class() {
            return il2cpp::get_class<app::SimpleLocomotion__Class>(type_info, "RootMotion.Demos", "SimpleLocomotion");
        }
        inline app::SimpleLocomotion* create() {
            return il2cpp::create_object<app::SimpleLocomotion>(get_class());
        }
    } // namespace SimpleLocomotion
} // namespace app::classes::types
