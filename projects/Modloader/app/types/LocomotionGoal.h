#pragma once
#include <Modloader/app/structs/LocomotionGoal.h>
#include <Modloader/app/structs/LocomotionGoal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocomotionGoal {
        inline app::LocomotionGoal__Class** type_info() {
            static app::LocomotionGoal__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocomotionGoal__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocomotionGoal__Class* get_class() {
            return il2cpp::get_class<app::LocomotionGoal__Class>(type_info(), "Moon", "LocomotionGoal");
        }
        inline app::LocomotionGoal* create() {
            return il2cpp::create_object<app::LocomotionGoal>(get_class());
        }
    } // namespace LocomotionGoal
} // namespace app::classes::types
