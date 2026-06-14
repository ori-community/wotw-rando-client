#pragma once
#include <Modloader/app/structs/LocomotionIdleBehaviour.h>
#include <Modloader/app/structs/LocomotionIdleBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocomotionIdleBehaviour {
        inline app::LocomotionIdleBehaviour__Class** type_info() {
            static app::LocomotionIdleBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocomotionIdleBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocomotionIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionIdleBehaviour__Class>(type_info(), "", "LocomotionIdleBehaviour");
        }
        inline app::LocomotionIdleBehaviour* create() {
            return il2cpp::create_object<app::LocomotionIdleBehaviour>(get_class());
        }
    } // namespace LocomotionIdleBehaviour
} // namespace app::classes::types
