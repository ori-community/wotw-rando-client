#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BreakPhysicsSystemAnimator__Class.h>
#include <Modloader/app/structs/BreakPhysicsSystemAnimator.h>

namespace app::classes::types {
    namespace BreakPhysicsSystemAnimator {
        namespace {
            inline app::BreakPhysicsSystemAnimator__Class* type_info_ref = nullptr;
        }
        inline app::BreakPhysicsSystemAnimator__Class** type_info = &type_info_ref;
        inline app::BreakPhysicsSystemAnimator__Class* get_class() {
            return il2cpp::get_class<app::BreakPhysicsSystemAnimator__Class>(type_info, "Moon.Timeline", "BreakPhysicsSystemAnimator");
        }
        inline app::BreakPhysicsSystemAnimator* create() {
            return il2cpp::create_object<app::BreakPhysicsSystemAnimator>(get_class());
        }
    } // namespace BreakPhysicsSystemAnimator
} // namespace app::classes::types
