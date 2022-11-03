#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LocomotionIdleBehaviourWithShift {
        namespace {
            inline app::LocomotionIdleBehaviourWithShift__Class* type_info_ref = nullptr;
        }
        inline app::LocomotionIdleBehaviourWithShift__Class** type_info = &type_info_ref;
        inline app::LocomotionIdleBehaviourWithShift__Class* get_class() {
            return il2cpp::get_class<app::LocomotionIdleBehaviourWithShift__Class>(type_info, "", "LocomotionIdleBehaviourWithShift");
        }
        inline app::LocomotionIdleBehaviourWithShift* create() {
            return il2cpp::create_object<app::LocomotionIdleBehaviourWithShift>(get_class());
        }
    } // namespace LocomotionIdleBehaviourWithShift
} // namespace app::classes::types
