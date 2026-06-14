#pragma once
#include <Modloader/app/structs/LocomotionMoveBehaviour.h>
#include <Modloader/app/structs/LocomotionMoveBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocomotionMoveBehaviour {
        inline app::LocomotionMoveBehaviour__Class** type_info() {
            static app::LocomotionMoveBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocomotionMoveBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocomotionMoveBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionMoveBehaviour__Class>(type_info(), "", "LocomotionMoveBehaviour");
        }
        inline app::LocomotionMoveBehaviour* create() {
            return il2cpp::create_object<app::LocomotionMoveBehaviour>(get_class());
        }
    } // namespace LocomotionMoveBehaviour
} // namespace app::classes::types
