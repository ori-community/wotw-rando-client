#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LocomotionIdleTimelineBehaviour {
        namespace {
            inline app::LocomotionIdleTimelineBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LocomotionIdleTimelineBehaviour__Class** type_info = &type_info_ref;
        inline app::LocomotionIdleTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionIdleTimelineBehaviour__Class>(type_info, "", "LocomotionIdleTimelineBehaviour");
        }
        inline app::LocomotionIdleTimelineBehaviour* create() {
            return il2cpp::create_object<app::LocomotionIdleTimelineBehaviour>(get_class());
        }
    } // namespace LocomotionIdleTimelineBehaviour
} // namespace app::classes::types
