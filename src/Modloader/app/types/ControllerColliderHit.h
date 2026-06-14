#pragma once
#include <Modloader/app/structs/ControllerColliderHit.h>
#include <Modloader/app/structs/ControllerColliderHit__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControllerColliderHit {
        inline app::ControllerColliderHit__Class** type_info() {
            static app::ControllerColliderHit__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ControllerColliderHit__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ControllerColliderHit__Class* get_class() {
            return il2cpp::get_class<app::ControllerColliderHit__Class>(type_info(), "UnityEngine", "ControllerColliderHit");
        }
        inline app::ControllerColliderHit* create() {
            return il2cpp::create_object<app::ControllerColliderHit>(get_class());
        }
    } // namespace ControllerColliderHit
} // namespace app::classes::types
