#pragma once
#include <Modloader/app/structs/LocomotionGroundMoveBehaviour.h>
#include <Modloader/app/structs/LocomotionGroundMoveBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocomotionGroundMoveBehaviour {
        inline app::LocomotionGroundMoveBehaviour__Class** type_info() {
            static app::LocomotionGroundMoveBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocomotionGroundMoveBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocomotionGroundMoveBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionGroundMoveBehaviour__Class>(type_info(), "", "LocomotionGroundMoveBehaviour");
        }
        inline app::LocomotionGroundMoveBehaviour* create() {
            return il2cpp::create_object<app::LocomotionGroundMoveBehaviour>(get_class());
        }
    } // namespace LocomotionGroundMoveBehaviour
} // namespace app::classes::types
