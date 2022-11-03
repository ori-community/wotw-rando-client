#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LocomotionVolumeMoveTimelineBehaviour {
        namespace {
            inline app::LocomotionVolumeMoveTimelineBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LocomotionVolumeMoveTimelineBehaviour__Class** type_info = &type_info_ref;
        inline app::LocomotionVolumeMoveTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionVolumeMoveTimelineBehaviour__Class>(type_info, "", "LocomotionVolumeMoveTimelineBehaviour");
        }
        inline app::LocomotionVolumeMoveTimelineBehaviour* create() {
            return il2cpp::create_object<app::LocomotionVolumeMoveTimelineBehaviour>(get_class());
        }
    } // namespace LocomotionVolumeMoveTimelineBehaviour
} // namespace app::classes::types
