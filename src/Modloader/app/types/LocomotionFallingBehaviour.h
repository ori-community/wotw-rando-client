#pragma once
#include <Modloader/app/structs/LocomotionFallingBehaviour.h>
#include <Modloader/app/structs/LocomotionFallingBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocomotionFallingBehaviour {
        inline app::LocomotionFallingBehaviour__Class** type_info() {
            static app::LocomotionFallingBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocomotionFallingBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocomotionFallingBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionFallingBehaviour__Class>(type_info(), "", "LocomotionFallingBehaviour");
        }
        inline app::LocomotionFallingBehaviour* create() {
            return il2cpp::create_object<app::LocomotionFallingBehaviour>(get_class());
        }
    } // namespace LocomotionFallingBehaviour
} // namespace app::classes::types
