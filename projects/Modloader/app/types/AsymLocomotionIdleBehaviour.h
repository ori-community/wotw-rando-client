#pragma once
#include <Modloader/app/structs/AsymLocomotionIdleBehaviour.h>
#include <Modloader/app/structs/AsymLocomotionIdleBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsymLocomotionIdleBehaviour {
        inline app::AsymLocomotionIdleBehaviour__Class** type_info() {
            static app::AsymLocomotionIdleBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AsymLocomotionIdleBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AsymLocomotionIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::AsymLocomotionIdleBehaviour__Class>(type_info(), "", "AsymLocomotionIdleBehaviour");
        }
        inline app::AsymLocomotionIdleBehaviour* create() {
            return il2cpp::create_object<app::AsymLocomotionIdleBehaviour>(get_class());
        }
    } // namespace AsymLocomotionIdleBehaviour
} // namespace app::classes::types
