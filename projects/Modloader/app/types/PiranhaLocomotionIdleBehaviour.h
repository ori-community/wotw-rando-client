#pragma once
#include <Modloader/app/structs/PiranhaLocomotionIdleBehaviour.h>
#include <Modloader/app/structs/PiranhaLocomotionIdleBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PiranhaLocomotionIdleBehaviour {
        inline app::PiranhaLocomotionIdleBehaviour__Class** type_info() {
            static app::PiranhaLocomotionIdleBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PiranhaLocomotionIdleBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PiranhaLocomotionIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PiranhaLocomotionIdleBehaviour__Class>(type_info(), "", "PiranhaLocomotionIdleBehaviour");
        }
        inline app::PiranhaLocomotionIdleBehaviour* create() {
            return il2cpp::create_object<app::PiranhaLocomotionIdleBehaviour>(get_class());
        }
    } // namespace PiranhaLocomotionIdleBehaviour
} // namespace app::classes::types
