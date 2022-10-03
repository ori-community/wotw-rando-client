#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BreakPhysicsSystemAnimator {
        namespace {
            app::BreakPhysicsSystemAnimator__Class* type_info_ref = nullptr;
        }
        app::BreakPhysicsSystemAnimator__Class** type_info = &type_info_ref;
        inline app::BreakPhysicsSystemAnimator__Class* get_class() {
            return il2cpp::get_class<app::BreakPhysicsSystemAnimator__Class>(type_info, "Moon.Timeline", "BreakPhysicsSystemAnimator");
        }
        inline app::BreakPhysicsSystemAnimator* create() {
            return il2cpp::create_object<app::BreakPhysicsSystemAnimator>(get_class());
        }
    } // namespace BreakPhysicsSystemAnimator
} // namespace app::classes::types
