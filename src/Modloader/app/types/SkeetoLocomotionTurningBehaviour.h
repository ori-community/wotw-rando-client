#pragma once
#include <Modloader/app/structs/SkeetoLocomotionTurningBehaviour.h>
#include <Modloader/app/structs/SkeetoLocomotionTurningBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoLocomotionTurningBehaviour {
        inline app::SkeetoLocomotionTurningBehaviour__Class** type_info() {
            static app::SkeetoLocomotionTurningBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoLocomotionTurningBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoLocomotionTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoLocomotionTurningBehaviour__Class>(type_info(), "", "SkeetoLocomotionTurningBehaviour");
        }
        inline app::SkeetoLocomotionTurningBehaviour* create() {
            return il2cpp::create_object<app::SkeetoLocomotionTurningBehaviour>(get_class());
        }
    } // namespace SkeetoLocomotionTurningBehaviour
} // namespace app::classes::types
