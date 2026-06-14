#pragma once
#include <Modloader/app/structs/LocomotionIdleTimelineBehaviour.h>
#include <Modloader/app/structs/LocomotionIdleTimelineBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocomotionIdleTimelineBehaviour {
        inline app::LocomotionIdleTimelineBehaviour__Class** type_info() {
            static app::LocomotionIdleTimelineBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocomotionIdleTimelineBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocomotionIdleTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionIdleTimelineBehaviour__Class>(type_info(), "", "LocomotionIdleTimelineBehaviour");
        }
        inline app::LocomotionIdleTimelineBehaviour* create() {
            return il2cpp::create_object<app::LocomotionIdleTimelineBehaviour>(get_class());
        }
    } // namespace LocomotionIdleTimelineBehaviour
} // namespace app::classes::types
