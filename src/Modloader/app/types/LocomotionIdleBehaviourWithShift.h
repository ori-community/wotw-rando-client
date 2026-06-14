#pragma once
#include <Modloader/app/structs/LocomotionIdleBehaviourWithShift.h>
#include <Modloader/app/structs/LocomotionIdleBehaviourWithShift__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocomotionIdleBehaviourWithShift {
        inline app::LocomotionIdleBehaviourWithShift__Class** type_info() {
            static app::LocomotionIdleBehaviourWithShift__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocomotionIdleBehaviourWithShift__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocomotionIdleBehaviourWithShift__Class* get_class() {
            return il2cpp::get_class<app::LocomotionIdleBehaviourWithShift__Class>(type_info(), "", "LocomotionIdleBehaviourWithShift");
        }
        inline app::LocomotionIdleBehaviourWithShift* create() {
            return il2cpp::create_object<app::LocomotionIdleBehaviourWithShift>(get_class());
        }
    } // namespace LocomotionIdleBehaviourWithShift
} // namespace app::classes::types
