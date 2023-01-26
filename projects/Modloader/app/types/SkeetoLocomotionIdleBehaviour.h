#pragma once
#include <Modloader/app/structs/SkeetoLocomotionIdleBehaviour.h>
#include <Modloader/app/structs/SkeetoLocomotionIdleBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoLocomotionIdleBehaviour {
        inline app::SkeetoLocomotionIdleBehaviour__Class** type_info() {
            static app::SkeetoLocomotionIdleBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoLocomotionIdleBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoLocomotionIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoLocomotionIdleBehaviour__Class>(type_info(), "", "SkeetoLocomotionIdleBehaviour");
        }
        inline app::SkeetoLocomotionIdleBehaviour* create() {
            return il2cpp::create_object<app::SkeetoLocomotionIdleBehaviour>(get_class());
        }
    } // namespace SkeetoLocomotionIdleBehaviour
} // namespace app::classes::types
