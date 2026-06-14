#pragma once
#include <Modloader/app/structs/BreakPhysicsSystemAnimator.h>
#include <Modloader/app/structs/BreakPhysicsSystemAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BreakPhysicsSystemAnimator {
        inline app::BreakPhysicsSystemAnimator__Class** type_info() {
            static app::BreakPhysicsSystemAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BreakPhysicsSystemAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BreakPhysicsSystemAnimator__Class* get_class() {
            return il2cpp::get_class<app::BreakPhysicsSystemAnimator__Class>(type_info(), "Moon.Timeline", "BreakPhysicsSystemAnimator");
        }
        inline app::BreakPhysicsSystemAnimator* create() {
            return il2cpp::create_object<app::BreakPhysicsSystemAnimator>(get_class());
        }
    } // namespace BreakPhysicsSystemAnimator
} // namespace app::classes::types
