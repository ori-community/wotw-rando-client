#pragma once
#include <Modloader/app/structs/FrogLocomotionIdleBehaviour.h>
#include <Modloader/app/structs/FrogLocomotionIdleBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrogLocomotionIdleBehaviour {
        inline app::FrogLocomotionIdleBehaviour__Class** type_info() {
            static app::FrogLocomotionIdleBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FrogLocomotionIdleBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FrogLocomotionIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FrogLocomotionIdleBehaviour__Class>(type_info(), "", "FrogLocomotionIdleBehaviour");
        }
        inline app::FrogLocomotionIdleBehaviour* create() {
            return il2cpp::create_object<app::FrogLocomotionIdleBehaviour>(get_class());
        }
    } // namespace FrogLocomotionIdleBehaviour
} // namespace app::classes::types
