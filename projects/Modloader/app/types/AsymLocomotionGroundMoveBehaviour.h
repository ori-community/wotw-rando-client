#pragma once
#include <Modloader/app/structs/AsymLocomotionGroundMoveBehaviour.h>
#include <Modloader/app/structs/AsymLocomotionGroundMoveBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsymLocomotionGroundMoveBehaviour {
        inline app::AsymLocomotionGroundMoveBehaviour__Class** type_info() {
            static app::AsymLocomotionGroundMoveBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AsymLocomotionGroundMoveBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AsymLocomotionGroundMoveBehaviour__Class* get_class() {
            return il2cpp::get_class<app::AsymLocomotionGroundMoveBehaviour__Class>(type_info(), "", "AsymLocomotionGroundMoveBehaviour");
        }
        inline app::AsymLocomotionGroundMoveBehaviour* create() {
            return il2cpp::create_object<app::AsymLocomotionGroundMoveBehaviour>(get_class());
        }
    } // namespace AsymLocomotionGroundMoveBehaviour
} // namespace app::classes::types
