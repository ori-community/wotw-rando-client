#pragma once
#include <Modloader/app/structs/LocomotionVolumeMoveTimelineBehaviour.h>
#include <Modloader/app/structs/LocomotionVolumeMoveTimelineBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocomotionVolumeMoveTimelineBehaviour {
        inline app::LocomotionVolumeMoveTimelineBehaviour__Class** type_info() {
            static app::LocomotionVolumeMoveTimelineBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocomotionVolumeMoveTimelineBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocomotionVolumeMoveTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionVolumeMoveTimelineBehaviour__Class>(type_info(), "", "LocomotionVolumeMoveTimelineBehaviour");
        }
        inline app::LocomotionVolumeMoveTimelineBehaviour* create() {
            return il2cpp::create_object<app::LocomotionVolumeMoveTimelineBehaviour>(get_class());
        }
    } // namespace LocomotionVolumeMoveTimelineBehaviour
} // namespace app::classes::types
