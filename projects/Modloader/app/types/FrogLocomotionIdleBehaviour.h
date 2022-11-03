#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FrogLocomotionIdleBehaviour {
        namespace {
            inline app::FrogLocomotionIdleBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::FrogLocomotionIdleBehaviour__Class** type_info = &type_info_ref;
        inline app::FrogLocomotionIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FrogLocomotionIdleBehaviour__Class>(type_info, "", "FrogLocomotionIdleBehaviour");
        }
        inline app::FrogLocomotionIdleBehaviour* create() {
            return il2cpp::create_object<app::FrogLocomotionIdleBehaviour>(get_class());
        }
    } // namespace FrogLocomotionIdleBehaviour
} // namespace app::classes::types
